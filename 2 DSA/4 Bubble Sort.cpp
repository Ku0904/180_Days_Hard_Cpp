
#include<iostream>
using namespace std;

int main()
{
    // Bubble Sort technique
    // array of size n
    // in 1st round/pass at index i = 0 swap the Adjacent numbers in array starting from index 0 to n-1 if the number is smaller
    // in 2nd round/pass at index i = 1 swap the Adjacent numbers in array starting from index 0 to n-2 if the number is smaller
    // in 3rd round/pass at index i = 2 swap the Adjacent numbers in array starting from index 0 to n-3 if the number is smaller
    // in 4th round/pass at index i = 3 swap the Adjacent numbers in array starting from index 0 to n-4 if the number is smaller
    // Till ...
    // in (n-1)th round/pass at index i = n-2 swap the Adjacent numbers in array starting from index 0 to n-n if the number is smaller

    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cout << "Enter the index value " << i << " of array : " << endl;
        cin >> arr[i];
    }

    // Logic Of Bubble Sort
    for (int i = 0; i < n-1; i++) {
        bool swapped = 0;
        for (int j = 0; j < n-1-i; j++) { // we want 0 to (n-1)-i comparisons
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j + 1]); //every swap is a bubble
                swapped = 1;
            }
        }
        if(swapped==0)
            break;
    }
//    another approach
//    for (int i = n-2; i >= 0; i--) {
//        bool swapped = 0;
//        for (int j = 0; j <= i; j++) { // we want 0 to (n-1)-i comparisons
//            if(arr[j] > arr[j+1]){
//                swap(arr[j],arr[j+1]); //every swap is a bubble
//                swapped = 1;
//                }
//        }
//        if(swapped==0)
//          break;
//    }

    cout << "Sorted Array will be : ";
    for(int i = 0; i < n ;i++){
        cout << arr[i] << " " ;
    }
    // space complexity:- AS:-O(1) extra variables i,j TSC:-O(n) n cause array take n space
    // time complexity:- O(n^2),Omega(n) // after one round if there is no swapping then the array is sorted but atleast n to n-1 rounds will take place, theta(n^2)
    return 0;
}