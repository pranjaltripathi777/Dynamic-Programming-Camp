#include <bits/stdc++.h>
using namespace std;

bool wordBreakHelper(string s, unordered_set<string>& dict) {
    if (s.empty()) return true;  // base case

    for (int i = 1; i <= s.size(); i++) {
        string prefix = s.substr(0, i);
        string suffix = s.substr(i);
        
        if (dict.count(prefix) && wordBreakHelper(suffix, dict)) {
            return true;
        }
    }
    return false;
}

bool wordBreak(string s, vector<string>& wordDict) {
    unordered_set<string> dict(wordDict.begin(), wordDict.end());
    return wordBreakHelper(s, dict);
}

int main() {
    string s = "leetcode";
    vector<string> wordDict = {"leet", "code"};
    cout << (wordBreak(s, wordDict) ? "true" : "false");
}
