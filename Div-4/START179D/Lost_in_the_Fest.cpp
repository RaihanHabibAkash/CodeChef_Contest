#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];

        int Bhoomi_height = arr[n-1];
        
        int idx = -1;
        for(int i = 0; i < n; i++)
            if(arr[i] >= Bhoomi_height) {
                idx = i;
                break;
            }

        cout << n-1-idx << endl;
    }

    return 0;
}