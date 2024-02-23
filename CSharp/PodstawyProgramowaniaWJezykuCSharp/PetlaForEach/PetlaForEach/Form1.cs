using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PetlaForEach
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            button1.Text = "Display names";
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string[] students = new string[]
            {
                "Jan Kowalski", "Marcin Matas", "Agata Siudem", "Remigiusz Ganiec",
                "Michal Perszko", "Agata Wicha", "Agnieszka Kania", "Barbara Wrona",
                "Anna Kowalsa", "Kinga Pawusiak"
            };
            foreach   (string i in students)
            {
                label1.Text += i + " ";    // label1.Text = i; -wyswietla tylko ostatni element tablicy
            }
        }
    }
}
