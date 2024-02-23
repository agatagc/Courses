using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports; //dodanie biblioteki do obsługi portu szeregowego

namespace Sterowanie_mikrokontrolerem
{
    public partial class Form1 : Form
    {
        public SerialPort myPort; //utworzenie obiektu portu szeregowego
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            OpenPort(); //wywołanie funkcji otwierającej port szeregowy
        }

        void OpenPort()
        {
            myPort = new SerialPort(); //utworzenie nowego obiektu portu szeregowego
            myPort.BaudRate = 9600; //ustawienie prędkości transmisji, BuadRate na 9600 bitów na sekundę
            myPort.PortName = "COM11"; //ustawienie nazwy portu
            myPort.Open(); //otwarcie portu
        }

        private void button1_Click(object sender, EventArgs e)
        {
            myPort.WriteLine("R"); //wysłanie znaku 'R' do portu szeregowego
        }

        private void button2_Click(object sender, EventArgs e)
        {
            myPort.WriteLine("G"); //wysłanie znaku 'L' do portu szeregowego
        }

        private void button3_Click(object sender, EventArgs e)
        {
            myPort.WriteLine("B"); //wysłanie znaku 'B' do portu szeregowego
        }

        private void button4_Click(object sender, EventArgs e)
        {
            myPort.WriteLine("E"); //wysłanie znaku 'W' do portu szeregowego
        }
    }
}
