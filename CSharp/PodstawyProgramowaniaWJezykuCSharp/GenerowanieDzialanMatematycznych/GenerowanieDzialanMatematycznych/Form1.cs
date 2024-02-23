using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GenerowanieDzialanMatematycznych
{
    public partial class Form1 : Form
    {
        Random rand = new Random();
        int num1, num2, result, counter;
        string answer;

        public Form1()
        {
            InitializeComponent();
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            counter = 0;    
            CreateCalculation();
            DisplayCalculation();
            DisplayPoints();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            CheckTheAnswer();
        }

        int GenerateRandomNumber()
        {
            int randomNumber = rand.Next(1, 11);
            return randomNumber;
        }

        void CreateCalculation()
        {
            num1 = GenerateRandomNumber();
            num2 = GenerateRandomNumber();
            result = num1 * num2;
        } 

        void DisplayCalculation()
        {
            label1.Text = num1 + " * " + num2 + " = ";
        }

        void CheckTheAnswer()
        {
            answer = textBox1.Text;

            if (answer == result.ToString())
            {
                CreateCalculation();   
                DisplayCalculation();
                textBox1.Text = "";
                textBox1.ForeColor = Color.Black;
                AddPoint();
                DisplayPoints();
            }
            else
            {
                textBox1.ForeColor = Color.Red;
            }
        }
        void AddPoint()
        {
            counter++;
        }
        void DisplayPoints()
        {
            label2.Text = "Punkty: " + counter;
        }
    }
}
