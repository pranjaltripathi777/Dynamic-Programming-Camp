#include <iostream>
using namespace std;
int countdigit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int newdigit = n / 10;
    return 1 + countdigit(newdigit);
}
int main()
{
    int n;
    cout << "Enter the number which you want to count  : ";
    cin >> n;
    if (n == 0)
        cout << "The digits in the number is: 1" << endl;
    else
        cout << "The digits in the number is: " << countdigit(n) << endl;

    return 0;
}