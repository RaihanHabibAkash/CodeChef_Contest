// Problem: Echo
// Platform: CodeChef
// Difficulty: 231
// Link: https://www.codechef.com/problems/ECHOECHO
// Topics: Implement
/*
A string of length 
4
4 is called an echo if 
S
1
=
S
3
S 
1
​
 =S 
3
​
  and 
S
2
=
S
4
S 
2
​
 =S 
4
​
 .
Here, we are using 
1
1-indexing.

You are given a string of length 
4
4. Check if it is an echo.

Input Format
The first and only line of input will contain a single string 
S
S of length 
4
4.
Output Format
Print Yes if 
S
S is an echo, and No otherwise.

Each character of the output may be printed in either uppercase or lowercase, i.e. the strings NO, No, nO, and no will be treated as equivalent.

Constraints
S
S has length 
4
4.
S
S consists of only lowercase English letters, i.e. the characters a, b, c, ..., z.
Sample 1:
Input
Output
meme
Yes
Explanation:
The first and third characters of meme are both equal (to m), and its second and fourth characters are also both equal (to e).
So, meme is an echo.

Sample 2:
Input
Output
ever
No
Explanation:
The second character of ever is v, while its fourth character is r. These are not equal, so ever is not an echo.

More Info
Time limit1 secs
Memory limit1.5 GB
Source Limit50000 Bytes
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    if(s[0] == s[2] && s[1] == s[3]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
