#include <iostream>
#include <string>
#include <vector>

using namespace std;

void compute_partial_match_table(string pattern, vector<int>& table) {
    int m = pattern.length();
    int i = 1, j = 0;
    table[0] = 0;
    while (i < m) {
        if (pattern[i] == pattern[j]) {
            j++;
            table[i] = j;
            i++;
        } else {
            if (j != 0) {
                j = table[j - 1];
            } else {
                table[i] = 0;
                i++;
            }
        }
    }
}

void kmp(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();
    vector<int> table(m);
    compute_partial_match_table(pattern, table);
    int i = 0, j = 0;
    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }
        if (j == m) {
            cout << "Pattern found at index " << i - j << endl;
            j = table[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = table[j - 1];
            } else {
                i++;
            }
        }
    }
}

int main() {
    string text = "ABABDABACDABABCABAB";
    string pattern = "ABABCABAB";
    kmp(text, pattern);
    return 0;
}
