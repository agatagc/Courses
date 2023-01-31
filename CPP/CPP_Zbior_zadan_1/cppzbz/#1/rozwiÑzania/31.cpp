/*
Zadanie #1.31
Rozwiązanie a) 
Dwa razy wyświetli się 1. Za pierwszym razem najpierw a jest inkrementowane 
(++a), dopiero potem trafia do strumienia wyjściowego. Za drugim razem a jako 
wartość 1 bezpośrednio trafia do strumienia. 
Rozwiązanie b) 
Wyświetli się 0. Prawostronny operator inkrementacji ++ ma mniejszy priorytet 
niż odejmowanie, dlatego najpierw obliczona zostanie wartość a–1, czyli będzie 
to 0 (bo a to wciąż 1). Następnie wykonane zostanie porównanie 0&&1, które 
oczywiście daje wartość false, co przy wyświetlaniu pokaże 0. Pod koniec inkrementacja zwiększy a do wartości 2 i to ona wyświetli się w drugiej linijce kodu. 
Rozwiązanie c) 
Siedem (1+6–0=7). Kolejność działań jest jak na matematyce, jednak wynik dzielenia literałów całkowitych 4/5 jest konwertowany na liczbę całkowitą poprzez 
redukcję części ułamkowej. Zatem 4/5, choć wynosi 0.8, to po odcięciu części po 
przecinku (redukcja do typu całkowitego, bo takiego typu są literały 4 oraz 5) 
jest to po prostu 0. 
Rozwiązanie d) 
Operator and ma mniejszy priorytet niż operator <<, w efekcie komputer próbuje wykonać jakby operację: (cout << true) and (false << endl), co jest — 
nie oszukujmy się — absurdalne ! Nie da się logicznie za pomocą koniunkcji 
(i) połączyć części objętych nawiasem. 

*/
