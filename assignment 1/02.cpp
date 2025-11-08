#include<iostream>
using namespace std ;
int findmax(int arr[] ,int n ){
    if(n== 1){
        return arr[0];
    }
    int maxrest = findmax(arr+1,n-1);
    if(arr[0]>maxrest){
        return arr[0];
    }
    else{
        return maxrest;
    }
}
int main()
{
    int arr[] = { 1 , 2 , 6 , 5 , 8 , 2 , 4 };
    int n = 7;
    cout<< "The maximum in the array is : "<< findmax(arr,n);
     return 0 ;
}