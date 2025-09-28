//============================================================================
// 1328A. Divisibility Problem - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Determines the minimum number that needs to be added to `a`
//              so that it becomes divisible by `b`.
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
    cin >> t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;

        if(a%b == 0)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            int w=a%b;
            cout<<b-w<<endl;
        }
    }
    return 0;
}

/*
  ## 💡 Solution Logic
  - For each test case, take integers `a` and `b`.
  - If `a` is already divisible by `b` (i.e., a % b == 0), the result is 0.
  - Otherwise, the result is `b - (a % b)` which is the minimal number to add to make it divisible.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
