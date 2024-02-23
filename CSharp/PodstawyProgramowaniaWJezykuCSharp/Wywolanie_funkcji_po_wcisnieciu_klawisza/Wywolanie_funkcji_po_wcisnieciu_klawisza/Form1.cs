using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Wywolanie_funkcji_po_wcisnieciu_klawisza
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            if(e.KeyCode == Keys.Space)     // KeyCode - kod klawisza, ktory zostal wcisniety
            {
                MessageBox.Show("Space was pressed");
            }
            else if(e.KeyCode == Keys.Enter)
            {
                MessageBox.Show("Enter was pressed");
            }
        }
    }
}
