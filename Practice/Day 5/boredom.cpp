#include<bits/stdc++.h>
using namespace std;

long long solve(vector<long long>& freq, int end, int index,vector<long long>&dp) {
    if (index > end)
        return 0;
    if(dp[index] != -1){
        return dp[index];
    }

    long long take = index * freq[index] + solve(freq, end, index + 2,dp);
    long long skip = solve(freq, end, index + 1,dp);

    dp[index]= max(take, skip);
    return dp[index];
}

int main() {
    int n;
    cin >> n;

    vector<long long> freq(100001, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    vector<long long>dp(100001 , -1);

    cout << solve(freq, 100000, 1,dp) << endl;

    return 0;
}

