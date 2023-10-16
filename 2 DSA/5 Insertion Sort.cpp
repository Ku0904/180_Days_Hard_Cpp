#include<iostream>

using namespace std;

int main() {
  // an array of n elements 
  // insertion sort technique
  // in 1st round/pass index i = 0 start comparision from i+1 and compare it with i element and put min element at its place
  // in 2nd round/pass index i = 1 start comparision from i+2 and compare it with i+1,i element and put min element at its place
  // in 3rd round/pass index i = 2 start comparision from i+3 and compare it with i+2,i+1,i element and put min element at its place
  // in 4th round/pass index i = 3 start comparision from i+4 and compare it with i+3,i+2,i+1,i element and put min element at its place
  // in (n-1)th round/pass index i = n-2 start comparision from i+n-1 and compare it with i+n-2,i+n-3,...,i element and put min element at its place

  int n;
  cout << "Enter the size of array : " << endl;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter the index value " << i << " of array : " << endl;
    cin >> arr[i];
  }

  for (int i = 1; i < n; i++) {
    for (int j = i; j > 0; j--) {
      if (arr[j] < arr[j - 1])
        swap(arr[j], arr[j - 1]);
      //            if swap function is not available           
      //            int temp arr[j];
      //            arr[j-1]=arr[j];
      //            arr[j-1]=temp;
      else
        break;
    }
  }

  cout << "Sorted Array will be : ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  // space complexity:- AS:-O(1) cause only auxiliary elements are i,j TSC:-O(n) n cause array take n space
  // time complexity:- O(n^2) worst case loop will never break,Omega(n) for best case even if second loop breaks 1st loop will run,theta(n^2)
  return 0;
}