//Number Crown Pattern
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i;
    int j;
    int n;
    cin >> n;
    
    int space = 2 * (n - 1);

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            cout << j;
        }
        for (j = 0; j < space; j++) {
            cout << " ";
        }
        for (j = i; j >= 0; j--) {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }

    return 0;
}

