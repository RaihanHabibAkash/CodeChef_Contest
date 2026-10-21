#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n, ans; cin >> n >> ans;

        int sum = 0, cnt = 0;
        bool flag = false;
        for(int i = 0; i < n; i++) {
            if(sum == ans) {
                flag = true;
                break;
            }
            else if(sum < ans) sum += 4;
            else sum--;

            cnt++;
        }

        if(flag || sum == ans) cout << cnt << endl;
        else cout << -1 << endl;
    }

    return 0;
}