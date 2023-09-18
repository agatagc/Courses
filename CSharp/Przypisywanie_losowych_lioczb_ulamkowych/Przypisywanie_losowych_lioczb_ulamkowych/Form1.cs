using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Przypisywanie_losowych_lioczb_ulamkowych
{
    public partial class Form1 : Form
    {
        Random rand = new Random();
        double[] numbers = new double[5];
        public Form1()
        {
            InitializeComponent();
            label1.Text = "";
            GenerateRandoms();
        }

        void GenerateRandoms()
        {
            for (int i = 0; i < 5; i++) // petla wykonuje sie 5 razy
            {
                numbers[i] = rand.NextDouble(); // przypisuje do tablicy 5 liczb losowych
                label1.Text += Math.Round(numbers[i], 2) + "\n"; // wyswietla liczby w labelu, ale tylko 2 miejsca po przecinku
                //label1.Text += numbers[i] + "\n"; // wyswietla liczby w labelu
            }
        }
    }
}
