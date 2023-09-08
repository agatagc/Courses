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

            for(int i = 0; i < 5; i++) // i++ to to samo co i = i + 1,  petla for sluzy do powtarzania czynnosci w tym przypadku 5 razy   
                                        // i = 0 to jest poczatek petli, i < 10 to jest warunek, i++ to jest zwiekszanie o 1
            {
                label1.Text += i.ToString() + " "; // += to jest to samo co label1.Text = label1.Text + i.ToString() + " ";
            }
        }
    }
}
