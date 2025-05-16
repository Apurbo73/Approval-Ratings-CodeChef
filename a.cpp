#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        vector<int> scores(5);
        int total = 0;
        
        for (int i = 0; i < 5; ++i) {
            cin >> scores[i];
            total += scores[i];
        }

        if (total >= 35) {
            cout << 0 << endl;
            continue;
        }

        sort(scores.begin(), scores.end());

        int coins = 0;
        for (int i = 0; i < 5 && total < 35; ++i) {
            int gain = 10 - scores[i];
            total += gain;
            coins += 100;
        }

        cout << coins << endl;
    }

    return 0;
}
