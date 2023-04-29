#include <iostream>
#include <string>
#include <vector>

using namespace std;

void compute_bad_character_table(string pattern, vector<int>& table) {
    int m = pattern.length();
    for (int i = 0; i < m; i++) {
        table[pattern[i]] = i;
    }
}

void boyer_moore(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();
    vector<int> bad_char_table(256, -1);
    compute_bad_character_table(pattern, bad_char_table);
    int s = 0;
    while (s <= n - m) {
        int j = m - 1;
        while (j >= 0 && pattern[j] == text[s + j]) {
            j--;
        }
        if (j < 0) {
            cout << "Pattern found at index " << s << endl;
            if (s + m < n) {
                s += m - bad_char_table[text[s + m]];
            } else {
                s += 1;
            }
        } else {
            s += max(1, j - bad_char_table[text[s + j]]);
        }
    }
}

int main() {
    string text = "ABABDABACDABABCABAB";
    string pattern = "ABABCABAB";
    boyer_moore(text, pattern);
    return 0;
}
