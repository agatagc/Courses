namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            Console.WriteLine("Hello");
        }

        private void name_Click(object sender, EventArgs e)
        {
            name.Text = "fiona";
        }
    }
}