#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        int arr[n];
        int odd = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] % 2) odd++;
        }

        if(odd % 2 == 0) {
            cout << n << endl;
            continue;
        }

        int l = 0, r = n-1;
        bool flag = true, done = false;
        while(l <= r) {
            if(arr[l] % 2) {
                cout << max(l, (n-l-1)) << endl;
                done = true;
                break;
            }
            else if(arr[r] % 2) {
                cout << max(r, (n-r-1)) << endl;
                done = true;
                break;
            }
            if(flag) {
                l++;
                flag = false;
            }
            else {
                r--;
                flag = true;
            }
        }

        // Still pai nai
        if(!done) cout << 0 << endl;

    }

    return 0;
}