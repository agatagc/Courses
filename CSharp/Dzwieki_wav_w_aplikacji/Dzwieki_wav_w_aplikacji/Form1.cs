using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Media; //dodajemy biblioteke do obslugi dzwiekow

namespace Dzwieki_wav_w_aplikacji
{
    public partial class Form1 : Form
    {
        SoundPlayer player;
        bool isSoundPlaying;
        public Form1()
        {
            InitializeComponent();
            //player = new SoundPlayer("attack2t22wav-14511.wav");
            player = new SoundPlayer(Properties.Resources.attack2t22wav_14511);  
            isSoundPlaying = false;
        }

        private void Music_Click(object sender, EventArgs e)
        {
            if (isSoundPlaying == false) 
            {
                player.Play();
                Music.Text = "Stop";
                isSoundPlaying = true;
            }else
            {
                player.Stop();
                Music.Text = "Play";
                isSoundPlaying = false;
            }
        }
    }
}
