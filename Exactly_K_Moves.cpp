#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n, steps; cin >> n >> steps;
        if(steps <= n && n <= 2*steps) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}