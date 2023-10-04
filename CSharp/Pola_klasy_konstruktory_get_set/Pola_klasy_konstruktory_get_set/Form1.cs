using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Pola_klasy_konstruktory_get_set
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            Warior warior = new Warior(100, 50, 60);
            warior.SetHealth(60);
            label1.Text = warior.GetHealth().ToString() + "\n" + warior.Getattack().ToString() + "\n" + warior.Getdefence().ToString();
               
        }
    }
}
