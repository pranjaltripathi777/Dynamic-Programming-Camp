#include<iostream>
using namespace std ;
void reversestring(string& s , int start , int end ){
     if(start >= end){
          return ;
     }
     swap(s[start],s[end]);
     reversestring(s,start+1,end-1);
}
int main()
{
     string s;
     cout<< "Enter the string ";
     cin >> s;
     reversestring(s,0,s.size()-1);
     cout<< s;
     return 0 ;
}
