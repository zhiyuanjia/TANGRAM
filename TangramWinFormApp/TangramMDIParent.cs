using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using TangramCLR;

namespace TangramWinFormApp
{
    [ComVisible(true), InterfaceType(ComInterfaceType.InterfaceIsIDispatch)]
    public interface TangramMDIParentEvent
    {
        //Add a DispIdAttribute to any members in the source interface to specify the COM DispId.
        [DispId(0x000001)]
        void TangramMDIParentLoad(TangramMDIParent MainForm); //This method will be visible from JS
        [DispId(0x000002)]
        bool TangramMDIParentClosing(TangramMDIParent MainForm); //This method will be visible from JS
        [DispId(0x000003)]
        void TangramMDIParentOutputButtonClick(); //This method will be visible from JS
    }
    
    public delegate void TangramMDIParentLoadEventHandler(TangramMDIParent MainForm);
    public delegate bool TangramMDIParentClosingEventHandler(TangramMDIParent MainForm);
    public delegate void TangramMDIParentOutputButtonClickHandler();

    [ComVisible(true), ComSourceInterfacesAttribute(typeof(TangramMDIParentEvent))]
    public partial class TangramMDIParent : Form
    {
        public event TangramMDIParentLoadEventHandler TangramMDIParentLoad;
        public event TangramMDIParentClosingEventHandler TangramMDIParentClosing;
        public event TangramMDIParentOutputButtonClickHandler TangramMDIParentOutputButtonClick;
        private int childFormNumber = 0;
        private TangramCLR.Tangram thisTangram = null;

        public TangramMDIParent()
        {
            InitializeComponent();
        }

        private void ShowNewForm(object sender, EventArgs e)
        {
            Form childForm = new TangramForm();
            childForm.MdiParent = this;
            childForm.Text = "Window " + childFormNumber++;
            childForm.Show();
             Form childForm2 = new TangramForm();
             childForm2.Show(childForm);
       }

        private void OpenFile(object sender, EventArgs e)
        {
            OpenFileDialog openFileDialog = new OpenFileDialog();
            openFileDialog.InitialDirectory = Environment.GetFolderPath(Environment.SpecialFolder.Personal);
            openFileDialog.Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
            if (openFileDialog.ShowDialog(this) == DialogResult.OK)
            {
                string FileName = openFileDialog.FileName;
            }
        }

        private void SaveAsToolStripMenuItem_Click(object sender, EventArgs e)
        {
            SaveFileDialog saveFileDialog = new SaveFileDialog();
            saveFileDialog.InitialDirectory = Environment.GetFolderPath(Environment.SpecialFolder.Personal);
            saveFileDialog.Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
            if (saveFileDialog.ShowDialog(this) == DialogResult.OK)
            {
                string FileName = saveFileDialog.FileName;
            }
        }

        private void ExitToolsStripMenuItem_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void CutToolStripMenuItem_Click(object sender, EventArgs e)
        {
        }

        private void CopyToolStripMenuItem_Click(object sender, EventArgs e)
        {
        }

        private void PasteToolStripMenuItem_Click(object sender, EventArgs e)
        {
        }

        private void ToolBarToolStripMenuItem_Click(object sender, EventArgs e)
        {
            toolStrip.Visible = toolBarToolStripMenuItem.Checked;
        }

        private void StatusBarToolStripMenuItem_Click(object sender, EventArgs e)
        {
            statusStrip.Visible = statusBarToolStripMenuItem.Checked;
        }

        private void CascadeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            LayoutMdi(MdiLayout.Cascade);
        }

        private void TileVerticalToolStripMenuItem_Click(object sender, EventArgs e)
        {
            LayoutMdi(MdiLayout.TileVertical);
        }

        private void TileHorizontalToolStripMenuItem_Click(object sender, EventArgs e)
        {
            LayoutMdi(MdiLayout.TileHorizontal);
        }

        private void ArrangeIconsToolStripMenuItem_Click(object sender, EventArgs e)
        {
            LayoutMdi(MdiLayout.ArrangeIcons);
        }

        private void CloseAllToolStripMenuItem_Click(object sender, EventArgs e)
        {
            foreach (Form childForm in MdiChildren)
            {
                childForm.Close();
            }
        }

        private void TangramMDIParent_FormClosing(object sender, FormClosingEventArgs e)
        {
            //e.Cancel = true;
            if (TangramMDIParentClosing != null)
            {
                e.Cancel = TangramMDIParentClosing(this);
            }
        }

        private void TangramMDIParent_Load(object sender, EventArgs e)
        {
            TangramCore.Application = this;
            thisTangram = TangramCore.CreateTangram(this, this);
            thisTangram.URL = Application.StartupPath + "\\TangramWebPage\\TangramWinformApp.html";
        }

        public void CreateChildForm(string url)
        {
            Form childForm = new TangramMdiChild();
            childForm.Tag = url;
            childForm.MdiParent = this;
            childForm.Text = "Window " + childFormNumber++;
            childForm.Show();
        }

        private void HtmlSource_Click(object sender, EventArgs e)
        {
            if (TangramMDIParentOutputButtonClick!=null)
            {
                TangramMDIParentOutputButtonClick();
            }
        }
    }
}
