#include <iostream>
using namespace std;
void printsubsequence(string s, string output, int i)
{
    // base case
    if (i >= s.length())
    {
        cout << output << endl;
        return;
    }
    printsubsequence(s, output + s[i], i + 1);
    printsubsequence(s, output, i + 1);
}
int main()
{
    string s = "abc";
    string output = "";
    int i = 0;
    printsubsequence(s, output, i);
    return 0;
}
// class Solution {
//     private:
//     void subset(vector<int>& nums, vector<int>& num, vector<vector<int>>&ans, int i) {
//         // base case
//         if (i == nums.size()) {
//             ans.push_back(num);
//             return;
//         }
//         num.push_back(nums[i]);
//         subset(nums, num, ans, i + 1);
//         num.pop_back();
//         subset(nums, num, ans, i + 1);
//     }
    

// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int>num;
//         subset(nums,num,ans,0);
    
//     }
// };