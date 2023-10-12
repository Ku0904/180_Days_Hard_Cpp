// arranging anything in order is sorting example dictionary with sorting it's easy to find thing's
// example we have array with some data and you are told to sort we need to put data in ascending or descending order there are multiple technique to do it


#include<iostream>
using namespace std;

int main()
{
    // selection sort technique
    // in 1st round/pass at index i = 0 put min value in array there with swap
    // in 2nd round/pass at index i = 1 put min value in array there with swap
    // in 3rd round/pass at index i = 2 put min value in array there with swap
    // in 4th round/pass at index i = 3 put min value in array there with swap
    // in (n-1)th round/pass at index i = n-2 put min value in array there with swap

    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cout << "Enter the index value " << i << " of array : " << endl;
        cin >> arr[i];
    }

    for(int i = 0;i < n-1 ;i++){
        int index = i;
        for(int j = i+1 ; j < n ; j++){
            // 1st index of smallest element exchange it with smallest index i.e. 0 then do the same thing but increase index by 1 ...
            if(arr[j] < arr[index])
                index = j;
        }
        swap(arr[index],arr[i]);
    }

    cout << "Sorted Array will be : ";
    for(int i = 0; i < n ;i++){
        cout << arr[i] << " " ;
    }
    // space complexity:- AS:-O(1) TSC:-O(n) n cause array take n space
    // time complexity:- O(n^2),Omega(n^2),theta(n^2)
    return 0;
}