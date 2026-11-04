#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int n; cin >> n;
    int cnt = 0;
    if(n >= 5) {
        n -= 5;
        cnt++;
    }

    cout << cnt + n << endl;

    return 0;
}