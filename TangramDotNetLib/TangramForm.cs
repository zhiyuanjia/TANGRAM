using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using TangramCLR;
namespace TangramDotNetLib
{
    public partial class TangramForm : Form
    {
        public string m_strTangramXML = "";
        public TangramForm()
        {
            InitializeComponent();
        }

        private void TangramForm_Load(object sender, EventArgs e)
        {
            Text = "Tangram";
            TangramCLR.TangramCore tangramCore = TangramCLR.TangramCore.GetTangramCore();
            Tangram thisTangram = TangramCore.CreateTangram(this.TangramPanel, this);
            if (thisTangram == null)
            {
                System.Windows.Forms.MessageBox.Show(m_strTangramXML);
            }
            TangramFrame thisFrame = thisTangram.CreateFrame(TangramPanel.Handle, "Default");
            thisFrame.ExtendXml("Default", m_strTangramXML);

        }
    }
}
