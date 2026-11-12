#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        ll n; cin >> n;
        vector<ll> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        vector<ll> break_index;
        for(int i = 1; i < n-1; i++)
            if(arr[i-1] == arr[i+1])
                break_index.push_back(i);


        ll total = (n * (n-1)) / 2;
        if(break_index.size() < 2) {
            cout << total << endl;
            continue;
        }

        ll prev = 0;
        for(int i = 0; i < break_index.size()-1; i++) {
            ll unfriend = (break_index[i] - prev) * (n-1 - break_index[i+1]);
            total -= unfriend;
            prev = break_index[i];
        }

        cout << total << endl;
    }

    return 0;
}