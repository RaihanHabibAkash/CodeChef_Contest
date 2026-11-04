#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n, m; cin >> n >> m;
        char arr[n][m];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> arr[i][j];


        int min_i = n, max_i = -1,
            min_j = m, max_j = -1;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(arr[i][j] == '1') {
                    min_i = min(i, min_i);
                    max_i = max(i, max_i);
                    min_j = min(j, min_j);
                    max_j = max(j, max_j);
                }
            }
        }

        cout << (max_i - min_i + 1) * (max_j - min_j + 1) << endl;
    }



    return 0;
}