namespace Tangram.Sample.WindowsFormsApplication.Controls
{
    partial class ucMainPanel
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

        #region Component Designer generated code

        /// <summary> 
        /// Required method for Designer support - do not modify 
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.button_ModifyTitle = new System.Windows.Forms.Button();
            this.button_Timer = new System.Windows.Forms.Button();
            this.labelShowTime = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // button_ModifyTitle
            // 
            this.button_ModifyTitle.Location = new System.Drawing.Point(20, 47);
            this.button_ModifyTitle.Name = "button_ModifyTitle";
            this.button_ModifyTitle.Size = new System.Drawing.Size(188, 39);
            this.button_ModifyTitle.TabIndex = 0;
            this.button_ModifyTitle.Text = "Modify title using background scripts";
            this.button_ModifyTitle.UseVisualStyleBackColor = true;
            this.button_ModifyTitle.Click += new System.EventHandler(this.button_ModifyTitle_Click);
            // 
            // button_Timer
            // 
            this.button_Timer.Location = new System.Drawing.Point(20, 104);
            this.button_Timer.Name = "button_Timer";
            this.button_Timer.Size = new System.Drawing.Size(111, 23);
            this.button_Timer.TabIndex = 1;
            this.button_Timer.Text = "Web page timer";
            this.button_Timer.UseVisualStyleBackColor = true;
            this.button_Timer.Click += new System.EventHandler(this.button_Timer_Click);
            // 
            // labelShowTime
            // 
            this.labelShowTime.AutoSize = true;
            this.labelShowTime.ForeColor = System.Drawing.SystemColors.ActiveCaption;
            this.labelShowTime.Location = new System.Drawing.Point(138, 109);
            this.labelShowTime.Name = "labelShowTime";
            this.labelShowTime.Size = new System.Drawing.Size(53, 12);
            this.labelShowTime.TabIndex = 2;
            this.labelShowTime.Text = "00:00:00";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.ForeColor = System.Drawing.SystemColors.HotTrack;
            this.label1.Location = new System.Drawing.Point(20, 18);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(143, 12);
            this.label1.TabIndex = 3;
            this.label1.Text = "Call background scripts";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(20, 144);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(188, 23);
            this.button1.TabIndex = 4;
            this.button1.Text = "button1";
            this.button1.UseVisualStyleBackColor = true;
            // 
            // ucMainPanel
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.labelShowTime);
            this.Controls.Add(this.button_Timer);
            this.Controls.Add(this.button_ModifyTitle);
            this.Name = "ucMainPanel";
            this.Size = new System.Drawing.Size(278, 290);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button_ModifyTitle;
        private System.Windows.Forms.Button button_Timer;
        private System.Windows.Forms.Label labelShowTime;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button button1;
    }
}
