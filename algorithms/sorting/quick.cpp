/*
In the code below, we define a quickSort function that takes an array of integers and its range as input, and sorts the array using the Quick Sort algorithm. The partition function is a helper function that partitions the array around a pivot element. The main function creates an array, calls the quickSort function to sort it, and then prints the sorted array.
*/

#include <iostream>
using namespace std;

void swap(int* a, int* b) {
   int t = *a;
   *a = *b;
   *b = t;
}

int partition(int arr[], int low, int high) {
   int pivot = arr[high]; // Choose the last element as the pivot
   int i = (low - 1); // Index of smaller element

   for (int j = low; j <= high - 1; j++) {
      // If current element is smaller than or equal to pivot
      if (arr[j] <= pivot) {
         i++; // Increment index of smaller element
         swap(&arr[i], &arr[j]);
      }
   }

   swap(&arr[i + 1], &arr[high]);
   return (i + 1);
}

void quickSort(int arr[], int low, int high) {
   if (low < high) {
      int pi = partition(arr, low, high); // Partition the array

      // Sort the sub-arrays on either side of the pivot
      quickSort(arr, low, pi - 1);
      quickSort(arr, pi + 1, high);
   }
}

int main() {
   int arr[] = {5, 2, 9, 1, 5, 6};
   int n = sizeof(arr)/sizeof(arr[0]);

   quickSort(arr, 0, n - 1);

   cout << "Sorted array: ";
   for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << endl;

   return 0;
}
