#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int jumpSearch(vector<int> arr, int n, int x) {
    int jump = sqrt(n);
    int left = 0;
    int right = jump;
    while (right < n && arr[right] < x) {
        left = right;
        right += jump;
        if (right > n - 1) {
            right = n;
        }
    }
    for (int i = left; i < right; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 5, 9, 12, 15, 23, 45, 67};
    int n = arr.size();
    int x = 23;
    int result = jumpSearch(arr, n, x);
    if (result == -1) {
        cout << "Element not found in array" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }
    return 0;
}
