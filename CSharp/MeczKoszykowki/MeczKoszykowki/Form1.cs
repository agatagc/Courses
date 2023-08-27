namespace MeczKoszykowki
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        int counterTeam1 = 0;
        int counterTeam2 = 0;

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void btnTeam1point1_Click(object sender, EventArgs e)
        {
            counterTeam1++;
            label1.Text = counterTeam1.ToString();
        }

        private void btnTeam1point2_Click(object sender, EventArgs e)
        {
            counterTeam1 += 2;
            label1.Text = counterTeam1.ToString();
        }

        private void btnTeam1point3_Click(object sender, EventArgs e)
        {
            counterTeam1 += 3;
            label1.Text = counterTeam1.ToString();
        }

        private void btnTakePointAway1_Click(object sender, EventArgs e)
        {
            counterTeam1--;
            label1.Text = counterTeam1.ToString();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void btnTeam2Point1_Click(object sender, EventArgs e)
        {
            counterTeam2++;
            label2.Text = counterTeam2.ToString();
        }

        private void btnTeam2Point2_Click(object sender, EventArgs e)
        {
            counterTeam2 += 2;
            label2.Text = counterTeam2.ToString();
        }

        private void btnTeam2Point3_Click(object sender, EventArgs e)
        {
            counterTeam2 += 3;
            label2.Text = counterTeam2.ToString();
        }

        private void btnTakePointAway2_Click(object sender, EventArgs e)
        {
            counterTeam2--;
            label2.Text = counterTeam2.ToString();
        }
    }
}