#include <iostream>

using namespace std;

int a, b;

void func(int *a, int *b) {
    if ( *a > *b) {
        *a *= 2;
        *b += 10;
    } else {
        *a += 10;
        *b *= 2;
    }
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    func(&a, &b);
    cout << a << " " << b;
    

    return 0;
}