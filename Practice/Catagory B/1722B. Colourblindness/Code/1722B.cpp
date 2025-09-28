//============================================================================
// 1722B. Colourblindness - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Compares two strings representing colors, where 'G' and 'B'
//              are considered equivalent due to colorblindness.
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
    int n; cin>>n;
    vector<char> a(n);
    vector<char> b(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    bool flag = false;
    for(int i=0 ; i<n; i++)
    {
        if(a[i] == b[i])
        {
            flag = true;
        }
        else if(((a[i]=='G' && b[i] == 'B') || (a[i]=='B' && b[i] == 'G')))
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }

    }
    string result = flag?"YES" : "NO";
    cout<<result<<endl;
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
  In the problem, a colorblind person sees 'G' (Green) and 'B' (Blue) as the same.
  So, two strings are considered the same if:
    - Characters are exactly the same
    - OR one is 'G' and the other is 'B' at that position
  We compare characters at each index and validate accordingly.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
