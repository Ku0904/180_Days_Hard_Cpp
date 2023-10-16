// 1: Use Insertion Sort Algorithm to sort the array of integers in decreasing order.
//
// 2: Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element of the array. Question was explained in the class.

#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] > arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }
};

int main() {
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the index value " << i << " of array : " << endl;
        cin >> arr[i];
    }

    //----------------------------1st----------------------------//

    InsertionSort(arr, n);

    cout << "Sorted Array will be : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    //----------------------------2nd--------------------------//

    // do think upon this question again

    for (int i = n-1; i >= 1; i--) {
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }

    cout << "Sorted Array will be : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}