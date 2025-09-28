//============================================================================
// Codeforces Div-2
// 432A. Choosing Teams - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Counts how many teams of 3 students can be formed such that
//              each member has enough free time to participate in k contests.
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

// Debug (disabled in submission)
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << '\n';
#else
    #define debug(x)
#endif

int main()
{
    FAST_IO;
    int n, k;
    cin >> n >> k;
    vector<int> y(n);

    for(int i = 0; i < n; i++)
    {
        cin >> y[i];
    }

    int eli_mem = 0;
    for(int i = 0; i < n; i++)
    {
        if(5 - y[i] >= k)
            eli_mem++;
    }

    cout << eli_mem / 3 << endl;
    return 0;
}

/*
  ## 💡 Solution Logic:
  - Read total number of students `n` and required time `k`.
  - Read each student's available free time.
  - A student is eligible if (5 - y[i] >= k).
  - Count total eligible students.
  - Maximum number of 3-member teams = eligible / 3.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
