#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cout << "Enter the value of X:";
    cin >> x;
    cout << "Enter the value of y:";
    cin >> y;

    if (x == y)
    {
        cout <<"both are equal";
    }

    else if (x > y)
    {
        cout << "x is greater then y";
    }
    else
    {
        cout << "y is greater then x";
    }

    return 0;
}