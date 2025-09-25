#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int find_substring_index(string text, string pattern) {
    int ck = -1;
    for (int i = 0; i <= text.length() - pattern.length(); i++) {
        //cout << text.substr(i, pattern.length()) << endl;
        if (text.substr(i, pattern.length()) == pattern) {
            ck = i;
            break;
        }
    }
    return ck;
}

int main() {
    cin >> text;
    cin >> pattern;

    // Please write your code here.
    cout << find_substring_index(text, pattern);

    return 0;
}