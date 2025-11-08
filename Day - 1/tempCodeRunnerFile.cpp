#include <iostream>
using namespace std;

void reverseString(string &str, string &rev, int left, int right)
{
     if (left > right)
          return;

     // Assign values
     rev[left] = str[right];
     rev[right] = str[left];

     // Recursive call
     reverseString(str, rev, left + 1, right - 1);
}

int main()
{
     string str = "Pranjal";
     string rev = str;

     reverseString(str, rev, 0, str.length() - 1);

     cout << rev;
     return 0;
}
