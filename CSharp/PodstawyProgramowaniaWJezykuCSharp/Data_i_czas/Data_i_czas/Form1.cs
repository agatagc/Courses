using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Data_i_czas
{
    public partial class Form1 : Form
    {
        DateTime Today = DateTime.Now;  // zmienna przechowująca aktualną datę i czas
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            //label1.Text = Today.ToString();  // wyświetlenie aktualnej daty i czasu, ToString() konwertuje na string
            label3.Text = "Time: " + Today.ToString("HH:mm"); // wyświetlenie aktualnej godziny i minuty
            label1.Text = "Day of the year: " + Today.DayOfYear.ToString();  // wyświetlenie dnia roku
            label4.Text = $"Days left until the end of the year {365 - Today.DayOfYear} days";  // wyświetlenie ile dni zostało do końca roku
            label2.Text = "Week of the year: " + Math.Ceiling(Today.DayOfYear / 7.0).ToString(); // Math.Ceiling() zaokrągla w górę
        }
    }
}
