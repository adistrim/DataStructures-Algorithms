/*
In the code below, we define a selectionSort function that takes an array of integers and its length as input, and sorts the array using the Selection Sort algorithm. The main function creates an array, calls the selectionSort function to sort it, and then prints the sorted array.
*/

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
   int i, j, min_idx;

   // One by one move boundary of unsorted subarray
   for (i = 0; i < n-1; i++) {
      // Find the minimum element in unsorted array
      min_idx = i;
      for (j = i+1; j < n; j++)
         if (arr[j] < arr[min_idx])
            min_idx = j;

      // Swap the found minimum element with the first element
      swap(arr[min_idx], arr[i]);
   }
}

int main() {
   int arr[] = {5, 2, 9, 1, 5, 6};
   int n = sizeof(arr)/sizeof(arr[0]);

   selectionSort(arr, n);

   cout << "Sorted array: ";
   for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << endl;

   return 0;
}
