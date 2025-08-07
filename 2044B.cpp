//============================================================================
// 2044B. Normal Problem - Codeforces (or your own problem ID)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given a string a observed from outside a glass window consisting
//              of letters 'p', 'q', and 'w', output the string observed from
//              inside the store. The string from inside is the reverse of a,
//              where 'p' and 'q' are swapped and 'w' remains the same.
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
    string a; cin>>a;
    int len = a.length();
    for(int i=len - 1; i >= 0; i--)
    {
        if(a[i] == 'p')
            cout<<'q';
        else if(a[i] == 'q')
            cout<<'p';
        else
            cout<<'w';
    }
    cout<<endl;
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
  - Read the input string `a`.
  - Reverse the string to simulate looking from inside.
  - For each character in the reversed string:
      - Replace 'p' with 'q'.
      - Replace 'q' with 'p'.
      - Leave 'w' as is.
  - Output the transformed string.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
