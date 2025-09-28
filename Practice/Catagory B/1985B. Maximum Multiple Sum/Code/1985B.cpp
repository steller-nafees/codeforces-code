//============================================================================
// Problem: B. Maximum Multiple Sum (Codeforces)
// Author: H. M. Nafees N. Islam
// Institution: North South University (NSU), Department of CSE
// Description: For each test case, find the integer x (2 ≤ x ≤ n) that maximizes
//              the sum of its multiples ≤ n. The answer is unique.
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
    int result = n==3 ? 3 : 2;
    cout<<result<<endl;
}

int main()
{
    FAST_IO;

    int t; cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}


/*
  ## 💡 Solution Logic
  - For each test case:
  - If n == 3 -> output is 3. Otherwise output is always 2
  - because for maximum sum, take lowest multiplicative digit
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
