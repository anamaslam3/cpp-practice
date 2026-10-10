//Q. Take seconds and convert them into hours, minutes and seconds. 

#include <iostream>
using namespace std;

int main()
{
    int totalSeconds = 3725;
    int hours, minutes, seconds;

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    return 0;
}
