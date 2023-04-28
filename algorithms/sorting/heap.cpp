/*
In the code above, we define a heapify function that takes an array, its size, and an index as input, and makes sure that the subtree rooted at that index forms a valid max heap. The heapSort function is the main function that sorts the array using Heap Sort. It first builds a max heap from the input array, and then repeatedly extracts the maximum element from the heap and places it at the end of the array. The resulting array is sorted in ascending order.
*/

#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
   int largest = i; // Initialize largest as root
   int left = 2 * i + 1; // Left child
   int right = 2 * i + 2; // Right child

   // If left child is larger than root
   if (left < n && arr[left] > arr[largest])
      largest = left;

   // If right child is larger than largest so far
   if (right < n && arr[right] > arr[largest])
      largest = right;

   // If largest is not root
   if (largest != i) {
      swap(arr[i], arr[largest]);

      // Recursively heapify the affected sub-tree
      heapify(arr, n, largest);
   }
}

void heapSort(int arr[], int n) {
   // Build heap (rearrange array)
   for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);

   // Extract elements from heap one by one
   for (int i = n - 1; i >= 0; i--) {
      // Move current root to end
      swap(arr[0], arr[i]);

      // Call max heapify on the reduced heap
      heapify(arr, i, 0);
   }
}

int main() {
   int arr[] = {5, 2, 9, 1, 5, 6};
   int n = sizeof(arr)/sizeof(arr[0]);

   heapSort(arr, n);

   cout << "Sorted array: ";
   for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << endl;

   return 0;
}
