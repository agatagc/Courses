using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Tworzenie_wielu_przyciskow_za_pomoca_petli_for
{
    public partial class Form1 : Form
    {
        int objectQuantity;
        public Form1()
        {
            InitializeComponent();
            objectQuantity = 6;
            int yPosition = 20;
            for (int i = 0; i < objectQuantity; i++)
            {
                Button btn = new Button();
                btn.Text = "Button " + (i + 1); // i+1 bo i zaczyna się od 0
                this.Controls.Add(btn);
                btn.Location = new Point(20, yPosition);    // ustawienie pozycji przycisku
                yPosition += 30;    // przesunięcie pozycji przycisku o 30 pikseli w dół
            }
        }
    }
}
