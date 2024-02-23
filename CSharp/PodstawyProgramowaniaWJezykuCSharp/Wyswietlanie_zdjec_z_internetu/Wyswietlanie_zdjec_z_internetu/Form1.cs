using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Wyswietlanie_zdjec_z_internetu
{
    public partial class Form1 : Form
    {
        Random rnd = new Random();
        int randomNumber;

        string[] addresses = new string[4];
 
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            addresses[0] = "https://cdn.pixabay.com/photo/2023/08/07/03/59/coffee-8174279_1280.jpg"; // adresy do obrazków
            addresses[1] = "https://cdn.pixabay.com/photo/2023/08/26/14/19/cupcake-8215179_1280.jpg";
            addresses[2] = "https://cdn.pixabay.com/photo/2023/05/30/08/35/garlic-8027954_1280.jpg";
            addresses[3] = "https://cdn.pixabay.com/photo/2023/08/26/09/04/strawberry-8214486_1280.jpg";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            randomNumber = rnd.Next(0, addresses.Length);
            pictureBox1.ImageLocation = addresses[randomNumber];    // losowanie obrazka randomowo, ImageLocation - adres obrazka
        }
    }
}
