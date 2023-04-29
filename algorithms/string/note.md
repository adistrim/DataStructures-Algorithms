# String Algorithm

## 1. String Length: 

This algorithm simply returns the length of a given string. It has a time complexity of O(1).

## 2. String Comparison: 

This algorithm compares two given strings character by character to check if they are equal. It has a time complexity of O(n), where n is the length of the longer string.

## 3. Pattern Matching (Brute Force): 

This algorithm matches a given pattern with a text string using brute force. It has a time complexity of O(mn), where m is the length of the pattern and n is the length of the text string.

The pattern matching algorithm is used to find the occurrences of a pattern in a given text string. In other words, it checks if a pattern exists in a text string and returns the starting indices of all occurrences of the pattern. This algorithm is commonly used in string processing applications, such as text search and data compression.

## 4. Naive Pattern Searching: 

The Naive Pattern Searching algorithm is a simple pattern matching algorithm that searches for occurrences of a pattern in a text string by comparing each character of the pattern with each character of the text string. If all characters of the pattern match with the corresponding characters in the text string, we have found an occurrence of the pattern. This algorithm is called "naive" because it uses a straightforward approach and has a time complexity of O(mn), where m is the length of the pattern and n is the length of the text string.

## 6. Knuth-Morris-Pratt Algorithm:

The Knuth-Morris-Pratt (KMP) algorithm is a pattern searching algorithm that finds all occurrences of a pattern in a given text in linear time, i.e., O(n+m), where n is the length of the text and m is the length of the pattern. The algorithm works by precomputing a partial match table (also known as failure function) that helps to avoid unnecessary comparisons when searching for matches.

## 7. Boyer-Moore Algorithm: 

The Boyer-Moore algorithm is a pattern searching algorithm that finds all occurrences of a pattern in a given text in sublinear time, i.e., O(n/m) in the best case and O(nm) in the worst case, where n is the length of the text and m is the length of the pattern. The algorithm works by comparing the pattern to the text from right to left and skipping a maximum number of characters based on a precomputed table of the last occurrence of each character in the pattern.
