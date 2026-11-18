#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int n; cin >> n;

    bool flag = false;
    for(int i = 1; i < n; i++) {
        if(i*2 == n-i) {
            flag = true;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}