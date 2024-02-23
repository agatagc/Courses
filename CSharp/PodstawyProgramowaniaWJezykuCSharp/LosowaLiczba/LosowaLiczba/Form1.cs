namespace LosowaLiczba
{
    public partial class Form1 : Form
    {
        Random rand = new Random();
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int randomNumber = rand.Next(1,101);
            label1.Text = randomNumber.ToString();
        }
    }
}