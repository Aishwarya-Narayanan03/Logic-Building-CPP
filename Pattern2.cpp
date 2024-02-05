//Right angled triangle
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    int j;
    int n;

    cin >> n;

    for(i = 0; i < n; i++){
        // Use j <= i in the inner loop to create a right-angled triangle
        for(j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

