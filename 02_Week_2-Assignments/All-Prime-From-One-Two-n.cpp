#include <iostream>
using namespace std;

bool IsPrime(int n);

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;

    if (num < 0) {
        cout << "It's a negative number!" << endl;
    } else if (num == 0 || num == 1) {
        cout << "This is not a prime number!" << endl;
    } else {
        cout << "All primes from 1 to " << num << " : ";
        for (int i = 2; i <= num; i++) {
            if (IsPrime(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

bool IsPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
