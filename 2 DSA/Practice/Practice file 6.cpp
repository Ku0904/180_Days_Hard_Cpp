//1: An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;
//
//2: Search Insert Position

#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    // Logic Of Binary Search
    int start = 0, end = n-1, middle;
    middle = (start + end)/2;

    while(start <= end){
        if(arr[middle] == key) {
            return middle;
            break;
        }
        else if(arr[middle] > key) {
            // right side
            start = middle + 1;
            middle = (start + end) / 2;
        }
        else if(arr[middle] < key) {
            // left side
            end = middle - 1;
            middle = (start + end) / 2;
        }
    }

    return -1;
};

int main() {
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter a Sorted Array in descending order only" << endl;
    for(int i = 0;i<n;i++){
        cout << "Enter the index value " << i << " of array : " << endl;
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key value you want to find in array : " << endl;
    cin >> key;

    //----------------------------1st----------------------------//

    cout << "Index value is : " << BinarySearch(arr,n,key) << endl;

    //----------------------------2nd--------------------------//

    // https://leetcode.com/problems/search-insert-position/description/

    return 0;
}