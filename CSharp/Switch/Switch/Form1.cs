using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Switch
{
    public partial class Form1 : Form
    {
        Random rnd = new Random();
        public Form1()
        {
            InitializeComponent();
            label1.Text = "";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int caseSwitch = rnd.Next(1, 6);

            switch (caseSwitch)
            {
                case 1: // mamy case 1, poniewaz caseSwitch zaczyna sie od 1 i konczy na 5
                    DisplayInfo("To, że milczę, nie znaczy, że nie mam nic do powiedzenia. \n Jonathan Carroll");
                    break;
                case 2:
                    DisplayInfo("Książki są lustrem: widzisz w nich tylko to co, już masz w sobie.\n Carlos Ruiz Zafón");
                    break;
                case 3:
                    DisplayInfo("Kocha się za nic. Nie istnieje żaden powód do miłości.\n Paulo Coelho");
                    break;
                case 4:
                    DisplayInfo("Życie jest jak pudełko czekoladek - nigdy nie wiesz, co ci się trafi.\n Winston Groom, Forrest Gump");
                    break;
                case 5:
                    DisplayInfo("Sarkazm to ostatnia deska ratunku, dla osób o upośledzonej wyobraźni.\nCassandra Clare");
                    break;
                default:
                    DisplayInfo("No citation");
                    break;
            }  
        }
        void DisplayInfo(string cytat)
        {
            label1.Text = cytat;
        }
    }
}
