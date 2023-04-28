#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int start, int end, int x) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int exponentialSearch(vector<int>& arr, int x) {
    int n = arr.size();
    if (arr[0] == x)
        return 0;
    int i = 1;
    while (i < n && arr[i] <= x) {
        i *= 2;
    }
    return binarySearch(arr, i / 2, min(i, n - 1), x);
}

int main() {
    vector<int> arr = {2, 4, 8, 12, 16, 20, 24, 28, 32, 36, 40};
    int x = 28;
    int index = exponentialSearch(arr, x);
    if (index == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at index " << index << "\n";
    return 0;
}
