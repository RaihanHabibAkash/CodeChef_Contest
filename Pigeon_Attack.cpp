#include <bits/stdc++.h>
using namespace std;

int main() {
    int cs; cin >> cs;
    while(cs--) {
        int n, k; cin >> n >> k;
        int cnt = 1, not_do = k;
        while(true) {
            if(cnt == not_do) {
                not_do += k;
                n++;
            }
            if(cnt == n) break;
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}