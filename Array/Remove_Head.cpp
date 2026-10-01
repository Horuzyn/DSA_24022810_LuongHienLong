#include <iostream>
#include <math.h>
using namespace std;

const int length = 100;
int arr[length];

void removeHead(int size)
{
    if (size <= 0)
    {
        cout << "Array is empty" << endl;
        return;
    }

    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < size - 1; i++)
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

    removeHead(size);

    return 0;
}