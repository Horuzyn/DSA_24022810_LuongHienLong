#include <iostream>
#include <vector>

using namespace std;

int parent(int i){
    return (i - 1) / 2; 
}

int leftChild(int i){
    return 2 * i + 1;
}

int rightChild(int i){
    return 2 * i + 2;
}

void shiftUp(int i , vector<int> &arr){
    while (i > 0 && arr[parent(i)] < arr[i]){
        swap(arr[parent(i)], arr[i]);
        i = parent(i);
    }
}

void shiftDown(int i, vector<int> &arr){
    int maxIndex = i;
    int l = leftChild(i);
    if (l < arr.size() && arr[l] > arr[maxIndex]){
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r < arr.size() && arr[r] > arr[maxIndex]){
        maxIndex = r;
    }
    if (i != maxIndex){
        swap(arr[i], arr[maxIndex]);
        shiftDown(maxIndex, arr);
    }
}

void insert(int p, vector<int> &arr){
    arr.push_back(p);
    int i = arr.size() - 1;
    shiftUp(i, arr);
}

void remove(int i, vector<int> &arr){
    arr[i] = arr[arr.size() - 1];
    arr.pop_back();
    shiftDown(i, arr);
}

void printHeap(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> pq;

    insert(45, pq);
    insert(20, pq);
    insert(14, pq);
    insert(12, pq);
    insert(31, pq);
    insert(7, pq);
    insert(11, pq);
    insert(13, pq);
    insert(7, pq);

    printHeap(pq);
}