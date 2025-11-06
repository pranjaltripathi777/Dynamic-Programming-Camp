#include <iostream>
using namespace std;

void solve(int ones, int zeros, int n, string s) {
    // base case
    if (s.length() == n) {
        cout << s << " ";
        return;
    }

    solve(ones + 1, zeros, n, s + "1");

    if (ones > zeros) {
        solve(ones, zeros + 1, n, s + "0");
    }
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    solve(0, 0, n, "");
    return 0;
}
