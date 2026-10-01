#include <iostream>
#include <math.h>
using namespace std;

const int length = 100;
int arr[length];

void traverseBackwardArray(int size)
{
    for (int i = size; i > 0; i--)
    {
        cout << arr[i - 1] << " ";
    }
}

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    traverseBackwardArray(size);

    return 0;
}