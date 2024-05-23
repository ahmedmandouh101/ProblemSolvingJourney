#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int R, C, D, NR, NC, ND;
        cin >> R >> C >> D;
        cin >> NR >> NC >> ND;

        int maxMachinesRAM = NR / R;
        int maxMachinesCPU = NC / C;
        int maxMachinesDisk = ND / D;

        int maxMachines = min({maxMachinesRAM, maxMachinesCPU, maxMachinesDisk});

        cout << maxMachines << endl;
    }

    return 0;
}
