#include <iostream>
#include <vector>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int fibSearch(vector<int>& arr, int x)
{
    int n = arr.size();
    int fibM2 = 0;
    int fibM1 = 1;
    int fibM = fibM2 + fibM1;

    while (fibM < n) {
        fibM2 = fibM1;
        fibM1 = fibM;
        fibM = fibM2 + fibM1;
    }

    int offset = -1;

    while (fibM > 1) {
        int i = min(offset+fibM2, n-1);

        if (arr[i] < x) {
            fibM = fibM1;
            fibM1 = fibM2;
            fibM2 = fibM - fibM1;
            offset = i;
        } else if (arr[i] > x) {
            fibM = fibM2;
            fibM1 = fibM1 - fibM2;
            fibM2 = fibM - fibM1;
        } else {
            return i;
        }
    }

    if (fibM1 && arr[offset+1] == x)
        return offset+1;

    return -1;
}

int main()
{
    vector<int> arr = {10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100};
    int n = arr.size();
    int x = 85;
    int index = fibSearch(arr, x);
    if (index >= 0) {
        cout << "Found " << x << " at index " << index << endl;
    } else {
        cout << x << " not found in the array" << endl;
    }
    return 0;
}