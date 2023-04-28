/*
In the code below, we define a radixSort function that takes an input array and sorts it using Radix Sort. The function first finds the maximum element in the array to determine the number of digits in the maximum element. It then performs counting sort for each digit, starting from the least significant digit and ending with the most significant digit. The output from each iteration is used as the input for the next iteration. The resulting array is sorted in ascending order.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void radixSort(vector<int>& arr) {
   // Find the maximum number to know the number of digits
   int maxNum = *max_element(arr.begin(), arr.end());

   // Do counting sort for every digit
   for (int exp = 1; maxNum/exp > 0; exp *= 10) {
      vector<int> count(10, 0);

      // Count the frequency of each digit
      for (int i = 0; i < arr.size(); i++)
         count[(arr[i]/exp)%10]++;

      // Change count[i] so that count[i] now contains
      // the actual position of this digit in the output
      for (int i = 1; i < 10; i++)
         count[i] += count[i - 1];

      // Build the output array
      vector<int> output(arr.size());
      for (int i = arr.size() - 1; i >= 0; i--) {
         output[count[(arr[i]/exp)%10] - 1] = arr[i];
         count[(arr[i]/exp)%10]--;
      }

      // Copy the output array to arr, so that arr now
      // contains sorted numbers according to current digit
      for (int i = 0; i < arr.size(); i++)
         arr[i] = output[i];
   }
}

int main() {
   vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
   radixSort(arr);
   cout << "Sorted array: ";
   for (int i = 0; i < arr.size(); i++)
      cout << arr[i] << " ";
   cout << endl;
   return 0;
}
