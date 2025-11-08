#include<iostream>
#include<vector>
using namespace std ;
bool checksorted(vector<int>&arr , int n , int i){
    if( i == n-1){
        return true;
    }
    if(arr[i+1]<arr[i]){
       return false;
    }
    else{
        return checksorted(arr,n,i+1);
    }
}
int main()
{
    vector<int>arr{ 10 , 20 , 30, 40 , 50 , 60 };
    int n = arr.size();
    int i = 0 ;
    if(checksorted(arr,n,i)){
        cout<< "True ";
    }
    else{
        cout<< "False";
    }
    return 0 ;
}