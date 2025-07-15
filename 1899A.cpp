//============================================================================
// Problem: 1899A - Game with Integers (Codeforces)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given an integer n, determine whether the first player can
//              make it divisible by 3 in one move (+1 or -1). If yes, they win.
//============================================================================

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;

        if(n %3 == 0)
        {
            cout<<"Second"<<endl;
        }
        else
        {
            cout<<"First"<<endl;
        }
    }
    return 0;
}

/*
  ## 💡 Solution Logic
  - Read number of test cases `t`.
  - For each test case:
    - Read an integer `n`.
    - If `n` is divisible by 3, the second player wins.
    - Otherwise, the first player can make a move to win.
    - Output "First" or "Second" accordingly.
*/
