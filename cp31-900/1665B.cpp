#include <iostream>
#include <vector>
#include <algorithm>

//using unorederd map will cause hash collisions and give tle 

using namespace std;

void cp() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int max_freq = 1, current_freq = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            current_freq++;
        } else {
            current_freq = 1;
        }
        max_freq = max(max_freq, current_freq);
    }

    int swap_ops = n - max_freq;
    int clone_ops = 0;
    int same = max_freq;

    while (same < n) {
        clone_ops++;
        same += same;
    }

    cout << swap_ops + clone_ops << "\n";
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