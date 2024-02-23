using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Tworzenie_Stopera
{
    public partial class Form1 : Form
    {
        DateTime startingState;
        DateTime counter;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            startingState = DateTime.MinValue;
            label1.Text = startingState.ToString("HH:mm:ss");
            counter = startingState;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            timer1.Enabled = true;  
        }

        private void button2_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            counter = startingState;
            label1.Text = counter.ToString("HH:mm:ss");
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            counter = counter.AddSeconds(1.0);
            label1.Text = counter.ToString("HH:mm:ss");
        }
    }
}
