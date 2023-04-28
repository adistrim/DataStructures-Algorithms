/*
In the code below, we define a mergeSort function that takes an array of integers and its range as input, and sorts the array using the Merge Sort algorithm. The merge function is a helper function that merges two sorted sub-arrays of arr. The main function creates an array, calls the mergeSort function to sort it, and then prints the sorted array.
*/

#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
   int i, j, k;
   int n1 = m - l + 1;
   int n2 = r - m;

   // Create temporary arrays
   int L[n1], R[n2];

   // Copy data to temporary arrays
   for (i = 0; i < n1; i++)
      L[i] = arr[l + i];
   for (j = 0; j < n2; j++)
      R[j] = arr[m + 1 + j];

   // Merge the temporary arrays back into arr[l..r]
   i = 0; // Initial index of first subarray
   j = 0; // Initial index of second subarray
   k = l; // Initial index of merged subarray
   while (i < n1 && j < n2) {
      if (L[i] <= R[j]) {
         arr[k] = L[i];
         i++;
      }
      else {
         arr[k] = R[j];
         j++;
      }
      k++;
   }

   // Copy remaining elements of L[] if any
   while (i < n1) {
      arr[k] = L[i];
      i++;
      k++;
   }

   // Copy remaining elements of R[] if any
   while (j < n2) {
      arr[k] = R[j];
      j++;
      k++;
   }
}

void mergeSort(int arr[], int l, int r) {
   if (l < r) {
      int m = l + (r - l) / 2;

      // Sort first and second halves
      mergeSort(arr, l, m);
      mergeSort(arr, m + 1, r);

      // Merge the sorted halves
      merge(arr, l, m, r);
   }
}

int main() {
   int arr[] = {5, 2, 9, 1, 5, 6};
   int n = sizeof(arr)/sizeof(arr[0]);

   mergeSort(arr, 0, n - 1);

   cout << "Sorted array: ";
   for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << endl;

   return 0;
}
