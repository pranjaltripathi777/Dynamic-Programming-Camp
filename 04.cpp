#include <iostream>
#include <vector>
using namespace std;

void backtrack(int start, int n, int k, vector<int>& current, vector<vector<int>>& result) {
    //Base case 
    if (current.size() == k) {
        result.push_back(current);
        return;
    }

    // loop from current number to n
    for (int i = start; i <= n; i++) {
        current.push_back(i);
        backtrack(i + 1, n, k, current, result);
        current.pop_back();              
    }
}

int main() {
    int n, k;
    cout << "Enter n and k: ";
    cin >> n >> k;

    vector<vector<int>> result;
    vector<int> current;

    backtrack(1, n, k, current, result);

    cout << "All combinations:\n";
    for (auto comb : result) {
        cout << "[ ";
        for (int num : comb) cout << num << " ";
        cout << "]\n";
    }
    return 0;
}
