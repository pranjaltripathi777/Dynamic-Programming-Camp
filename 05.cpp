#include<iostream>
using namespace std ;
int numberofzeros(int n){
    if(n == 0 ){
        return 0 ;
    }
    int value = n / 10 ;
    int rem = n % 10;
    int count  = numberofzeros(value);
    if(rem == 0){
       return 1 + count;
    }
    else{
        return count;
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Number of zeros in " << n << " is: " << numberofzeros(n);
     return 0 ;
}