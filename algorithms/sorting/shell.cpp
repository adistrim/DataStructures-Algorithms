/*
In the code below, we define a shellSort function that takes an array of integers and its length as input, and sorts the array using the Shell Sort algorithm. The main function creates an array, calls the shellSort function to sort it, and then prints the sorted array.
*/

#include <iostream>
using namespace std;

void shellSort(int arr[], int n) {
   // Define gap sequence
   int gap, i, j, temp;
   for (gap = n/2; gap > 0; gap /= 2) {
      // Perform Insertion Sort on subarrays of size gap
      for (i = gap; i < n; i++) {
         temp = arr[i];
         for (j = i; j >= gap && arr[j-gap] > temp; j -= gap)
            arr[j] = arr[j-gap];
         arr[j] = temp;
      }
   }
}

int main() {
   int arr[] = {5, 2, 9, 1, 5, 6};
   int n = sizeof(arr)/sizeof(arr[0]);

   shellSort(arr, n);

   cout << "Sorted array: ";
   for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << endl;

   return 0;
}
