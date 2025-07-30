//============================================================================
// 1283A. Minutes Before the New Year - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Calculates the number of minutes remaining before the New Year,
//              given the current time.
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

void solve()
{
    int h, m; cin>>h>>m;

    int h_left = 23 - h;
    int m_left = 60 - m;

    if(h_left == 0)
        cout<<m_left<<endl;
    else
    {
        cout<<(h_left * 60) + m_left<<endl;
    }


}


int main()
{
    FAST_IO;
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Input: Current time in hours (h) and minutes (m).
  - Goal: Calculate how many minutes are left until midnight (00:00).
  - Formula: (23 - h) * 60 + (60 - m)
    This gives total minutes from current time to 00:00.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
