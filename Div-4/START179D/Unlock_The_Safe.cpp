#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        ll n, mvs; cin >> n >> mvs;
        vector<ll> arr(n);
        vector<ll> unlock(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        for(int i = 0; i < n; i++) cin >> unlock[i];

        ll dif = LLONG_MAX;
        for(int i = 0; i < n; i++) {
            ll num = min(abs(arr[i] - unlock[i]), 9-abs(arr[i] - unlock[i]));
            mvs -= num;

            // For handle if Odd left in last
            ll num2 = max(abs(arr[i] - unlock[i]), 9-abs(arr[i] - unlock[i]));
            dif = min(num2 - num, dif); // num2 - num -> Always odd
        }
        
        if(mvs < 0) cout << "No" << endl;
        else if(mvs % 2 == 0 || dif <= mvs) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}