namespace MeczKoszykowki
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            label1 = new Label();
            label2 = new Label();
            btnTeam1point1 = new Button();
            btnTeam1point2 = new Button();
            btnTeam1point3 = new Button();
            btnTakePointAway1 = new Button();
            btnTakePointAway2 = new Button();
            btnTeam2Point3 = new Button();
            btnTeam2Point2 = new Button();
            btnTeam2Point1 = new Button();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            label1.Location = new Point(230, 129);
            label1.Name = "label1";
            label1.Size = new Size(32, 37);
            label1.TabIndex = 0;
            label1.Text = "0";
            label1.Click += label1_Click;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            label2.Location = new Point(428, 129);
            label2.Name = "label2";
            label2.Size = new Size(32, 37);
            label2.TabIndex = 1;
            label2.Text = "0";
            label2.Click += label2_Click;
            // 
            // btnTeam1point1
            // 
            btnTeam1point1.Location = new Point(112, 192);
            btnTeam1point1.Name = "btnTeam1point1";
            btnTeam1point1.Size = new Size(75, 23);
            btnTeam1point1.TabIndex = 2;
            btnTeam1point1.Text = "+1";
            btnTeam1point1.UseVisualStyleBackColor = true;
            btnTeam1point1.Click += btnTeam1point1_Click;
            // 
            // btnTeam1point2
            // 
            btnTeam1point2.Location = new Point(112, 236);
            btnTeam1point2.Name = "btnTeam1point2";
            btnTeam1point2.Size = new Size(75, 23);
            btnTeam1point2.TabIndex = 3;
            btnTeam1point2.Text = "+2";
            btnTeam1point2.UseVisualStyleBackColor = true;
            btnTeam1point2.Click += btnTeam1point2_Click;
            // 
            // btnTeam1point3
            // 
            btnTeam1point3.Location = new Point(112, 283);
            btnTeam1point3.Name = "btnTeam1point3";
            btnTeam1point3.Size = new Size(75, 23);
            btnTeam1point3.TabIndex = 4;
            btnTeam1point3.Text = "+3";
            btnTeam1point3.UseVisualStyleBackColor = true;
            btnTeam1point3.Click += btnTeam1point3_Click;
            // 
            // btnTakePointAway1
            // 
            btnTakePointAway1.Location = new Point(112, 361);
            btnTakePointAway1.Name = "btnTakePointAway1";
            btnTakePointAway1.Size = new Size(75, 23);
            btnTakePointAway1.TabIndex = 5;
            btnTakePointAway1.Text = "-1";
            btnTakePointAway1.UseVisualStyleBackColor = true;
            btnTakePointAway1.Click += btnTakePointAway1_Click;
            // 
            // btnTakePointAway2
            // 
            btnTakePointAway2.Location = new Point(554, 361);
            btnTakePointAway2.Name = "btnTakePointAway2";
            btnTakePointAway2.Size = new Size(75, 23);
            btnTakePointAway2.TabIndex = 9;
            btnTakePointAway2.Text = "-1";
            btnTakePointAway2.UseVisualStyleBackColor = true;
            btnTakePointAway2.Click += btnTakePointAway2_Click;
            // 
            // btnTeam2Point3
            // 
            btnTeam2Point3.Location = new Point(554, 283);
            btnTeam2Point3.Name = "btnTeam2Point3";
            btnTeam2Point3.Size = new Size(75, 23);
            btnTeam2Point3.TabIndex = 8;
            btnTeam2Point3.Text = "+3";
            btnTeam2Point3.UseVisualStyleBackColor = true;
            btnTeam2Point3.Click += btnTeam2Point3_Click;
            // 
            // btnTeam2Point2
            // 
            btnTeam2Point2.Location = new Point(554, 236);
            btnTeam2Point2.Name = "btnTeam2Point2";
            btnTeam2Point2.Size = new Size(75, 23);
            btnTeam2Point2.TabIndex = 7;
            btnTeam2Point2.Text = "+2";
            btnTeam2Point2.UseVisualStyleBackColor = true;
            btnTeam2Point2.Click += btnTeam2Point2_Click;
            // 
            // btnTeam2Point1
            // 
            btnTeam2Point1.Location = new Point(554, 192);
            btnTeam2Point1.Name = "btnTeam2Point1";
            btnTeam2Point1.Size = new Size(75, 23);
            btnTeam2Point1.TabIndex = 6;
            btnTeam2Point1.Text = "+1";
            btnTeam2Point1.UseVisualStyleBackColor = true;
            btnTeam2Point1.Click += btnTeam2Point1_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(btnTakePointAway2);
            Controls.Add(btnTeam2Point3);
            Controls.Add(btnTeam2Point2);
            Controls.Add(btnTeam2Point1);
            Controls.Add(btnTakePointAway1);
            Controls.Add(btnTeam1point3);
            Controls.Add(btnTeam1point2);
            Controls.Add(btnTeam1point1);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load;
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private Button btnTeam1point1;
        private Button btnTeam1point2;
        private Button btnTeam1point3;
        private Button btnTakePointAway1;
        private Button btnTakePointAway2;
        private Button btnTeam2Point3;
        private Button btnTeam2Point2;
        private Button btnTeam2Point1;
    }
}