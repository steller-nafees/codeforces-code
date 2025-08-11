//============================================================================
// 9A. Die Roll - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given Yakko's (Y) and Wakko's (W) die rolls, determine the
//              probability that Dot will roll a value greater than or equal
//              to the maximum of Y and W. The probability should be printed
//              as an irreducible fraction A/B.
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/


#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define OUTPUT_CONDITION(x) x?"YES" : "NO"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define OUTPUT_2Values(o1,o2) cout<<o1<<" "<<o2<<endl
#define SORT_DESC(a) sort(a.begin(), a.end(),greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())


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
    int y,w; cin>>y>>w;


    int min_p = max(y,w);
    int points = ((6-min_p) + 1);
    int dot = points / 6;
    if(dot == 1 )
        cout<<"1/1"<<endl;
    else
    {
        if(points == 0)
            cout<<"0/1"<<endl;
        else if(points == 1)
            cout<<"1/6"<<endl;
        else if(points == 2)
            cout<<"1/3"<<endl;
        else if(points == 3)
            cout<<"1/2"<<endl;
        else if(points == 4)
            cout<<"2/3"<<endl;
        else if(points == 5)
            cout<<"5/6"<<endl;
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
  - Read integers Y and W.
  - The minimum roll Dot needs to win (or tie, since ties let her win)
    is `max(Y, W)`.
  - Number of successful outcomes on a fair 6-sided die =
        6 - max(Y, W) + 1
  - Total outcomes = 6
  - Reduce the fraction (successful outcomes / total outcomes) to lowest
    terms and output in the format A/B.
  - Edge cases:
      • If successful outcomes = 0 → "0/1"
      • If successful outcomes = total outcomes → "1/1"
*/


/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
