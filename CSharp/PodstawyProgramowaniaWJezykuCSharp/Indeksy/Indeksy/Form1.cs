using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Indeksy
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            string text = "Agata";
            //label1.Text = text[2].ToString(); // dodajemy ToString() aby wyświetlić znak 

            label1.Text = text.Length.ToString(); // wyświetla długość tekstu, wyswietla ilosc znakow
        }
    }
}
