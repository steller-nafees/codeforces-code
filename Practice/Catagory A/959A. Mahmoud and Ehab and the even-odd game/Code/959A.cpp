//============================================================================
// Problem  : 959A - Mahmoud and Ehab and the even-odd game (Codeforces)
// Author   : H. M. Na fees N. Islam
// Institute: North South University (NSU), Department of CSE
// Date     : August 23, 2025
//
// Description:
//   Mahmoud and Ehab play a game where they start with an integer n.
//   They take turns, with Mahmoud moving first.
//   - If the current number is even → Mahmoud wins.
//   - If the current number is odd  → Ehab wins.
//
//   Task: Given n, determine the winner.
//
// Input:
//   - n (1 ≤ n ≤ 10^9)
//
// Output:
//   - "Mahmoud" if Mahmoud wins.
//   - "Ehab" if Ehab wins.
//
// Constraints:
//   - Time limit: 1 second
//   - Memory limit: 256 MB
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  In the name of Allah, the Most Gracious, the Most Merciful
*/


#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using ll = long long;

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout <<"Mahmoud"<< endl;
    }
    else
    {
        cout <<"Ehab"<< endl;
    }
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}

/*
  💡 Solution Logic:
  - Mahmoud always moves first.
  - If n is even:
      • Mahmoud wins immediately.
  - If n is odd:
      • Ehab wins immediately.
  - Time complexity: O(1).
*/


/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
