using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Tworzenie_panelu_i_jego_centrowanie
{
    public partial class Form1 : Form
    {
        int formSizeX, formSizeY;
        Panel panel1;
        public Form1()
        {
            InitializeComponent();
            formSizeX = 800;
            formSizeY = 400;
            this.Size = new Size(formSizeX, formSizeY);

            panel1 = new Panel();
            this.Controls.Add(panel1);
            panel1.BackColor = Color.Blue;
            panel1.Size = new Size(this.ClientSize.Width/2, this.ClientSize.Height/2);  // Rozmiar panelu, połowa rozmiaru okna
            panel1.Location = new Point(this.ClientSize.Width / 4, this.ClientSize.Height / 4); // Lokalizacja panelu, ćwiartka rozmiaru okna
        }
    }
}
