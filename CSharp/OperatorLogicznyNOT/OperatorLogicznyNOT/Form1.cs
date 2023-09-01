using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace OperatorLogicznyNOT
{
    public partial class Form1 : Form
    {
        bool isButtonToggled = false;

        public Form1()
        {
            InitializeComponent();
            button1.BackColor = Color.DeepSkyBlue;
        }

        private void button1_Click(object sender, EventArgs e)
        {
             ToggleBtn();
        }

        void ToggleBtn()
        {
            if (isButtonToggled == false)
            {
                button1.BackColor = Color.Red;
                //isButtonToggled = true;
            }
            else
            {
                button1.BackColor = Color.DeepSkyBlue;
                //isButtonToggled = false;
            }
            isButtonToggled = !isButtonToggled; // to samo co wyzej
        }
    }
}
