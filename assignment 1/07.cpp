#include <iostream>
using namespace std;
void reverseNumber(int n) {
    cout << n % 10;
    if (n / 10 == 0)
        return;
    reverseNumber(n / 10);
}

int main() {
    int num = 1234;
    cout << "Reversed number: ";
    reverseNumber(num);
    cout << endl;
    return 0;
}
