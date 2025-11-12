class Solution {
private:
    vector<vector<string>> res;
    bool issafe(vector<string>& board, int row, int col, int n){
        for(int i=0; i<row; i++){
            if(board[i][col] == 'Q')    return false;
        }
        // diagonal up left
        for(int i=row-1,j=col-1; i>=0 && j>=0; i--,j--){
            if(board[i][j] == 'Q')  return false;
        }
        for(int i=row-1, j=col+1; i>=0&&j<n; i--,j++){
            if(board[i][j] == 'Q')  return false;
        }
        return true;
    }

    void backtrack(vector<string>& board, int row, int n){
        if(row == n){ res.push_back(board); return; }
        for(int col=0; col<n;col++){
            if(issafe(board, row, col, n)){
                board[row][col] = 'Q';
                backtrack(board, row+1, n);
                board[row][col] = '.';  // backtrack by removing queen
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n,'.'));
        backtrack(board, 0, n);
        return res;
    }
};
#include <iostream>
#include <vector>
using namespace std;

long long solve(vector<long long>& freq, int end, int index, vector<long long>& dp) {
    if (index > end)
        return 0;

    if (dp[index] != -1)
        return dp[index];

    long long take = index * freq[index] + solve(freq, end, index + 2, dp);
    long long skip = solve(freq, end, index + 1, dp);

    return dp[index] = max(take, skip);
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

    vector<long long> dp(100001, -1);
    cout << solve(freq, 100000, 1, dp) << endl;

    return 0;
}
