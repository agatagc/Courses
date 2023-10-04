using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Wyswietlanie_aktualnego_czasu
{
    public partial class Form1 : Form
    {
        Random rand = new Random();
        int r, g, b;
        public Form1()
        {
            InitializeComponent();
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            timer1.Enabled = true;  // Włączenie timera
            label1.Text = "";  // Wyczyszczenie labela  
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            r = rand.Next(0, 256);  // Losowanie koloru
            g = rand.Next(0, 256);  
            b = rand.Next(0, 256);  
            label1.ForeColor = Color.FromArgb(r,g,b);  // Ustawienie koloru labela
            label1.Text = DateTime.Now.ToString("HH:mm:ss");  // Wyświetlenie aktualnego czasu
        }
    }
}
