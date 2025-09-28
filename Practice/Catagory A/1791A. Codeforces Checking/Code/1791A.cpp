//============================================================================
// 1791A. Codeforces Checking - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Check whether a given character exists in the word "codeforces"
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

int main() {
    FAST_IO;
    int t;
    cin>>t;

    while(t--)
    {
        char c;
        cin >> c;
        if(c =='c' || c =='o' || c =='d' || c =='e' || c =='f' || c =='r' || c =='s')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - The word "codeforces" contains the characters: c, o, d, e, f, r, s.
  - If the input character belongs to this set, print "YES".
  - Otherwise, print "NO".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
