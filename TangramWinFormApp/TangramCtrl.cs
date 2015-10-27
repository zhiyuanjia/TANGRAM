using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using TangramCLR;

namespace TangramWinFormApp
{
    public delegate void TangramCtrlLoadEventHandler(TangramCtrl Sender);
    public delegate void TangramCtrlClosingEventHandler(TangramCtrl Sender);
    public delegate void TangramCtrlActivatedEventHandler(TangramCtrl Sender);
    [ComVisible(true), InterfaceType(ComInterfaceType.InterfaceIsIDispatch)]
    public interface TangramCtrlEvent
    {
        //Add a DispIdAttribute to any members in the source interface to specify the COM DispId.
        [DispId(0x000001)]
        void TangramCtrlLoad(TangramCtrl Sender); //This method will be visible from JS
        [DispId(0x000002)]
        void TangramCtrlClosing(TangramCtrl Sender); //This method will be visible from JS
        [DispId(0x000003)]
        void TangramCtrlActivated(TangramCtrl Sender); //This method will be visible from JS
    }

    [ComVisible(true), ComSourceInterfacesAttribute(typeof(TangramCtrlEvent))]
    public partial class TangramCtrl : UserControl
    {
        public event TangramCtrlLoadEventHandler TangramCtrlLoad;
        public event TangramCtrlClosingEventHandler TangramCtrlClosing;
        public event TangramCtrlActivatedEventHandler TangramCtrlActivated;
        public TangramCtrl()
        {
            InitializeComponent();
        }
    }
}
