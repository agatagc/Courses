using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Listy
{
    public partial class Form1 : Form
    {
        List<string> quote = new List<string>();    // Tworzymy listę

        public Form1()
        {
            InitializeComponent();
            quote.Add("Listen to your heart. It knows all things.");    // Dodajemy elementy do listy
            quote.Add("The only journey is the one within.");
            quote.Add("The best way out is always through.");
            quote.Add("The power of imagination makes us infinite.");
        }

        private void quote1_Click(object sender, EventArgs e)
        {
            if (quote.Count > 0)
            {
                label1.Text = quote[quote.Count - 1];     // Wyświetlamy ostatni element listy
                quote.RemoveAt(quote.Count - 1);          // Usuwamy ostatni element listy
            }
        }
    }
}
