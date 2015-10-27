using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml;

using System.Runtime.InteropServices;
using TangramCLR;

namespace TangramWinFormApp
{
    public delegate void TangramMDIChildLoadEventHandler(TangramMdiChild ChildForm);
    public delegate void TangramMDIChildClosingEventHandler(TangramMdiChild ChildForm);
    public delegate void TangramMDIChildActivatedEventHandler(TangramMdiChild ChildForm);

    [ComVisible(true), InterfaceType(ComInterfaceType.InterfaceIsIDispatch)]
    public interface TangramMDIChildEvent
    {
        //Add a DispIdAttribute to any members in the source interface to specify the COM DispId.
        [DispId(0x000001)]
        void TangramMDIChildLoad(TangramMdiChild MdiChildForm); //This method will be visible from JS
        [DispId(0x000002)]
        void TangramMDIChildClosing(TangramMdiChild MdiChildForm); //This method will be visible from JS
        [DispId(0x000003)]
        void TangramMDIChildActivated(TangramMdiChild MdiChildForm); //This method will be visible from JS
    }

    [ComVisible(true), ComSourceInterfacesAttribute(typeof(TangramMDIChildEvent))]
    public partial class TangramMdiChild : Form
    {
        public event TangramMDIChildLoadEventHandler TangramMDIChildLoad;
        public event TangramMDIChildClosingEventHandler TangramMDIChildClosing;
        public event TangramMDIChildActivatedEventHandler TangramMDIChildActivated;
        private TangramCLR.Tangram thisTangram = null;
        public string strURL = "";
        public TangramMdiChild()
        {
            InitializeComponent();
        }

        public IntPtr ChildClientHandle()
        {
            return this.TangramPanel.Handle;
        }
        private void TangramMdiChild_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (TangramMDIChildClosing != null)
            {
                TangramMDIChildClosing(this);
            }
        }

        private void TangramMdiChild_Load(object sender, EventArgs e)
        {
            thisTangram = TangramCore.CreateTangram(this, this);
            thisTangram.URL = this.Tag as string;
            if (TangramMDIChildLoad != null)
            {
                TangramMDIChildLoad(this);
            }
        }

        private void TangramMdiChild_Activated(object sender, EventArgs e)
        {
            if (TangramMDIChildActivated != null)
            {
                TangramMDIChildActivated(this);
            }
        }

        public void WriteObjInfo(string strInfo)
        {
            webBrowser.Document.Body.InnerHtml = strInfo;
        }

        public void FillListView(string strListXml)
        {
            XmlDocument doc = new XmlDocument();
            doc.LoadXml(strListXml);
            XmlNode node = doc.ChildNodes[0];
            int nCount = node.ChildNodes.Count;
            for(int i=0;i<nCount;i++)
            {
                string s = node.ChildNodes[i].Attributes["nodetext"].Value;
                string s1 = node.ChildNodes[i].OuterXml;
                ListViewItem item = listView.Items.Add(s,0);
                item.Tag = node.ChildNodes[i].OuterXml;
                item.ToolTipText = "Double Click Me, Please";
            }
        }
        private void listView_ItemActivate(object sender, EventArgs e)
        {
            TangramCore.ExtendCtrl(subpanel, listView.FocusedItem.Tag.ToString());
        }
    }
}
