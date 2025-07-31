//============================================================================
// 1857A. Array Coloring - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Checks whether the sum of the array is even (YES) or odd (NO)
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
    vector<int>a(n);

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];


        sum += a[i]; // parity means if even , both even. if odd, both odd
    }
    //2 even summation is even
    if(sum % 2 == 0)
        cout<<"YES"<<endl;
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
  ## 💡 Solution Logic
  - The task is to determine whether it's possible to color the array such that the sum of elements in both colored parts is even.
  - Key observation: if the total sum of the array is even, we can achieve this.
  - So just compute the sum and check its parity.
*/


/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/

