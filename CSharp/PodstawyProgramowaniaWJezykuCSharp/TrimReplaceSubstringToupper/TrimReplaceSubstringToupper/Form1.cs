using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TrimReplaceSubstringToupper
{
    public partial class Form1 : Form
    {
        //string text = "Anne of green gables";
        string n1, n2, registrationNumber;

        public Form1()
        {
            InitializeComponent();
            //label1.Text = text.Substring(0, 4);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            registrationNumber = textBox1.Text.ToUpper(); // zamiana na duze litery
            registrationNumber = registrationNumber.Trim(); // usuniecie spacji na poczatku i koncu
            registrationNumber = registrationNumber.Replace(" ", ""); // usuniecie spacji w srodku
            
            if (registrationNumber.Length >= 2)
            {            
                n1 = registrationNumber[0].ToString();
                n2 = registrationNumber[1].ToString();
                DisplayInfo();
            }else
            {
                label1.Text = "Registration number must be 2 characters long";
            }
        }

        void DisplayInfo() 
        { 
            if (n1 == "D" && n2 == "L")
            {
                label1.Text = "Registration number: " + registrationNumber + ": You are from Legnica or the surrounding area ";
            }
            else if (n1 == "D")
            {
                  label1.Text = "Registration number: " + registrationNumber + ": You are from Dolny Slask ";
            }
            else if (n2 == "L")
            {
                label1.Text = "Registration number: " + registrationNumber + ": You are from Legnica or the surrounding area ";
            }
            else
            {
                label1.Text = "Registration number: " + registrationNumber + ": You are not from Dolny Slask or Legnica ";
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
