#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n, m, k; cin >> n >> m >> k; 
        vector<bool> cars(n, false), stations(m, false);

        ll total_time = 0;
        bool frist = true;
        while(k--) {
            int a, b; cin >> a >> b;

            if(frist) {
                total_time += 2;
                frist = false;
            }
            else if(cars[a] || stations[b]) total_time += 2;
            cars[a] = true;
            stations[b] = true;
        }

        cout << total_time << endl;
    }

    return 0;
}