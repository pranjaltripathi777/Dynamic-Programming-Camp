#include<iostream>
using namespace std ;
bool checkdigit(string str , int i , int n ){
    if(i == n ){
        return true;
    }
    if(str[i] < '0' ||str[i]  > '9' ){
        return false;
    }
    return checkdigit(str , i+1 , n);
}
int main()
{
    string str;
    cout<< "Enter the string you want to check : ";
    cin >> str;
    int i = 0 ;
    int n = str.length();

    bool checker = checkdigit(str , 0, n);
    if(checker){
        cout<< "True , string contain only digit";
    }
    else{
        cout<< "False ";
    }
     return 0 ;
}