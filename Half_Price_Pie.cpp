#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        vector<int> arr(n);

        int sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        int prev = 0, mn = INT_MAX;

        for(int i = 0; i < n; i++) {
            if(prev) mn = min(prev + arr[i], mn);
            prev = arr[i];
        }

        cout << sum - (mn / 2) << endl;
    }

    return 0;
}