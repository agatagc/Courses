using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;    // dodanie biblioteki do obslugi plikow

namespace Zapis_do_pliku_tekstowego     // Pamietnik
{
    public partial class Form1 : Form
    {
        static string fileName; // nazwa pliku, do ktorego bedziemy zapisywac dane z pamietnika 
        static FileStream fS;   // strumien plikowy
        static StreamWriter writer; // zapis do pliku
        public Form1()
        {
            InitializeComponent();
            fileName = @"d:/Zapis_do_pliku_tekstowego.txt"; // sciezka do pliku
            fS = new FileStream(fileName, FileMode.OpenOrCreate, FileAccess.ReadWrite); // FileStream - strumien plikowy, FileMode - otwarcie pliku, FileAccess - dostep do pliku
            writer = new StreamWriter(fS);  // StreamWriter - zapis do pliku
        }

        private void button1_Click(object sender, EventArgs e)
        {
            DateTime date = DateTime.Now; // pobranie aktualnej daty
            writer.WriteLine(date.ToString("dd MMMM yyyy HH:mm"));  // zapisanie daty do pliku
            writer.WriteLine(txtTitle.Text);    // zapisanie tytulu do pliku
            writer.WriteLine(textBox1.Text);    // zapisanie tekstu do pliku
            writer.WriteLine("");   // zapisanie pustej linii do pliku
            writer.Flush(); // Flush() - zapisanie danych do pliku
            Application.Exit(); // zamkniecie aplikacji
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            fS.Seek(0, SeekOrigin.End); // Seek() - ustawienie pozycji w pliku, SeekOrigin - poczatek pliku
        }
    }
}
