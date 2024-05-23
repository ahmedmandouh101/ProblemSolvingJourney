#include <iostream>
using namespace std;

int main() {
    int n; // number of tests
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        while (a > 0 || b > 0) {
            // Player Alice
            if (a >= b) {
                a -= 1;
            } else {
                b -= 1;
            }

            // Check if Alice loses
            if (a == 0 && b == 0) {
                cout << "Alice\n";
                break;
            }

            // Player Bob
            if (b >= a) {
                b -= 1;
            } else {
                a -= 1;
            }

            // Check if Bob loses
            if (a == 0 && b == 0) {
                cout << "Bob\n";
                break;
            }
        }
    }

    return 0;
}
