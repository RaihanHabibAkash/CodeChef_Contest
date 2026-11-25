#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        vector<int> arr(n);
        ll sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr.begin(), arr.end());

        ll mx = INT_MIN;

        ll tmp_sum = sum;
        for(int i = 0; i < n; i++) {
            tmp_sum -= arr[i];
            ll val = arr[i] * 2;
            tmp_sum += val;

            if(val > arr.back()) tmp_sum -= val;
            else tmp_sum -= arr.back();
            
            mx = max(tmp_sum, mx);

            tmp_sum = sum;
        }

        cout << mx << endl;
    }

    return 0;
}