using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace OperatoryPorownania
{
    public partial class Form1 : Form
    {
        Random random = new Random();  
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int randomNumber = random.Next(0,21);
            int mark = 0;

            if (randomNumber == 20)
            {
                mark = 6;
            }
            else if (randomNumber >= 17)
            {
                mark = 5; 
            }
            else if (randomNumber > 12)
            {
                mark = 4;
            }
            else
            {
                mark = 3;
            }

            label1.Text = "Zdobyłeś " + randomNumber + " punktów, otrzymujesz ocenę: " + mark;
        }
    }
}
