using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PetlaFor
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            label1.Text = ""; // label1.Text to jest tekst w labelu, label1.Text = "" to jest czyszczenie labela
            for(int i = 0; i < 21; i+=2) // i+=2 zwieksza sie o 2, mamy tylko liczby parzyste
                                         //  i++ to to samo co i = i + 1,  petla for sluzy do powtarzania czynnosci w tym przypadku 5 razy   
                                        // i = 0 to jest poczatek petli, i < 10 to jest warunek, i++ to jest zwiekszanie o 1
            {
                label1.Text += i + " "; // += to jest to samo co label1.Text = label1.Text + i.ToString() + " ";
            }
        }
    }
}
