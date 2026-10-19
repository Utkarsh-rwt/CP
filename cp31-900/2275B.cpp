#include <bits/stdc++.h>
using namespace std;

void cp() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> printed(n + 1, 0);
    stack<int> memory;

    for (int i = 1; i <= n; i++) {
        if (s[i - 1] == '1') {
            memory.push(i);
        }
        else if (s[i - 1] == '2') {
            if (!memory.empty()) {
                printed[memory.top()] = 1;
                memory.pop();
            }
            else {
                printed[i] = 1;
            }
        }
        else {
            printed[i] = 1;
        }
    }

    int notPrinted = 0;

    for (int i = 1; i <= n; i++) {
        if (printed[i] == 0)
            notPrinted++;
    }

    cout << notPrinted << '\n';

    for (int i = 1; i <= n; i++) {
        if (printed[i] == 0)
            cout << i << ' ';
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        cp();
    }

    return 0;
}