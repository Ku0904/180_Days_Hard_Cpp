//1: Use a Selection Sort Algorithm to sort the array of integers in decreasing order.
//
//2: Use a Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class.
//
//3: Use a Selection Sort Algorithm to sort the array of char in ascending order.

#include<iostream>
using namespace std;

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
        int index = i; // index of max value in array
        for (int j = i+1; j < n; j++) {
            if(arr[j] > arr[index])
                index = j;
        }
        swap(arr[i],arr[index]);
    }

    cout << "Sorted array in decreasing order is : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    /*----------------------------2nd----------------------------*/
    for (int i = n-1; i >= 0; i--) {
        int index = i; // index of max value in array
        for (int j = i; j >= 0; j--) {
            if(arr[j] > arr[index])
                index = j;
        }
        swap(arr[i],arr[index]);
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

    char CharArr[n];
    for (int i = 0; i < CharSize; i++) {
        cout << "Enter the element with index value of CharArr : " << i << endl;
        cin >> CharArr[i];
    }

    for (int i = 0; i < CharSize-1; i++) {
        int index = i; // index of min value in array
        for (int j = i+1; j < CharSize; j++) {
            if(CharArr[j] < CharArr[index])
                index = j;
        }
        swap(CharArr[i],CharArr[index]);
    }

    cout << "Sorted array in ascending order is : ";
    for (int i = 0; i < CharSize; i++) {
        cout << CharArr[i] << " ";
    }
    cout << endl;

   return 0;
}

