using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PetlaForSredniaOcen
{
    public partial class Form1 : Form
    {
        double average;
        public Form1()
        {
            InitializeComponent();
            Table();
        }

        void Table()
        {
            double sumOfGrades = 0; // suma ocen, zaczynamy od 0, poniewaz od tej wartosci zaczynamy sumowanie
            double [] grades = new double[]
            {
                4, 5, 6, 2, 3, 5, 4, 4, 4, 1, 4, 4, 4, 5, 5, 1, 1, 1
            };

            for (int i = 0; i < grades.Length; i++) // length - dlugosc tablicy
            {
                sumOfGrades += grades[i]; 

                average = sumOfGrades / grades.Length;
                label1.Text = "Your grade point average is " + average;
            }
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
