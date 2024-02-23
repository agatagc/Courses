using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Zadanie_petla_for_oszczedzanie
{
    public partial class Form1 : Form
    {
        int sumaGroszy = 0;
        int iloscOszczedzanychGroszyKazdegoDnia = 1;
        public Form1()
        {
            InitializeComponent();
            label1.Text = " ";

            for (int i = 1; i <= 27; i++)
            {
                sumaGroszy += iloscOszczedzanychGroszyKazdegoDnia; 
                label1.Text += "Dzień " + i + " : " + sumaGroszy  + "\n";
                iloscOszczedzanychGroszyKazdegoDnia *= 2;
            }
        }
    }
}
