#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n, d; cin >> n >> d;
        int mn = INT_MAX;

        int arr1[n], arr2[n];
        for(int i = 0; i < n; i++) cin >> arr1[i];
        for(int i = 0; i < n; i++) cin >> arr2[i];

        int sum = d;
        for(int i = 0; i < n; i++) sum += arr1[i];
        mn = min(sum, mn);

        sum = d;
        for(int i = 0; i < n; i++) sum += arr2[i];
        mn = min(sum, mn);

        sum = d*2;
        for(int i = 0; i < n; i++) sum += min(arr1[i], arr2[i]);
        mn = min(sum, mn);

        cout << mn << endl;
    }

    return 0;
}