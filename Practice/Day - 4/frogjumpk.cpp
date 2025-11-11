#include <bits/stdc++.h>
using namespace std;

int mincost(int n, int k, vector<int>& height) {
    if (n == 0) return 0;
    int steps = INT_MAX;
    for (int j = 1; j <= k; j++) {
        if (n - j >= 0) {
            int jump = mincost(n - j, k, height) + abs(height[n] - height[n - j]);
            steps = min(steps, jump);
        }
    }return steps;
}

int main() {
    int n, k;
    cin >> n ;
    cin >> k;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
       cin >> height[i];
    } 

    cout << "Minimum cost: " << mincost(n - 1, k, height);
    return 0;
}
