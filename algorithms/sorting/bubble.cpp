/*
In the code below, we define a bubbleSort function that takes an array of integers and its length as input, and sorts the array using the Bubble Sort algorithm. The main function creates an array, calls the bubbleSort function to sort it, and then prints the sorted array.
*/

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++) {
      swapped = false;
      for (j = 0; j < n-i-1; j++) {
         if (arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
            swapped = true;
         }
      }
      // If no two elements were swapped in the inner loop, then break
      if (swapped == false)
         break;
   }
}

int main() {
   int arr[] = {5, 2, 9, 1, 5, 6};
   int n = sizeof(arr)/sizeof(arr[0]);

   bubbleSort(arr, n);

   cout << "Sorted array: ";
   for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << endl;

   return 0;
}
