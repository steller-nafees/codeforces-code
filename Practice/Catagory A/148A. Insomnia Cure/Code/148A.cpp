//============================================================================
// 148A. Insomnia Cure - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Counts the number of damaged dragons that are divisible by any
//              of the input integers k, l, m, or n, up to dragon number d.
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

    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int damaged = 0;

    for(int i=1; i<=d; i++)
    {
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0)
            damaged++;
    }
    cout<<damaged<<endl;

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read integers `k`, `l`, `m`, `n`, `d`.
  - Iterate over all dragon numbers from 1 to `d`.
  - Count the number of dragons divisible by any of k, l, m, or n.
  - These are the damaged dragons.
  - Output the count.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
