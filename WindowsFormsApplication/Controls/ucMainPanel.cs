using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using TangramCLR;

namespace Tangram.Sample.WindowsFormsApplication.Controls
{
    public partial class ucMainPanel : UserControl
    {
        private TangramNode currentNode = null;

        public ucMainPanel()
        {
            InitializeComponent();
            currentNode = TangramManager.CreatingNode;
        }

        private void button_ModifyTitle_Click(object sender, EventArgs e)
        {
            if(currentNode != null)
            {
                //currentNode.Tangram.ExecScript("ModifyFormText('Hello Tangram!');");
            }
        }

        private void button_Timer_Click(object sender, EventArgs e)
        {
            if (currentNode != null)
            {
                //currentNode.Tangram.ExecScript("BeginTiming();");
            }
        }
    }
}
