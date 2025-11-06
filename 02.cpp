#include <iostream>
#include <stack>
using namespace std;

void delete_middle(stack<int>& st, int count, int size) {
    // Base case
    if (count == size / 2) {
        st.pop(); 
        return;
    }

    // Remove top element
    int top_val = st.top();
    st.pop();

    // Recursive call
    delete_middle(st, count + 1, size);
    st.push(top_val);
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
  

    int size = st.size();

    delete_middle(st, 0, size);

    cout << "Stack after deleting middle element:\n";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}
