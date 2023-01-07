#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a positive number to count to:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i%3 == 0 && i%5 == 0) {
            cout << "FizzBuzz";
        } else if (i%5 == 0) {
            cout << "Buzz";
        } else if (i%3 == 0) {
            cout << "Fizz";
        } else {
            cout << i;
        }
        cout << endl;
    }
}