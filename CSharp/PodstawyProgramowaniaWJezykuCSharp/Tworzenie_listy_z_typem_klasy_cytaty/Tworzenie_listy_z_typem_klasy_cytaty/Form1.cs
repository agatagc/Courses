using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Tworzenie_listy_z_typem_klasy_cytaty
{
    public partial class Form1 : Form
    {
        List<Quote> quotes = new List<Quote>();
        int numberOfQuotes;

        public Form1()
        {
            InitializeComponent();
            Quote quote1 = new Quote("Albert Einstein", "The true sign of intelligence is not knowledge but imagination.");
            Quote quote2 = new Quote("Albert Einstein", "The only source of knowledge is experience.");
            Quote quote3 = new Quote("Albert Einstein", "Never memorize something that you can look up");

            quotes.Add(quote1);
            quotes.Add(quote2);
            quotes.Add(quote3);
            numberOfQuotes = 0;
            ShowQuote();
        }

        void ShowQuote()
        {
            label1.Text = quotes[numberOfQuotes].GetAuthor(); 
            label2.Text = quotes[numberOfQuotes].GetText();
        }

        private void btn_previous_Click(object sender, EventArgs e)
        {
            if (numberOfQuotes == 0)
            {
                return;
            }

            numberOfQuotes--;
            ShowQuote();  
        }

        private void btn_next_Click(object sender, EventArgs e)
        {
            if (numberOfQuotes == quotes.Count - 1)
            {
                return;
            }

            numberOfQuotes++;
            ShowQuote();
        }
    }
}
