//============================================================================
// A. Array with Odd Sum (Codeforces 1296A)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given an array of n integers, determine if it is possible to
//              choose a non-empty subsequence whose sum is odd.
//              If yes, print "YES"; otherwise, print "NO".
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// Type aliases
using ll = long long;
using ull = unsigned long long;

void solve()
{
    int n; cin >> n;
    int sum = 0;
    bool oddFlag = false, evenFlag = false;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 == 0) evenFlag = true;
        else oddFlag = true;
    }

    if ((sum % 2 != 0) || (oddFlag && evenFlag))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
  💡 Solution Logic
  - A subsequence sum is odd if:
      • The total sum of the array is odd → directly "YES".
      • Or, the total sum is even, but we have at least one odd and one even 
        element → we can form an odd sum subsequence → "YES".
  - Otherwise → "NO".
  - Complexity: O(n) per test case.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
