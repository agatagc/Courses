namespace Dzwieki_wav_w_aplikacji
{
    partial class Form1
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
            this.Music = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // Music
            // 
            this.Music.Location = new System.Drawing.Point(185, 107);
            this.Music.Name = "Music";
            this.Music.Size = new System.Drawing.Size(369, 202);
            this.Music.TabIndex = 0;
            this.Music.Text = "Play";
            this.Music.UseVisualStyleBackColor = true;
            this.Music.Click += new System.EventHandler(this.Music_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.Music);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button Music;
    }
}

