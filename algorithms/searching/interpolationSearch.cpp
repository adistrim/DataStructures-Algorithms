#include <iostream>
#include <vector>
using namespace std;

int interpolationSearch(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high && x >= arr[low] && x <= arr[high]) {
        int pos = low + ((x - arr[low]) * (high - low)) / (arr[high] - arr[low]);
        if (arr[pos] == x) {
            return pos;
        }
        if (arr[pos] < x) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 5, 9, 12, 15, 23, 45, 67};
    int n = arr.size();
    int x = 23;
    int result = interpolationSearch(arr, n, x);
    if (result == -1) {
        cout << "Element not found in array" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }
    return 0;
}
