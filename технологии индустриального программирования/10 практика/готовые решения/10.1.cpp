#include <iostream>
using namespace std;

int main() {
    double N;
    cin >> N;
    double** p = NULL;
    p = new double*;
    *p = new double(N);
    cout << **p;
    delete *p;
    delete p;
}