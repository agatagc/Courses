using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Dynamiczne_tworzenie_przycisku_z_wyzwalaczem
{
    public partial class Form1 : Form
    {
        Button btn;
        public Form1()
        {
            InitializeComponent();
            btn = new Button();
            this.Controls.Add(btn); // Dodanie przycisku do formularza
            btn.Text = "Click me";
            //btn.Left = 100; // Ustawienie pozycji przycisku
            //btn.Top = 100;  // Ustawienie pozycji przycisku
            btn.Location = new Point(100, 100); // Ustawienie pozycji przycisku JAK W UNITY
            btn.Click += MyClick;
        }
        void MyClick(object sender, EventArgs e)    //Object sender - obiekt który wywołał zdarzenie, EventArgs e - parametry zdarzenia
        {
            btn.Text = "Clicked";
        }
    }
}
