#include <bits/stdc++.h>
using namespace std;

bool check(string &a, string &b) {
    for (int i = 0; i <= a.size() - b.size(); i++) {
        if (b == a.substr(i, b.size())) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        string a1 = a + a;
        string a2 = a1 + a1;
        string a3 = a2 + a2;
        string a4 = a3 + a3;
        string a5 = a4 + a4;
        string a6 = a5 + a5;

        if (a.size() >= m && check(a, b)) {
            cout << 0 << endl;
        }
        else if (a1.size() >= m && check(a1, b)) {
            cout << 1 << endl;
        }
        else if (a2.size() >= m && check(a2, b)) {
            cout << 2 << endl;
        }
        else if (a3.size() >= m && check(a3, b)) {
            cout << 3 << endl;
        }
        else if (a4.size() >= m && check(a4, b)) {
            cout << 4 << endl;
        }
        else if (a5.size() >= m && check(a5, b)) {
            cout << 5 << endl;
        }
        else if (a6.size() >= m && check(a6, b)) {
            cout << 6 << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}
