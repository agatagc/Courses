using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tworzenie_listy_z_typem_klasy_cytaty
{
    internal class Quote
    {
        string author;        
        string text;

        public Quote(string author, string text )
        {
            this.author = author;            
            this.text = text;

        }
        public string GetAuthor()
        {
            return author;
        }

        public string GetText()
        {
            return text;
        }
    }
}
