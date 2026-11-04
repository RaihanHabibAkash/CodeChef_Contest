#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int cs; cin >> cs;
    while(cs--) {
        int n, k; cin >> n >> k;
        vector<int> arr;
        for(int i = 0; i < n; i++) {
            int val; cin >> val;
            arr.push_back(val);
        }

        sort(arr.begin(), arr.end());

        int time = min(n-1, k);

        int val = arr[arr.size()-1];
        arr.pop_back();

        while(time--) {
            val += arr[arr.size()-1];
            arr.pop_back();
        }
        cout << val << endl;
    }

    return 0;
}