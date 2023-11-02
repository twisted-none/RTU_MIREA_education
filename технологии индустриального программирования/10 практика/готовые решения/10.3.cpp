#include <iostream>
using namespace std;

int main() {
 int A, B, C;
 cin >> A >> B >> C;
 for (int i = 2; i < C; i++) {
  int t;
  t = A * B;
  A = B;
  B = t;
 }
 cout << B;
}