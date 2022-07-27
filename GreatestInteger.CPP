// A program to check the largest number in a, b and c
#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a, b, c;
    cout << "enter the value of a";
    cin >> a;
    cout << "enter the value of b";
    cin >> b;
    cout << "enter the value of c";
    cin >> c;
    if ((a > b) && (a > c))
    {
        cout << "a is the greatest"
             << "\t";
    }
    else if ((b > a) && (b > c))
    {
        cout << "b is the greatest"
             << "\t";
    }
    else if ((c > a) && (c > b))
    {
        cout << "c is the greatest"
             << "\t";
    }
    else if ((a == b) && (b == c))
    {
        cout << "All are equal";
    }
    else
    {
        cout << "any two are equal";
    }
    getche();
}