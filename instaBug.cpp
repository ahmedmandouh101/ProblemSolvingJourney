#include <iostream>
#include <algorithm>
using namespace std;

bool canAfford(int x, int R, int C, int D, int NR, int NC, int ND, int PR, int PC, int PD, long long N) {
    long long additionalRAM = max(0, x * R - NR);
    long long additionalCPU = max(0, x * C - NC);
    long long additionalDisk = max(0, x * D - ND);

    long long totalCost = additionalRAM * PR + additionalCPU * PC + additionalDisk * PD;

    return totalCost <= N;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int R, C, D, NR, NC, ND, PR, PC, PD;
        long long N;

        cin >> R >> C >> D;
        cin >> NR >> NC >> ND;
        cin >> PR >> PC >> PD;
        cin >> N;

        int low = 0, high = 1000000000;  // Assuming a very high upper bound
        int result = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canAfford(mid, R, C, D, NR, NC, ND, PR, PC, PD, N)) {
                result = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << result << endl;
    }

    return 0;
}
