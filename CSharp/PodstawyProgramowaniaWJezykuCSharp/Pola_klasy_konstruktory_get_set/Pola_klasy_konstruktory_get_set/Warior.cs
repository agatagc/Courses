using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Pola_klasy_konstruktory_get_set
{
    internal class Warior
    {
        int Health;
        int attack;
        int defence;
        
        public Warior()
        {

        }

        public Warior(int Health)
        {
            this.Health = Health;   // this.Health - odwołuje się do pola klasy Warior
        }

        public Warior(int Health, int attack, int defence)  // konstruktor z parametrami
        {
            this.Health = Health;
            this.attack = attack;
            this.defence = defence;
        }

        public int GetHealth()  // get - pobiera wartość pola
        {
            return Health;
        } 

        public int Getattack()
        {
            return attack;
        }

        public int Getdefence()
        {
            return defence;
        }

        public void SetHealth(int Health)   // set - ustawia wartość pola
        {
            this.Health = Health;
        }
    }
}
