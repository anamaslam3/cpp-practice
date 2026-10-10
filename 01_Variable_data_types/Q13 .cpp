//Q. Swap two integer variables using a third variable.

#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int b = 10;
    int tem;
    tem = a;
    a = b;
    b = tem;
    cout << a << endl;
    cout << b << endl;
    return 0;
}
