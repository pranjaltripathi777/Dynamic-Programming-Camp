#include<iostream>
using namespace std ;
// I am trying to solve rolling dice codeforces 1093A:
int main()
{
    int t;
    cin>>t;
    int x;
    cin >> x;
    while(t--){
    if(x%7 == 0){
      cout << x/7;
    }
    else{
        cout<< (x/7)+1;
    }
    
    }
    return 0;
   
}