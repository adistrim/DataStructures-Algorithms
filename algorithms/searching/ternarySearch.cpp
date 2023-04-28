#include <iostream>
#include <vector>

using namespace std;

int ternary_search(vector<int> arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
        
        if (arr[mid1] == target) {
            return mid1;
        } else if (arr[mid2] == target) {
            return mid2;
        } else if (target < arr[mid1]) {
            right = mid1 - 1;
        } else if (target > arr[mid2]) {
            left = mid2 + 1;
        } else {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }
    
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 7, 9, 10, 12, 14, 16, 19, 20};
    int target = 16;
    
    int index = ternary_search(arr, target);
    
    if (index != -1) {
        cout << "Found at index: " << index << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    return 0;
}
