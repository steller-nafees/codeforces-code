//============================================================================
// 266A. Stones on the Table - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Counts how many stones need to be removed so that no two
//              adjacent stones have the same color.
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

    int n, stones=0;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0 ; i < s.length() - 1; i++)
    {
        if(s[i] == s[i+1])
            stones++;
        else
            continue;
    }

    cout<<stones<<endl;

    return 0;
}

/*
  ## 💡 Solution Logic
  Iterate through the string of stones.
  If two adjacent stones are of the same color, increment the `stones` counter.
  That counter represents how many stones need to be removed.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
