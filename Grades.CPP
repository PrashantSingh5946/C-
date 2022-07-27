// Adding the program to find the exact grade on the basis of given numbers
#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int marks1, marks2, marks3, marks4, marks5, sum, per;
    cout << "Enter Maths marks";
    cin >> marks1;
    cout << "Enter Science marks";
    cin >> marks2;
    cout << "Enter English marks";
    cin >> marks3;
    cout << "Enter Physical Education marks";
    cin >> marks4;
    cout << "Enter Computer Science marks";
    cin >> marks5;
    sum = marks1 + marks2 + marks3 + marks4 + marks5;
    per = (sum / 5);
    cout << "your percentage is" << per << "%"
         << "\n";
    if (per >= 91 && per <= 100)
        cout << "You have got A1";
    else if (per >= 81 && per <= 90)
        cout << "You have got A2";
    else if (per >= 71 && per <= 80)
        cout << "You have got B1";
    else if (per >= 61 && per <= 70)
        cout << "You have got B2";
    else if (per >= 51 && per <= 60)
        cout << "You have got C1";
    else if (per < 60)
        cout << "You have got E";
    getche();
}