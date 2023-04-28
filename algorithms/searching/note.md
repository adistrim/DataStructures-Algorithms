# Searching Algorithms

## Linear search

Linear search, also known as sequential search, is a simple search algorithm that checks each element of an array or list in order until it finds the target value or reaches the end of the data structure. It works well for small data sets, but its time complexity is O(n), which can make it slow for larger data sets.

## Binary search

Binary search is a searching algorithm that works on sorted arrays. It starts by comparing the target value to the middle element of the array. If the target value matches the middle element, the search is complete. If the target value is less than the middle element, the search continues on the lower half of the array. If the target value is greater than the middle element, the search continues on the upper half of the array. The process is repeated until the target value is found or the remaining array is empty.

## Jump search

Jump search is a searching algorithm that is used to search an element in a sorted array. It works by jumping a fixed number of steps ahead in the array and then checking if the desired element is present in that block. If it is, it returns the index of the element, otherwise, it moves on to the next block and repeats the process until the element is found or the end of the array is reached.

## Interpolation search

Interpolation search is a searching algorithm that is used to search for a specific element in a sorted array. It works by estimating the position of the element based on the value of the element being searched for, and the minimum and maximum values in the array. It then makes a guess about the position of the element, and if it's not at that position, it narrows down the search range by re-estimating the position of the element.

## Exponential search

Exponential search is a searching algorithm that works on sorted arrays. It is similar to binary search but uses a different approach to find the search value.

The algorithm starts by comparing the search value with the first element of the array. If the search value is found at the first element, the algorithm returns the index of the first element. If the search value is not found, the algorithm doubles the index to check the next element. This process is repeated until an element greater than or equal to the search value is found. Once this is found, a binary search is performed on the subarray between the previous index and the current index to find the exact location of the search value.

## Fibonacci search

Fibonacci search is a searching algorithm that is similar to binary search but uses a different approach to select the middle element to search for. In Fibonacci search, the array is divided into subarrays with lengths that are Fibonacci numbers. The middle element is selected using Fibonacci numbers instead of using the simple average of the low and high indices like in binary search.

## Ternary search

Ternary search is a searching algorithm that is used to find the position of a target value within a sorted array. It is called a "ternary" search because the array is divided into three parts at each step of the algorithm.

The basic idea of the algorithm is to divide the search space into three parts, and then determine which part the target value is in. If the target value is not in the middle third of the search space, the algorithm can then eliminate one of the other two thirds and continue the search.
