#include<iostream>
#include<stack>
using namespace std ;
void sortstack(stack<int>&st){
     //base case
     if(st.size() == 1){
          return;
     }
     int top = st.top();
     st.pop();
     

}
int main()
{
     stack<int>st;
     // pushing the value in stack 
     st.push(4);
     st.push(2);
     st.push(0);
     st.push(1);
     st.push(14);



     return 0 ;
}