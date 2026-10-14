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

        sort(arr.begin(), arr.end(), greater<int>());
        int val = arr[arr.size()-1];
        arr.pop_back();

        cout << max(arr[0], val+arr[arr.size()-1]) << endl;
    }

    return 0;
}