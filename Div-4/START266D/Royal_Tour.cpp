#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int cs; cin >> cs;
    while(cs--) {
        int n, m; cin >> n >> m;
        int p1, p2; cin >> p1 >> p2;
        int left_top1 = 1, left_top2 = 1;
        int right_top1 = 1, right_top2 = m;
        int left_bottom1 = n, left_bottom2 = 1;
        int right_bottom1 = n, right_bottom2 = m;

        int mn1 = 0, mn2 = 0, mn3 = 0, mn4 = 0;
        vector<bool> is_done(4, false);
        ll sum = 0;
        for(int i = 0; i < 4; i++) {
            mn1 = mn2 = mn3 = mn4 = INT_MAX;

            if(!is_done[0]) mn1 = max(abs(left_top1 - p1), abs(left_top2 - p2));
            if(!is_done[1]) mn2 = max(abs(right_top1 - p1), abs(right_top2 - p2));
            if(!is_done[2]) mn3 = max(abs(left_bottom1 - p1), abs(left_bottom2 - p2));
            if(!is_done[3]) mn4 = max(abs(right_bottom1 - p1), abs(right_bottom2 - p2));

            if(!is_done[0] && mn1 <= mn2 && mn1 <= mn3 && mn1 <= mn4) {
                sum += mn1;
                p1 = left_top1, p2 = left_top2;
                is_done[0] = true;
            }
            else if(!is_done[1] && mn2 <= mn1 && mn2 <= mn3 && mn2 <= mn4) {
                sum += mn2;
                p1 = right_top1, p2 = right_top2;
                is_done[1] = true;
            }
            else if(!is_done[2] && mn3 <= mn1 && mn3 <= mn2 && mn3 <= mn4) {
                sum += mn3;
                p1 = left_bottom1, p2 = left_bottom2;
                is_done[2] = true;
            }
            else if(!is_done[3] && mn4 <= mn1 && mn4 <= mn2 && mn4 <= mn3) {
                sum += mn4;
                p1 = right_bottom1, p2 = right_bottom2;
                is_done[3] = true;
            }
        }

        cout << sum << endl;
    }

    return 0;
}