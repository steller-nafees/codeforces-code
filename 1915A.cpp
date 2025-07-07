//============================================================================
// 1915A. Odd One Out - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given three integers a, b, and c, where exactly two are equal,
//              find and output the one that is different (the odd one out).
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

    int t; cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a == b)
            cout<<c<<endl;
        else if(b == c)
            cout<<a<<endl;
        else if(a == c)
            cout<<b<<endl;
    }
    return 0;
}

/*
  ## 💡 Solution Logic
  - Input three integers: a, b, and c.
  - Exactly two of them are equal, one is different.
  - Use conditional checks:
      - If a == b ⇒ c is the odd one.
      - If b == c ⇒ a is the odd one.
      - If a == c ⇒ b is the odd one.
  - Print the odd one out.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
