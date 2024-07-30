#include <iostream>
using namespace std;

int main()
{
    cout << "task171" << endl;
    int n = 3;

    for (int i = 0; i <= n; i++) {
        for (int j = n; j >= n - i + 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = n; i >= 0; i--) {
        for (int j = n; j >= n - i ; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "task208" << endl;
    int m = 5;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            if (j == i) {
                cout << i << " ";
            }
            else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    
}


