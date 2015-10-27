using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Configuration;
using System.Data;
using System.Drawing;
using System.Runtime.InteropServices;
using System.Text;
using System.Windows.Forms;
using TangramCLR;

namespace Tangram.Sample.WindowsFormsApplication
{
    [ComVisible(true)]
    public partial class Form1 : Form
    {
        private TangramCLR.Tangram tgm = null;

        public Form1()
        {
            InitializeComponent();
            //tgm = TangramManager.CreateTangram(this, this);
            //tgm.URL = ConfigurationManager.AppSettings["appUrl"];
        }
    }
}
