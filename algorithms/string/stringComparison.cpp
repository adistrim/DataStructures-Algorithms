#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, world!";
    int result = strcmp(str1, str2);
    if (result == 0) {
        cout << "The two strings are equal." << endl;
    } else {
        cout << "The two strings are not equal." << endl;
    }
    return 0;
}
