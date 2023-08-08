
#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
void sortArray(T arr[], int n) {
    sort(arr, arr + n);
}

template <typename T>
int searchArray(T arr[], int n, T x) {
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main() {
    int arr1[] = {10, 20, 30, 40};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    sortArray(arr1, n1);
    cout << "Sorted array is: ";
    for (int i=0; i < n1; i++)
       cout << arr1[i] << " ";
    cout << endl;
    int x = 20;
    int index = searchArray(arr1, n1, x);
    if (index != -1)
       cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    double arr2[] = {1.1, 2.2, 3.3, 4.4};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    sortArray(arr2, n2);
    cout << "Sorted array is: ";
    for (int i=0; i < n2; i++)
       cout << arr2[i] << " ";
    cout << endl;
    double y = 3.3;
    index = searchArray(arr2, n2, y);
    if (index != -1)
       cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}