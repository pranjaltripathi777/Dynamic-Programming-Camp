
#include <iostream>
using namespace std;

int sumOfDigit(int n) {
    if (n == 0) {
        return 0;
    }
    int digit = n % 10;
    return digit + sumOfDigit(n / 10);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Sum of digits: " << sumOfDigit(n) << endl;

    return 0;
}
