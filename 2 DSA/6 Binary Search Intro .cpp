#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    // Logic Of Binary Search
    // if there is vector we take int n = arr.size();
    int start = 0, end = n-1, middle;
    // middle = (start + end)/2; // this can give int overflow error
    //middle = end + (start-end)/2;
    middle = start + (end-start)/2;

    while(start <= end){
        if(arr[middle] == key) {
            return middle;
            break;
        }
        else if(arr[middle] < key) {
            // right side
            start = middle + 1;
            middle = (start + end) / 2;
        }
        else if(arr[middle] > key) {
            // left side
            end = middle - 1;
            middle = (start + end) / 2;
        }
    }

    return -1;
};

int main()
{
    // (Binary Search use it when we have sorted array) in linear search we will go by every index value in binary search we will go middle element then we will go left or right
    // say we go right then we go in there middle that's how we get closer to our answer
    // middle element =  first index + last index / 2
    // array of size n

    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter a Sorted Array in ascending order only" << endl;
    for(int i = 0;i<n;i++){
        cout << "Enter the index value " << i << " of array : " << endl;
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key value you want to find in array : " << endl;
    cin >> key;

    cout << "Index value is : " << BinarySearch(arr,n,key) << endl;

    // space complexity:- AS:-O(1) extra variables start,end,middle TSC:-O(n) n cause array take n space
    // time complexity:- O(log2n),Omega(1), theta(log2n)
    // fint at n -> n/2 -> n/4 -> till n/(2^k) = 1 there will be k+1 steps
    return 0;
}