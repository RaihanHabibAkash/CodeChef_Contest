#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int runs, n; cin >> runs >> n;

    if(runs <= n * 6) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}