#include <iostream>
#include<string.h>
using namespace std;
//WAP to concatenate two strings using standard libraryfunctioni.(Hint : use string function called strcat
int main()
    {
    char a[10],b[10],c[20];
    cout << "Enter First name \n";
    cin >> a;
    cout << "Enter Last name \n";
    cin >> b;
    //getline(cin,a[10]);
    strcat(a,b);
    cout << "\n The string is "<< a;
    return 0;
    }
