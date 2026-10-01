#include <iostream>
#include <math.h>
using namespace std;

const int length = 5;
int arr[length];

int accessElement(int index)
{
    if (index < 0 || index >= length)
    {
        return -1;
    }
    return arr[index];
}

int main()
{

    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    int access_point;
    cout << "Accessing Index: ";
    cin >> access_point;
    int value_return = accessElement(access_point);
    if (value_return != -1)
    {
        cout << value_return << endl;
    }
    else
    {
        cout << "Try again";
    }
    return 0;
}