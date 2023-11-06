#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int total1 = 0, total2 = 0, total3 = 0;
    
    for (int i = 0; i < n; ++i) {
        string firstName, lastName;
        int score1, score2, score3;
        cin >> firstName >> lastName >> score1 >> score2 >> score3;
        
        total1 += score1;
        total2 += score2;
        total3 += score3;
    }
    
    cout << fixed << setprecision(1) << static_cast<double>(total1) / n << " "
         << static_cast<double>(total2) / n << " "
         << static_cast<double>(total3) / n << endl;
    
    return 0;
}