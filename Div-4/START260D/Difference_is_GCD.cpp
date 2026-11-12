// Got TLE
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int val, cnt = 0; cin >> val;

        for(int i = 1; i < val; i++)
            for(int j = i+1; j <= val; j++)
                if(gcd(i, j) == abs(i-j))
                    cnt++;

        cout << cnt << endl;
    }
    
    return 0;
}