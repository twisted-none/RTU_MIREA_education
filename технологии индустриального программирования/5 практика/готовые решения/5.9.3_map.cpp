#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
 int n;
 cin >> n;
 map <string, string> aga;
 for (int i = 0; i < n; i++) {
  string surname, name, cl, dt, skl1, skl2;
  cin >> surname >> name >> cl >> dt;
  skl1 = cl + " " + surname + " " + name;
  skl2 = dt;
  aga.insert(make_pair(skl1, skl2));
 }
 map <string, string> ::iterator it;
 for (it = aga.begin(); it != aga.end(); it++) {
  cout << (*it).first << " " << (*it).second << endl;
 }
}