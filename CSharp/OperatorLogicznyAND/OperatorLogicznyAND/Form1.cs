using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace OperatorLogicznyAND
{
    public partial class Form1 : Form
    {    
        string password1 = "1234";
        string password2 = "Fiona123";
        string login = "admin";
        string userPasswordInput;
        string userLoginInput;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            userLoginInput = textBox1.Text;
            userPasswordInput = textBox2.Text;
            CheckInput();
        }

        void CheckInput()
        {
            if ((userPasswordInput == password1 || userPasswordInput == password2) && userLoginInput == login)
            {
                label4.Text = "You are logged in!";
            }
            else
            {
                label4.Text = "Wrong login or password!";
            }
        }
    }
}
