//Q. Convert a given integer value into a float and print both values.

#include <iostream>
using namespace std;

int main()
{
    int marks = 66;
    float total = static_cast<float>(marks);

    cout << marks << endl;
    cout << total << endl;
    return 0;
}
