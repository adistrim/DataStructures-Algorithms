#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // return the index of the target value
        }
    }
    return -1; // target value not found
}

int main() {
    vector<int> arr = {1, 5, 9, 12, 15, 23, 45, 67};
    int target = 15;
    int index = linearSearch(arr, target);
    if (index != -1) {
        cout << "Target value found at index " << index << endl;
    } else {
        cout << "Target value not found" << endl;
    }
    return 0;
}
