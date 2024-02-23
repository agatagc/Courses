using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Tworzenie_klasy
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            Person person1 = new Person(25, "Agata");     // Wywołanie konstruktora klasy NewClass, konstruktor to metoda która jest wywoływana podczas tworzenia obiektu danej klasy
            Person person2 = new Person(25, "Remigiusz");     
            Person person3 = new Person(31, "Jaroslaw");     
            Person person4 = new Person();     

            PersonListTextBox.Text += person1.ToString() + "\r\n";
            PersonListTextBox.Text += person2.ToString() + "\r\n";
            PersonListTextBox.Text += person3.ToString() + "\r\n";
            PersonListTextBox.Text += person4.ToString() + "\r\n";
        }
    }

    public class Person
    {
        public string Name { get; protected set; }
        public int Age { get; protected set; } // Deklaracja właściwości klasy NewClass

        #region Constructors
        public Person()
        {
            Name = "Jan";
            Age = 30;
        }

        public Person(int age, string name)
        {
            this.Age = age;
            Name = name;
        }
        #endregion

        #region Methods
        public override string ToString()
        {
            return $"{Name}, age: {Age}";
        }
        #endregion
    }
}
