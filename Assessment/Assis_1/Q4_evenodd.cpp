#include <iostream>
using namespace std;
// WAP to chek if the given number is even or odd
int main()
    {
        int a;
        cout << "Enter a number: ";
        cin >> a;
        if(a==0)
            {
                cout << "\n the given number is 0";
            }
        else if (a%2==0)
            {
                cout << "\n Give number is even";
            }
        else
        {
            cout << "\n Given number is odd";
        }
        return 0;
    }
