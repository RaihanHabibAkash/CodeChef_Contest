#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        vector<int> arr;
        for(int i = 0; i < n; i++) {
            int val; cin >> val;
            arr.push_back(val);
        }

        sort(arr.begin(), arr.end(), greater<int>());

        int val = arr[arr.size()-1];
        arr.pop_back();
        int mn = arr[0] - arr[arr.size()-1];
        arr.push_back(val);
        val = arr[0];
        arr.erase(arr.begin());

        mn = min(mn, arr[0]-arr[arr.size()-1]);

        cout << mn << endl;
    }

    return 0;
}