using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace instrukcjeif
{
    public partial class Form1 : Form
    {
        Random random = new Random();
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int randomNumber = random.Next(1,11);

            label2.Text = randomNumber.ToString();

            if (randomNumber > 5)
            {
                label1.Text = "Brawo! Wylosowałeś liczbę większą od 5 :) ";
            }else 
            {
                label1.Text = "Niestety wylosowałeś złą liczbę i przegrywasz :( ";
            }
        }
    }
}
