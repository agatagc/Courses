using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TablicaRejestracyjna
{
    public partial class Form1 : Form
    {
        string n1, n2, numberplate;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            numberplate = textBox1.Text;

            if (numberplate.Length >= 2)    // check if number plate is 2 characters long
            {
                n1 = numberplate[0].ToString();
                n2 = numberplate[1].ToString();
                DisplayInfo();
            }
            else
            {
                label1.Text = "Number plate must be 2 characters long";
                
            }   
      
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        void DisplayInfo()
        {
            if (n1 == "D" && n2 == "L")
            {
                label1.Text = "You are from Legnica or the surrounding area";
            }
            else if (n1 == "W" && n2 == "R")
            {
                label1.Text = "You are from Wroclaw or the surrounding area";
            }
            else
            {
                  label1.Text = "You are from somewhere else";
            }
        }
    }
}
