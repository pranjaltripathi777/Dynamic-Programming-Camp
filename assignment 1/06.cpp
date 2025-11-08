#include<iostream>
using namespace std ;
void decimaltobinary(int n){
    if(n == 0 ){
        return ;
    }
    decimaltobinary(n/2);
    cout<< n % 2;

}
int main()
{
    int num  = 10 ; 
    cout << " The binary number of " << num << " is : ";
    if(num == 0 ){
        cout<< 0 ;

    }
    else {
        decimaltobinary(num);
    }
    cout << endl;
     return 0 ;
}