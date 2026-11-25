#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int n, cnt = 0; cin >> n;
    if(n == 2) {
        cnt++;
        n += 2;
    }

    for(int i = n; i <= 7; i++) 
        cnt++;
    cout << cnt << endl;

    

    return 0;
}