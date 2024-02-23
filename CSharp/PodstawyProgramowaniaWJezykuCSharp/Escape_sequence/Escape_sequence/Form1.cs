using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Escape_sequence 
    // liczby od 1 do 10 ktore wyswietlaja sie z gory do dolu
{
    public partial class Form1 : Form
    {
        string a = "hello world \u2589";
        public Form1()
        {
            InitializeComponent();
            label1.Text = "";

            for (int i = 0; i < 10; i++)
            {
                label1.Text += (i + 1) + "\n";
            }
        }
    }
}
