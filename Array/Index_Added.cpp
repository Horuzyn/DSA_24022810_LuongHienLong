#include <iostream>
#include <math.h>
using namespace std;

const int length = 100;
int arr[length];

void insertElementIndex(int value, int index, int size)
{
    if (size >= length)
    {
        cout << "Array is full" << endl;
        return;
    }

    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;

    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
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

    return 0;
}