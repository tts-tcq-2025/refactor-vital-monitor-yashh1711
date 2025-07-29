#include <iostream>
using std::cout, std::endl;

void printVital(char *vital, int value)
{
    switch (value)
    {
    case 0:
        cout << vital << " is Low" << endl;
        break;
    case 1:
        cout << vital << " is OK" << endl;
        break;
    case 2:
        cout << vital << " is Elevated" << endl;
        break;
    default:
        break;
    }
}