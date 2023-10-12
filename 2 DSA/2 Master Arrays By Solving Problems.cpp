#include<iostream>
#include<climits>
using namespace std;

int SearchElementInArray(int arr[],int n,int x){
    int index = -1;
    for (int i = 0; i < n; i++) {
        if(arr[i] == x){
            index = i;
            break;
        }
    }
    return index;
}

void ReverseArray(int arr[],int n){
//    approach 1 two pointer approach
//    int start = 0 , end = n-1;
//    while (start < end)
//    {
//        swap(arr[start],arr[end]);
//        start++;
//        end--;
//    };
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;

//    approach 2 new array
    int ReverseArr[n];
    for (int j = 0; j < n ; j++) {
        ReverseArr[j]=arr[n-j-1];
        cout << ReverseArr[j] << " ";
    }
    cout << endl;
}

void CyclicallyRotatedArray(int arr[],int n){
    int temp = arr[n-1];
    for (int i = n-1; i >= 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SecondMax(int arr[],int n){
    int MaxValue = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > MaxValue)
            MaxValue = arr[i];
    }
    int SecondMaxValue = -1; // giving it -1 if second largest element doesn't exist it will give -1
    for (int i = 0; i < n; i++) {
        if (arr[i] > SecondMaxValue &&  arr[i] != MaxValue)
            SecondMaxValue = arr[i];
    }
    cout << SecondMaxValue;
    cout << endl;
}
void MissingNumber(int arr[],int n){
    int expectedSum = ((n+1)*(n+2))/2;
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    int missingNumber = expectedSum - actualSum;
    cout << missingNumber << endl;
}

void FibonacciSeries(int n){
    int arr[n];
    int first = 0;
    int second = 1;
    int upcoming;
    for (int i = 0; i < n; i++) {
        if(i==0)
            arr[0]=first;
        else if(i==1)
            arr[1]=second;
        else{
            upcoming = first + second;
            arr[i] = upcoming;
            first = second;
            second = upcoming;
        }
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Search Element In An Array (Linear Search)
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the element of index value : " << i << endl;
        cin >> arr[i];
    }
    int ElementToFind;
    cout << "Enter the element you want to find in array : " << endl;
    cin >> ElementToFind;
//    int index = -1;
//    for (int i = 0; i < n; i++) {
//        if(arr[i] == ElementToFind){
//            index = i;
//            break; // it will work without break as well we use this to stop the loop immediately
//        }
//    }
//    cout << "Index of the element you want to find is : " << index << endl;
    cout << "Index of the element you want to find is : " << SearchElementInArray(arr,n,ElementToFind) << endl;

    // Reverse array
    cout << "Reverse Array is : " <<  endl;
    ReverseArray(arr,n);

    // Cyclically rotate an array by one(Cyclic Rotate)
    cout << "Cyclically rotated array by 1 will be : " << endl;
    CyclicallyRotatedArray(arr,n);

    // Second Max
    cout << "Second Max element will be : " << endl;
    SecondMax(arr,n);

    // Missing Number
    cout << "Missing Number Will be : " << endl;
    MissingNumber(arr,n);

    // Fibonacci Series
    cout << "Fibonacci Series till the given number will be : " << endl;
    FibonacciSeries(n);
    return 0;
}