using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WyswietlanieSredniejOcenForEach
{
    public partial class Form1 : Form
    {
        double SumeOfGrades = 0; // sumowanie wartosci naszych ocen
        double average;           // wyliczanie z nich sredniej
        public Form1()
        {
            InitializeComponent();
            button1.Text = "Calculate";

        }
        private void button1_Click(object sender, EventArgs e)
        {
            Table();
        }
        void Table()
        {
            double[] grades = new double[]
            {
                4.5, 3.5, 5, 4, 2,5, 4, 3, 4.5, 5, 3.5, 4,5,5
            };
            foreach (double i in grades)
            {
                SumeOfGrades += i;
            }
            average = SumeOfGrades / grades.Length; // dzielenie sumy ocen przez ilosc ocen
            label1.Text = "Your grade point average is: " + average.ToString("0.00"); // wyswietlanie sredniej ocen
        }


    }
}
