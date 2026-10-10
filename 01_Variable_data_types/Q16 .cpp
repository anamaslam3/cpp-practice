//Q. Calculate a person's age in years, months and approximate days from a given birth year/month/day and current date.

#include <iostream>
using namespace std;

int main()
{
    int birthYear = 2007;
    int birthMonth = 7;
    int birthDay = 15;

    int currentYear = 2026;
    int currentMonth = 10;
    int currentDay = 10;

    int birthTotalDays = birthYear * 365 + birthMonth * 30 + birthDay;
    int currentTotalDays = currentYear * 365 + currentMonth * 30 + currentDay;

    int ageInDays = currentTotalDays - birthTotalDays;

    int years = ageInDays / 365;
    int remainingDays = ageInDays % 365;

    int months = remainingDays / 30;
    int days = remainingDays % 30;

    cout << "Age: " << years << " years, "
         << months << " months, "
         << days << " days" << endl;

    return 0;
}

