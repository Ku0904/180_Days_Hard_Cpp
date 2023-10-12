//1: Take 20 elements from user input and find its sum with the help of an array.
//
//2: Calculate the average of elements in an array of size 18.
//
//3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.
//
//4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
//
//5: Find the second largest element in an array of unique elements of size n. Where n>3.
//
//6: Find the third smallest element in an array of unique elements size n. Where n>3.
//
//7: What is Byte addressable?

#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int findThirdSmallest(int arr[], int n)
{
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    int thirdSmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            thirdSmallest = secondSmallest;
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            thirdSmallest = secondSmallest;
            secondSmallest = arr[i];
        }
        else if (arr[i] < thirdSmallest && arr[i] != smallest && arr[i] != secondSmallest)
        {
            thirdSmallest = arr[i];
        }
    }
    return thirdSmallest;
}

int main () {
    /*----------------------------1st----------------------------*/
    int arr1[20];
    int ans1 = 0;
    for(int i = 0;i<20;i++) {
        cout << "Enter the index value " << i << " : " << endl;
        cin >> arr1[i];
        ans1 += arr1[i];
    }
    cout << "Sum of All Numbers is : " << ans1 << endl;
    /*----------------------------2nd----------------------------*/
    int arr2[18];
    int ans2 = 0;
    for(int i = 0;i<18;i++) {
        cout << "Enter the index value " << i << " : " << endl;
        cin >> arr2[i];
        ans2 += arr2[i];
    }
    int average = ans2/18;
    cout << "Sum of All Numbers is : " << average << endl;
    /*----------------------------3rd----------------------------*/
    int n1;
    cout << "Enter the Lenght of Array : " <<endl;
    cin >> n1;
    int arr3[n1];
    for(int i = 0;i<n1;i++) {
        cout << "Enter the index value " << i << " : " << endl;
        cin >> arr3[i];
    }
    int ans3; // target
    cout << "Enter the index value you want to find in Array : " <<endl;
    cin >> ans3;
    int index = -1;
    for(int i = 0;i<n1;i++) {
        if(arr3[i] == ans3){
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        cout << "The index value you want to find in Array is : " << index << endl;
    }
    else
    {
        cout << index << endl;
    }
    /*----------------------------4th----------------------------*/
    char arr4[26];
    for(char i = 'a'; i < 'a'+26 ;i++) {
        cout << i << endl;
    }
    /*----------------------------5th----------------------------*/
    int n;
    cout << "Enter the Length of Array: " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the element at index " << i << ": " << endl;
        cin >> arr[i];
    }

    int secondLargest = findSecondLargest(arr, n);
    cout << "The second largest element is: " << secondLargest << endl;

    /*----------------------------6th----------------------------*/
    int n2;
    cout << "Enter the Length of Array: " << endl;
    cin >> n2;

    int arr6[n2];
    for (int i = 0; i < n2; i++) {
        cout << "Enter the element at index " << i << ": " << endl;
        cin >> arr6[i];
    }

    int ThirdSmallest  = findThirdSmallest(arr6, n2);
    cout << "The Third Smallest element is: " << ThirdSmallest << endl;
    /*----------------------------7th----------------------------*/
    https://www.tutorialspoint.com/difference-between-byte-addressable-memory-and-word-addressable-memory#:~:text=Byte%20addressable%20memory%20is%20one,it%20uses%20bytewise%20storage%20configuration
}

