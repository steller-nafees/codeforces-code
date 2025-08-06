//============================================================================
// 1619A. Square String? - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: A string is called square if it can be split into two equal
//              halves that are exactly the same. For a given string s,
//              determine whether it is square or not for each test case.
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
    string s; cin>>s;
    int len = s.length();
    if(len%2 == 0)
    {
        string s1 = s.substr(0,(len/2));
        string s2 = s.substr(len/2);
        if(s1 == s2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;

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
  💡 Solution Logic:
  - Read the input string `s`.
  - If the length of `s` is odd, it cannot be square — output "NO".
  - If the length is even:
      - Split the string into two halves: s1 = first half, s2 = second half.
      - Compare s1 and s2:
          - If s1 == s2, output "YES" (the string is square).
          - Otherwise, output "NO".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
