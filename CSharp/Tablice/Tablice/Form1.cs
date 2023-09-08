using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Tablice
{
    public partial class Form1 : Form
    {
        Random random = new Random();


        public Form1()
        {
            InitializeComponent();
            // label1.Text = " ";  // this is how you can change the text of a label
        }

        private void DrawButton_Click(object sender, EventArgs e)
        {
            Table2();
        }
        void Table1()
        {
            string[] students = new string[10];

            int randomNumber = random.Next(0, students.Length);

            students[0] = "Jan Kowalski";
            students[1] = "Marcin Matas";
            students[2] = "Agata Siudem";
            students[3] = "Remigiusz Ganiec";
            students[4] = "Michal Perszko";
            students[5] = "Agata Wicha";
            students[6] = "Agnieszka Kania";
            students[7] = "Barbara Wrona";
            students[8] = "Anna Kowalsa";
            students[9] = "Kinga Pawusiak";

            StudentNameLabel.Text = students[randomNumber];
        }

        void Table2()
        {
            string[] students = new string[]
            {
                "Jan Kowalski", "Marcin Matas", "Agata Siudem", "Remigiusz Ganiec",
                "Michal Perszko", "Agata Wicha", "Agnieszka Kania", "Barbara Wrona",
                "Anna Kowalsa", "Kinga Pawusiak"
            };            
            int randomNumber = random.Next(0, students.Length);
            StudentNameLabel.Text = students[randomNumber];
        }
    }
}
