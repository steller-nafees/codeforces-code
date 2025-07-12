//============================================================================
// 281A. Word Capitalization - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Capitalize the first letter of a given word if it is lowercase
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

    int t; cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a < b && b < c )
            cout<<"STAIR"<<endl;
        else if(a<b && b > c)
            cout<<"PEAK"<<endl;
        else
            cout<<"NONE"<<endl;
    }
    return 0;
}

/*
  ## 💡 Solution Logic
  If the first letter is lowercase, convert it to uppercase by ASCII manipulation.
  Otherwise, print the word as is.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
