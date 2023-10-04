using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Losowe_zdjecia
{
    public partial class Form1 : Form
    {
        Random rand = new Random();
        int randomNumber;

        Image[] images = new Image[]
        {
            Losowe_zdjecia.Properties.Resources.a, 
            Losowe_zdjecia.Properties.Resources.b,
            Losowe_zdjecia.Properties.Resources.c,
            Losowe_zdjecia.Properties.Resources.d,
            Losowe_zdjecia.Properties.Resources.e,
            Losowe_zdjecia.Properties.Resources.f,
            Losowe_zdjecia.Properties.Resources.g,
            Losowe_zdjecia.Properties.Resources.h,
            Losowe_zdjecia.Properties.Resources.i,
            Losowe_zdjecia.Properties.Resources.j,
            Losowe_zdjecia.Properties.Resources.k,
            Losowe_zdjecia.Properties.Resources.l
        };
        public Form1()
        {
            InitializeComponent();
        }
        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            randomNumber = rand.Next(0, images.Length); // Losowanie liczby
            pictureBox1.Image = images[randomNumber]; // Losowanie obrazka
        }
    }
}
