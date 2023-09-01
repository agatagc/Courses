using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ProgramDoWyswietlaniaLosowegoDzialaniaMatematycznego
{
    public partial class Form1 : Form
    {
        Random rand = new Random();
        int num1, num2, result;
        string answer;

        private void Form1_Load(object sender, EventArgs e)
        {
            CreateCalculation();
            DisplayCalculation();
        }

        public Form1()
        {
            InitializeComponent();
        }

        void CreateCalculation()
        {
            num1 = rand.Next(1, 11);
            num2 = rand.Next(1, 11);
            result = num1 * num2;
        }

        void DisplayCalculation()
        {
            label1.Text = num1 + " * " + num2 + " = ";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            ShowTheAnswer();
        }

        void CheckTheResult()
        {
            answer = textBox1.Text;

            if (answer == result.ToString())
            {
                CreateCalculation();
                DisplayCalculation();
                button1.ForeColor = Color.Black;
                textBox1.Text = "";
            }
            else
            {
                button1.ForeColor = Color.Red;
                textBox1.Text = "";
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            CheckTheResult();
        }
        void ShowTheAnswer()
        {
            label1.Text = num1 + " * " + num2 + " = " + result;
        }
    }
}
