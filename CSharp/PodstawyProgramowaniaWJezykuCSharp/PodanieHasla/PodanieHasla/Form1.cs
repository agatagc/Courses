using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PodanieHasla
{
    public partial class Form1 : Form
    {
        string password1 = "Fruit123";
        string password2 = "Storm13031998";
        string userInput;

        public Form1()
        {
            InitializeComponent();
            label1.Text = "Enter the password";
            label2.Text = "";
            button1.Text = "OK";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            userInput = textBox1.Text;
            CheckInput();   
        }

        void CheckInput()
        {
            if (userInput == password1 || userInput == password2)
            {
                label2.Text = "Password is correct";
            }
            else
            {
                label2.Text = "Password is incorrect";
            }
        }
    }
}
