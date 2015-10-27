namespace TangramWinFormApp
{
    partial class TangramMdiChild
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(TangramMdiChild));
            this.TangramPanel = new System.Windows.Forms.Panel();
            this.webBrowser = new System.Windows.Forms.WebBrowser();
            this.splitter1 = new System.Windows.Forms.Splitter();
            this.listView = new System.Windows.Forms.ListView();
            this.splitter2 = new System.Windows.Forms.Splitter();
            this.panel1 = new System.Windows.Forms.Panel();
            this.subpanel = new System.Windows.Forms.Panel();
            this.imageList1 = new System.Windows.Forms.ImageList(this.components);
            this.TangramPanel.SuspendLayout();
            this.panel1.SuspendLayout();
            this.SuspendLayout();
            // 
            // TangramPanel
            // 
            this.TangramPanel.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.TangramPanel.Controls.Add(this.panel1);
            this.TangramPanel.Controls.Add(this.splitter2);
            this.TangramPanel.Controls.Add(this.listView);
            this.TangramPanel.Controls.Add(this.splitter1);
            this.TangramPanel.Controls.Add(this.webBrowser);
            this.TangramPanel.Dock = System.Windows.Forms.DockStyle.Fill;
            this.TangramPanel.Location = new System.Drawing.Point(0, 0);
            this.TangramPanel.Name = "TangramPanel";
            this.TangramPanel.Size = new System.Drawing.Size(622, 372);
            this.TangramPanel.TabIndex = 0;
            // 
            // webBrowser
            // 
            this.webBrowser.Dock = System.Windows.Forms.DockStyle.Bottom;
            this.webBrowser.Location = new System.Drawing.Point(0, 298);
            this.webBrowser.MinimumSize = new System.Drawing.Size(20, 20);
            this.webBrowser.Name = "webBrowser";
            this.webBrowser.Size = new System.Drawing.Size(622, 74);
            this.webBrowser.TabIndex = 0;
            this.webBrowser.Url = new System.Uri("about:blank", System.UriKind.Absolute);
            // 
            // splitter1
            // 
            this.splitter1.Dock = System.Windows.Forms.DockStyle.Bottom;
            this.splitter1.Location = new System.Drawing.Point(0, 292);
            this.splitter1.Name = "splitter1";
            this.splitter1.Size = new System.Drawing.Size(622, 6);
            this.splitter1.TabIndex = 1;
            this.splitter1.TabStop = false;
            // 
            // listView
            // 
            this.listView.Dock = System.Windows.Forms.DockStyle.Right;
            this.listView.LargeImageList = this.imageList1;
            this.listView.Location = new System.Drawing.Point(475, 0);
            this.listView.Name = "listView";
            this.listView.Size = new System.Drawing.Size(147, 292);
            this.listView.TabIndex = 2;
            this.listView.UseCompatibleStateImageBehavior = false;
            this.listView.ItemActivate += new System.EventHandler(this.listView_ItemActivate);
            // 
            // splitter2
            // 
            this.splitter2.Dock = System.Windows.Forms.DockStyle.Right;
            this.splitter2.Location = new System.Drawing.Point(469, 0);
            this.splitter2.Name = "splitter2";
            this.splitter2.Size = new System.Drawing.Size(6, 292);
            this.splitter2.TabIndex = 3;
            this.splitter2.TabStop = false;
            // 
            // panel1
            // 
            this.panel1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.panel1.Controls.Add(this.subpanel);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.panel1.Location = new System.Drawing.Point(0, 0);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(469, 292);
            this.panel1.TabIndex = 4;
            // 
            // subpanel
            // 
            this.subpanel.Dock = System.Windows.Forms.DockStyle.Fill;
            this.subpanel.Location = new System.Drawing.Point(0, 0);
            this.subpanel.Name = "subpanel";
            this.subpanel.Size = new System.Drawing.Size(469, 292);
            this.subpanel.TabIndex = 0;
            // 
            // imageList1
            // 
            this.imageList1.ImageStream = ((System.Windows.Forms.ImageListStreamer)(resources.GetObject("imageList1.ImageStream")));
            this.imageList1.TransparentColor = System.Drawing.Color.Transparent;
            this.imageList1.Images.SetKeyName(0, "TangComponentWiz2.ico");
            // 
            // TangramMdiChild
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(622, 372);
            this.Controls.Add(this.TangramPanel);
            this.Name = "TangramMdiChild";
            this.Text = "TangramMdiChild";
            this.Activated += new System.EventHandler(this.TangramMdiChild_Activated);
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.TangramMdiChild_FormClosing);
            this.Load += new System.EventHandler(this.TangramMdiChild_Load);
            this.TangramPanel.ResumeLayout(false);
            this.panel1.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel TangramPanel;
        private System.Windows.Forms.WebBrowser webBrowser;
        private System.Windows.Forms.Splitter splitter1;
        private System.Windows.Forms.ListView listView;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Panel subpanel;
        private System.Windows.Forms.Splitter splitter2;
        private System.Windows.Forms.ImageList imageList1;
    }
}

