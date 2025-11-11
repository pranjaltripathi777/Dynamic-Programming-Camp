#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
    
    int solve(int n, vector<int> &dp) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        if (dp[n] != -1) return dp[n]; 
        return dp[n] = solve(n - 1, dp) + solve(n - 2, dp) + solve(n - 3, dp);
    }
};

int main() {
    Solution obj;
    
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    cout << "The " << n << "th Tribonacci number is: " << obj.tribonacci(n) << endl;
    
    return 0;
}