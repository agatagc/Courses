#include <iostream> 
#include <ctime> 
#include <vector> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
string format2(L v) {
 if (v <= 9) return "0" + to_string(v);
 return to_string(v);
}
string roznica_czasu(string t1, string t2) {
 L t2_sek = stoi(t2.substr(0, 2)) * 3600 + stoi(t2.substr(3, 2)) * 60 ↪
 + stoi(t2.substr(6, 2));
 L t1_sek = stoi(t1.substr(0, 2)) * 3600 + stoi(t1.substr(3, 2)) * 60 ↪ 
 + stoi(t1.substr(6, 2));
 L t = abs(t2_sek - t1_sek);
 L tg = t / 3600;
 L tm = (t - tg * 3600) / 60;
 L ts = t - tg * 3600 - tm * 60;
 return format2(tg) + ":" + format2(tm) + ":" + format2(ts);
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << roznica_czasu("09:05:08", "13:10:33") << endl;
 cout << roznica_czasu("13:10:33", "09:05:08") << endl;
 cout << roznica_czasu("09:35:08", "13:10:33") << endl;
 cout << roznica_czasu("24:00:00", "00:00:01") << endl;
 cout << roznica_czasu("24:00:00", "00:00:00") << endl; // a może 0? :)
}