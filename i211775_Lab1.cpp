// i211775_Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool ValidDay(int day)
{
    return day >= 1 && day <= 31;
}

bool ValidMonth(int month)
{
    return month >= 1 && month <= 12;
}

bool ValidYear(int year)
{
    
    return year >= 0 && year <= 9999;
}

int main()
{
    
    cout << "--------ENTER THE DATE---------" << endl << endl;
    int day = 0;
    int month = 0;
    int year = 0;

    
    cout << " Enter the day: ";
    cin >> day;

    cout << endl;

    while (!ValidDay(day))
    {
        cout << "Invalid day. Please enter a day between 1 and 31: ";
        cin >> day;
    }

    cout << " Enter the month: ";
    cin >> month;

    cout << endl;
    while (!ValidMonth(month))
    {
        cout << "Invalid month. Please enter a month between 1 and 12: ";
        cin >> month;
    }

    cout << endl;

    cout << " Enter the year: ";
    cin >> year;

    cout << endl;

    while (!ValidYear(year))
    {
        cout << "Invalid year. Please enter a year between 0 and 9999: ";
        cin >> year;
    }

    // Displaying the entered date 

    cout << "The Date entered  is: " << day << "/" << month << "/" << year << endl;

    return 0;
}
