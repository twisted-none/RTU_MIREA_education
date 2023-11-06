#include <iostream>
#include <string>
#include <map>
using namespace std;
struct drug{
 string name;
 int b1, b2, b3;
};
int main() {
 int n;
 cin >> n;
 drug* cheli = new drug[n];
 double sr = 0.0;
 multimap <int, string, greater<int>> pon;
 for (int i = 0; i < n; i++) {
  string name1, surname, name;
  cin >> name1 >> surname >> cheli[i].b1 >> cheli[i].b2 >> cheli[i].b3;
  name = name1 + " " + surname;
  sr = (cheli[i].b1 + cheli[i].b2 + cheli[i].b3) / 3;
  pon.insert(make_pair(sr, name));
 }
 map <int, string> ::iterator it;
 for (it = pon.begin(); it != pon.end(); it++) {
  cout << (*it).second << endl;
 }
}