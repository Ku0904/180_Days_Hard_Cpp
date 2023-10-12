// Introduction To Array
// a0,a1,a2,...,an is the best way for naming multiple variables
// we use array for that it stores same type of datatype and it stores contiguous location [ek ka baad ek store hota ha]
// to access the right variable we need it's unique address allocated to it
// we have byte addressable memory so every byte will have some memory we do this cause like you won't tell Amazon delivery guy to deliver in our kitchen we will give it our house address so address is always of multiple bytes
// so int arr[10]; arr is address so if index 0 is 500 so index 1 will be 504 and index 2 will be 508 why the gap of 4 cause int needs 4 byte means 32 bits
// address of index = arr + index * size of datatype

// processor are of 32 bits and 64 bits in 32 bits processor Max ram will be 8GB but in 64 bit processor Max ram will be 16 Exabytes which is 4 billion times more memory than 32 bit processor
// 4GB ram = 2^32 bytes ram meaning it will give 32bit size of instruction for what data to bring from address(do search it again as well)
// 64 bit processor go brrr cause  first program is stored in hard drive then in ram then runs in cpu

// only size of 1st index in array and size of datatype is need to be saved but of variable we need to store there address individually

#include<iostream>
using namespace std;

// 5 ways to input value in array
// 1st directly int arr[5] = {1,2,3,4,5}; 0 is the firsts index value and 4 is the last index value
// 2nd int arr[] = {1,2,3,4,5}; it will automatically decide size of array
// 3rd int arr[10]; for(int i = 0;i<10;i++) cin >> arr[i]; in the same way we can cout << arr[i] << endl;
// 4th int arr[5]; {8,9} first two index will be filled then last 3 will remain empty
// 5th int arr[10] = {0}; every index value will have 0 and this way only works for 0 only

int main()
{
    int arr[5]; // datatype nameofarray[size of array]
    cout << sizeof(arr) << endl;
    cout << sizeof(arr)/sizeof(arr[0]) << endl;

    // find min element from an array
    int arr1[5];
    for(int i = 0;i<5;i++) {
        cout << "Enter the index value " << i << " : " << endl;
        cin >> arr1[i];
    }
    int ans1 = INT_MAX;
    for(int i = 0;i<5;i++) {
        if (arr1[i] < ans1){
            ans1 = arr1[i];
        }
    }
    cout << "Min value in Array is : " << ans1 << endl;

    int ans2 = INT_MIN;
    for(int i = 0;i<5;i++) {
        if (arr1[i] > ans2){
            ans2 = arr1[i];
        }
    }
    cout << "Max value in Array is : " << ans2 << endl;
    return 0;
}