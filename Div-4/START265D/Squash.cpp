#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        stack<char> st;

        for(int i = 0; i < n; i++) 
            if(st.empty() || st.top() != s[i])
                st.push(s[i]);

        cout << ((st.size() <= k) ? "YES" : "NO") << endl;
    }

    return 0;
}