//============================================================================
// 977A. Wrong Subtraction - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Applies k operations to a number n, where each operation is
//              either subtracting 1 or dividing by 10 if the last digit is 0.
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

    int n, k;
    cin >>n>>k;

    for(int i=1; i<=k; i++)
    {
        if(n%10 == 0)
        {
            n /= 10;
        }
        else
        {
            n-=1;
        }

    }
    cout<<n<<endl;
    return 0;
}

/*
  ## 💡 Solution Logic
  - Perform `k` operations on number `n`.
  - If the last digit of `n` is zero, divide `n` by 10.
  - Otherwise, subtract 1 from `n`.
  - Repeat the process for `k` times.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
