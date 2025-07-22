//============================================================================
// A - Difficult Contest - Codeforces Contest Div-2 22nd July,2025
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description:
//   Given a string s representing problems in a contest,
//   rearrange the problems so that the contest is NOT difficult.
//   A contest is difficult if it contains "FFT" or "NTT" as a contiguous substring.
//   Output any rearrangement of s that avoids these substrings.
//   If the original contest is not difficult, you may output it as is.
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
    string s;
    cin>>s;

    vector<char> others;
    int F=0,N=0,T=0;

    for(char ch : s)
    {
        if(ch == 'F')
            F++;
        else if(ch == 'T')
            T++;
        else if(ch == 'N')
            N++;
        else
            others.push_back(ch);
    }

    //Print T,N,F respectively
    for(int i=0; i<T; i++)
        cout<<'T';
    for(int i=0; i<F; i++)
        cout<<'F';
    for(int i=0; i<N; i++)
        cout<<'N';
    for(char ch : others)
        cout<<ch;

    cout<<endl;
}
int main()
{
    FAST_IO;

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}

/*
  ## 💡 Solution Logic:
  - A contest is difficult if "FFT" or "NTT" appear as substrings.
  - To avoid this, rearrange the string so these patterns do not appear.
  - By grouping all 'T's first, then 'F's, then 'N's, and then others,
    the substrings "FFT" and "NTT" cannot occur.
  - This ensures the contest is not difficult.
  - If the initial string is already non-difficult, this rearrangement still works.
*/


/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
