#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int a, b; cin >> a >> b;

    cout << min(a+b, a*3) << " ";

    return 0;
}