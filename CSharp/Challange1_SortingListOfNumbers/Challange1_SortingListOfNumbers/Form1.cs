using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace Challange1_SortingListOfNumbers
{
    public partial class Form1 : Form
    {
        Random rand = new Random();
        List<int> numbers = new List<int>();

        public Form1()
        {
            InitializeComponent();
        }

        void UpdateListbox(List<int> numbers)
        {
            listBox1.Items.Clear(); // Deleting all numbers in listbox

            foreach (int number in numbers)
            {
                listBox1.Items.Add(number); // Adding sorted numbers to listbox
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            numbers.Clear(); // Deleting all numbers int list

            for (int i = 0; i <= 100; i++)
            {
                numbers.Add(rand.Next(1, 101)); // Creating number
            }

            UpdateListbox(numbers);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            List<int> numbers = new List<int>(this.numbers);
            int listSize = numbers.Count; // Getting list size

            int iterationCounter = 0; // Creating iteration counter

            for (int i = 0; i < listSize; i++) // Looping through all numbers in list
            {
                for (int j = 0; j < listSize; j++)
                {
                    if (numbers[i] < numbers[j]) // If number is smaller than number in list
                    {
                        int temporaryVariable = numbers[i]; // Creating temp variable
                        numbers[i] = numbers[j]; // Setting number to number in list
                        numbers[j] = temporaryVariable; // Setting number in list to temp variable
                    }

                    iterationCounter++; // Adding 1 to iteration counter
                }
            }

            label2.Text = $"Bubble sort iteration count: {iterationCounter}";

            UpdateListbox(numbers); // Updating listbox
        }

        private void button3_Click(object sender, EventArgs e)
        {
            List<int> numbers = new List<int>(this.numbers); // Creating a copy of numbers list
            int listSize = numbers.Count; // Getting list size
            int iterationCounter = 0; // Creating iteration counter

            for (int i = 0; i < listSize; i++) // Looping through all numbers in list
            {
                for (int j = i + 1; j < listSize; j++)
                {
                    iterationCounter += 1;

                    if (numbers[i] > numbers[j])
                    {
                        int temporaryVariable = numbers[i]; // Creating temp variable
                        numbers[i] = numbers[j]; // Setting number to number in list
                        numbers[j] = temporaryVariable; // Setting number in list to temp variable
                    }
                }
            }

            label2.Text = $"Custom sort 1 iteration count: {iterationCounter}";
            UpdateListbox(numbers); // Updating listbox
        }

        private void button4_Click(object sender, EventArgs e)
        {
            List<int> numbers = new List<int>(this.numbers); // Creating a copy of numbers list
            int listSize = numbers.Count; // Getting list size
            int iterationCounter = 0; // Creating iteration counter



            label2.Text = $"Custom sort 2 iteration count: {iterationCounter}";
            UpdateListbox(numbers); // Updating listbox
        }
    }
}
