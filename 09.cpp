#include<iostream>
#include<vector>
using namespace std ;
void reversearray(vector<int>&arr , int start , int end ){
    if(start >= end){
        return ;
    }
    swap(arr[start],arr[end]);
     reversearray(arr, start+1 , end-1);
}
int main()
{
    vector<int>arr{ 1 , 2 , 3 , 4 , 5 , 6 , 7 };
    int start = 0 ;
    int end  = arr.size()-1;
    reversearray(arr, start, end);
    for (int x : arr)
    cout << x << " ";    return 0 ;
}