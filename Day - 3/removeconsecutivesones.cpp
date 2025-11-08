#include<iostream>
#include<vector>
using namespace std ;
void duplicatesones(string &s , int idx , vector<string>&answer){
    int n = s.size();

    if( idx  == n){
        answer.push_back(s);
        return;
    }
    s[idx] = '0';
    duplicatesones(s,idx+1,answer);
    if(s[idx] = 0  && s[idx-1] != '1'){
        s[idx] = '1';
        duplicatesones(s,idx+1,answer);

    }

}
int main()
{
    
    return 0 ;
}
class Solution {
public:
    void backtrack(vector<int>& nums, int start, vector<vector<int>>& results) {
        if (start == nums.size()) {
            results.push_back(nums);
            return;
        }

        for (int i = start; i < nums.size(); ++i) {
            swap(nums[start], nums[i]);
            backtrack(nums, start + 1, results);
            swap(nums[start], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> results;
        backtrack(nums, 0, results);
        return results;
        
    }
};