#include <iostream>

using namespace std;

bool isprime(int n) {
    if(n==1)return false ;
    if (n == 2)return true;
    if (n % 2 == 0)return false;
    for (int i = 3; i * i <= n; i++) {
        if (n % i == 0)return false;

    }
    return true;
}

int main() {
    int t;
    cin >> t;
    int n;
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = n;; j++) {
            if (isprime(j)) {
                cout << j << endl;
                break;
            }
        }

    }


    return 0;
}
