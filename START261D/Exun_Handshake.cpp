#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n, m; cin >> n >> m;
        vector<int> v;

        for(int i = 0; i < n; i++) {
            int val; cin >> val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());

        int cnt = 0;
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += v[i];
            int hand = (sum*(sum-1))/2;

            if(hand <= m) cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}