Przykładowe rozwiązanie 1. 
#include <iostream> 
#include <ctime> 
#include <vector> 
#include <cmath> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
UL binary_string2dec(string binary) {
 UL dec = 0;
 UL potega = binary.size() - 1;
 for (auto bit : binary) { // bit to '1' albo '0'
 dec += (bit - 48) * pow(2, potega--);
 }
 return dec;
}
string dec2binary_string(UL dec) {
 string binary = "";
 while (dec != 0) {
 binary = char((dec % 2) + 48) + binary;
 dec /= 2;
 }
 return binary;
}
// a teraz rozwiązania bardziej uniwersalne niż wcześniejsze, dla dowolnego systemu 
// o podstawie 2, 3, ..., 16 
UL str2dec(string s, UL podstawa) {
 // zwróć uwagę, że pozycja cyfry to jej wartość w systemie dziesiętnym, 
 // np. 3 ma pozycję 3, a f pozycję 15 
 string cyfrySystemu = "0123456789abcdef";
 UL dec = 0;
 UL potega = s.size() - 1;
 for (auto cyfra : s) {
 UL vpoz = cyfrySystemu.find(cyfra); // pozycja vpoz jest równocześnie wartością 
 // dziesiętną cyfry 
 dec += vpoz * pow(podstawa, potega--);
 }
 return dec;
}
string dec2str(UL dec, UL podstawa) {
 string cyfrySystemu = "0123456789abcdef";
 string s;
 while (dec != 0) {
 s = cyfrySystemu[(dec % podstawa)] + s;
 dec /= podstawa;
 }
 return s;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << binary_string2dec("0") << endl; // 0
 cout << binary_string2dec("10001") << endl; // 17
 cout << binary_string2dec("11111") << endl; // 31
 cout << binary_string2dec("0001001101") << endl; // 77
 cout << dec2binary_string(0) << endl;
 cout << dec2binary_string(17) << endl;
 cout << dec2binary_string(31) << endl;
 cout << dec2binary_string(77) << endl;
 // uniwersalna zmiana uwzględniająca podstawę systemu 
 cout << str2dec("10001", 2) << endl; // binarne 17
 cout << str2dec("61", 8) << endl; // ósemkowe 49
 cout << str2dec("ff", 16) << endl; // szesnastkowe 255
 cout << str2dec("120", 3) << endl; // trójkowe 15
 cout << dec2str(17, 2) << endl; // pokaż 17 w binarnym
 cout << dec2str(49, 8) << endl; // pokaż 49 w ósemkowym
 cout << dec2str(255, 16) << endl; // pokaż 255 w szesnastkowym 
 cout << dec2str(15, 3) << endl; // pokaż 15 w trójkowym
}

Przykładowe rozwiązanie 2. 
#include <iostream> 
#include <string> 
#include <cmath> 
int get_decimal_value(char c) {
 return isdigit(c) ? c - '0' : c - 'A' + 10;
}
int get_character_from_value(int value) {
 return value >= 0 && value <= 9 ? value + '0' : value + 'A' - 10;
}
long long convert_to_decimal(const std::string& value, int base) {
 long long result = 0;
 for (int i = 0; i < value.size(); ++i)
 result += get_decimal_value(value[i]) * pow(base, value.size() - i - 1);
 return result;
}
std::string convert_from_decimal(long long value, int base) {
 if (base == 10)
 return std::to_string(value);
 std::string result;
 while (value > 0) {
 result += get_character_from_value(value % base);
 value /= base;
 } 
 
 result.assign(result.rbegin(), result.rend()); 
 return result; 
} 
 
std::string convert(const std::string& value, int from_base, int to_base) { 
 if (from_base == to_base) 
 return value; 
 
 return convert_from_decimal(convert_to_decimal(value, from_base), to_base); 
} 
 
int main() { 
 std::string value; 
 int from_base, to_base; 
 std::cin >> value >> from_base >> to_base; 
 
 std::cout << convert(value, from_base, to_base) << std::endl; 
} 