#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long a;
        cin >> a;
        if (a == 1) {
            cout << 3 << endl;
            continue;
        }
   
        int b = ceil(log2((double)a));
        long long answer = 3 + 3 * b;
        cout << answer << endl;
    }
    return 0;
}