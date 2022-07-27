// An implementation of enum to tell whether a day is weekend or not
#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    enum
    {
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
        sunday
    } day;
    {
        int i;
        cout << "enter any day";
        cin << i;
        day = i;
        if (day == saturday || day == sunday)
        {
            cout << "The day is weekend";
        }
        else
            (day == wednesday)
            {
                cout << "The day is in Middle";
            }
    }
}