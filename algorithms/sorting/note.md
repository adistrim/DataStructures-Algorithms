# Sorting Algorithms

## Bubble Sort: O(n^2)

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list of elements to be sorted, compares adjacent elements and swaps them if they are in the wrong order. The algorithm gets its name from the way smaller elements "bubble" to the top of the list as the algorithm iterates through the list.

Here's how the algorithm works:

 - Starting with the first element (index 0), compare it with the next element (index 1).
 - If the first element is greater than the second element, swap them.
 - Move to the next pair of elements (index 1 and index 2) and repeat step 2.
 - Continue in this manner until the last two elements are compared.
 - Repeat the steps above for each element in the list until no more swaps are needed.

After each pass through the list, the largest unsorted element "bubbles up" to the end of the list, hence the name Bubble Sort. Bubble Sort has a time complexity of O(n^2) which makes it less efficient than many other sorting algorithms, especially for large arrays. However, it is very simple to understand and implement, and can be useful for small datasets or educational purposes.

## Selection Sort: O(n^2)

Selection Sort is a simple sorting algorithm that works by selecting the smallest (or largest) element from the unsorted portion of the list and swapping it with the element at the beginning of the unsorted portion of the list. This process is repeated until the entire list is sorted.

Here's how the algorithm works:

 - Find the smallest element in the unsorted portion of the list.
 - Swap the smallest element with the first element in the unsorted portion of the list.
 - Move the boundary of the sorted portion one element to the right.
 - Repeat steps 1-3 until the entire list is sorted.

Selection Sort has a time complexity of O(n^2), which makes it less efficient than many other sorting algorithms, especially for large arrays. However, it is simple to understand and implement, and has the advantage of being an "in-place" sorting algorithm, meaning that it does not require additional memory to perform the sorting.

## Insertion Sort: O(n^2)

Insertion Sort is a simple sorting algorithm that works by dividing the input list into two parts: the sorted part at the beginning and the unsorted part at the end. It then iterates over each element in the unsorted part and inserts it into its correct position in the sorted part of the list.

Here's how the algorithm works:

 - Assume that the first element of the list is already sorted. Iterate through the remaining elements in the unsorted part of the list.
 - For each element in the unsorted part, compare it with the elements in the sorted part of the list, starting from the end.
 - If the element is smaller than the current element in the sorted part, move the current element one position to the right and continue the comparison.
 - If the element is larger than or equal to the current element in the sorted part, insert the element in the current position and move to the next element in the unsorted part.

## Shell Sort: O(n log n)

Shell Sort is a variation of the Insertion Sort algorithm that addresses its main inefficiency - the fact that it only moves elements one position at a time. Shell Sort works by first sorting elements that are far apart from each other, and successively reducing the gap between the elements to be sorted, until the gap becomes 1, at which point the algorithm becomes equivalent to an Insertion Sort.

Here's how the algorithm works:

 - Define a gap sequence g that determines the spacing between the elements being compared. Common gap sequences include the Knuth sequence (1, 4, 13, 40, ...) and the Sedgewick sequence (1, 5, 19, 41, ...).
 - Starting with the largest gap in the sequence, iterate over the elements in the list, comparing elements that are g positions apart and swapping them if they are out of order.
 - Repeat step 2 for each gap in the sequence, successively reducing the gap size until it becomes 1, at which point the algorithm becomes equivalent to an Insertion Sort.

Shell Sort has a time complexity of O(n^2), but in practice it is faster than Insertion Sort and other O(n^2) algorithms for many inputs. The choice of gap sequence can affect the performance of the algorithm, with some sequences performing better than others for certain inputs.

## Merge Sort: O(n log n)

Merge Sort is a popular divide-and-conquer sorting algorithm that works by dividing the input list into smaller sub-lists, sorting those sub-lists, and then merging them back together into a single sorted list. The algorithm recursively applies these operations until the entire list is sorted.

Here's how the algorithm works:

 - Divide the input list into two halves.
 - Sort each half recursively by applying Merge Sort on them.
 - Merge the two sorted halves into a single sorted list by comparing elements from each half and inserting them in the correct order.
 - Repeat steps 1-3 until the entire list is sorted.

Merge Sort has a time complexity of O(n log n), making it efficient for sorting large lists. It is also a stable sort, which means that it preserves the relative order of equal elements in the input list.

## Quick Sort: O(n log n)

Quick Sort is a popular sorting algorithm that works by partitioning an array around a pivot element and recursively sorting the sub-arrays on either side of the pivot. The algorithm is often used because of its simplicity and efficiency, with a time complexity of O(n log n) on average and O(n^2) in the worst case.

Here's how the algorithm works:

 - Choose a pivot element from the array. This element will be used to partition the array into two sub-arrays.
 - Reorder the array so that all elements less than the pivot come before the pivot, and all elements greater than the pivot come after the pivot.
 - Recursively apply the same process to the sub-arrays on either side of the pivot until the entire array is sorted.

The choice of pivot element can significantly impact the algorithm's performance. In practice, various strategies are used to choose the pivot element, such as selecting the median of the first, middle, and last elements of the sub-array.

## Heap Sort: O(n log n)

Heap Sort is a popular sorting algorithm that uses the concept of a binary heap to sort an array of elements. A binary heap is a complete binary tree where each node has a key greater than or equal to the keys of its children. In a max heap, the root node has the highest key, and in a min heap, the root node has the lowest key.

Here's how the Heap Sort algorithm works:

 - Build a max heap from the input array. This involves rearranging the elements of the array so that they form a binary heap, with the maximum element at the root of the heap.
 - Swap the root element with the last element of the heap, and then "remove" the last element from the heap by reducing the heap size.
  Restore the heap property by calling max_heapify on the root node. This will move the new root element to its correct position in the heap.
 - Repeat steps 2 and 3 until the heap size is reduced to 1. At this point, the array is sorted.

The time complexity of Heap Sort is O(n log n) in both the worst case and average case.

## Radix Sort: O(nk)


Radix Sort is a non-comparative sorting algorithm that sorts data by grouping it based on individual digits or decimal places. It sorts data by comparing the digits at different positions in the data, from right to left or from left to right, depending on the implementation.

The algorithm works by first considering the least significant digit of each element in the input array. It then groups these elements based on their respective digit values, creating separate bins for each digit value. The elements are then rearranged so that they are placed in the bins according to their digit value. This process is repeated for the second least significant digit, then the third, and so on until all digits have been considered.

The time complexity of Radix Sort is O(d * (n + k)), where d is the number of digits in the maximum element, n is the number of elements in the input array, and k is the range of values that each digit can take.
