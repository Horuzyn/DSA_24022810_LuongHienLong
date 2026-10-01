#include <iostream>
#include <math.h>
using namespace std;

const int length = 100;
int arr[length];

void removeIndex(int size, int index)
{
    if (size <= 0)
    {
        cout << "Array is empty" << endl;
        return;
    }

    if (index < 0 || index >= size)
    {
        cout << "Invalid index" << endl;
        return;
    }

    for (int i = 0; i < size; i++)
    {
        if (i != index)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int size;
    int index;

    cout << "Enter the size of the array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the index of the element to remove: ";
    cin >> index;

    removeIndex(size, index);

    return 0;
}