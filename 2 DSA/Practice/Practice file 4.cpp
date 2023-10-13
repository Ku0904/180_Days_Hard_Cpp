//1: Use Bubble Sort Algorithm to sort the array of integers in decreasing order.
//
//2: Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest number to first place by starting from the last. Question was explained in the class.
//
//3: Bubble Sort Algorithm to sort the array of char in ascending order.


#include<iostream>
using namespace std;

void BubbleSortForChar(char arr[],int n){
    for (int i = 0; i < n-1; i++) {
        bool swapped = 0;
        for (int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
        }
        if(swapped==0)
            break;
    }
}

int main () {
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the element with index value : " << i << endl;
        cin >> arr[i];
    }

    /*----------------------------1st----------------------------*/
    for (int i = 0; i < n-1; i++) {
        bool swapped = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
            if (swapped == 0)
                break;
        }
    }
    cout << "Sorted array in decreasing order is : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    /*----------------------------2nd----------------------------*/
    for (int i = 0; i < n-1; i++) {
        bool swapped = 0;
        for (int j = n - 1 ; j > i; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
                swapped = 1;
            }
            if (swapped == 0)
                break;
        }
    }
    cout << "Sorted array in ascending order is : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    /*----------------------------3rd----------------------------*/
    int CharSize;
    cout << "Enter the size of Char Array : " << endl;
    cin >> CharSize;

    char CharArr[CharSize];
    for (int i = 0; i < CharSize; i++) {
        cout << "Enter the element with index value of CharArr : " << i << endl;
        cin >> CharArr[i];
    }

    BubbleSortForChar(CharArr,CharSize);

    cout << "Sorted array in ascending order is : ";
    for (int i = 0; i < CharSize; i++) {
        cout << CharArr[i] << " ";
    }
    cout << endl;

    return 0;
}

