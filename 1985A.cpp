//============================================================================
// Problem: 1985A - Creating Words (Codeforces)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given two length-3 strings, swap their first characters.
//============================================================================

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << "\n";
    }
    return 0;
}

/*
  ## 💡 Solution Logic
  - Read number of test cases `t`.
  - For each test case:
    - Read two strings `a`, `b` of length 3.
    - Swap their first letters.
    - Print the modified `a` and `b`.
*/
