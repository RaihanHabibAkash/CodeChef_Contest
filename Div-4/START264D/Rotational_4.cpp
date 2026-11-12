#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        string s; cin >> s;

        int cnt = 0;
        for(int i = 0; i < n; i++) {
            int number = ((s[i] - '0') * 10) + (s[(i+1) % n] - '0');
            
            if(number % 4 == 0) cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}