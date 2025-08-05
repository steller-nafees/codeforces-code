//============================================================================
// 1353B. Two Arrays And Swaps - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given two arrays a and b of size n, perform at most k swaps
//              between the arrays to maximize the sum of array a.
//              A swap is only allowed between a[i] and b[i].
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
#define INPUT(a,n) for(int i = 0; i<n; i++) cin>>a[i];
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
    int n,k; cin>>n>>k;
    vector<int> a(n), b(n);
    INPUT(a,n);
    INPUT(b,n);
    SORT_ASC(a);
    SORT_DESC(b);

    for(int i=0 ; i<k ; i++)
    {
        if(a[i] < b[i])
            a[i] = b[i];
    }
    int sum = 0;
    for(int i=0; i<n;i++)
        sum += a[i];
    cout<<sum<<endl;

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
  - Sort array 'a' in ascending order (smallest to largest).
  - Sort array 'b' in descending order (largest to smallest).
  - For the first 'k' indices:
      - If b[i] > a[i], swap them (i.e., replace a[i] with b[i]).
      - This ensures we are replacing smaller values in 'a' with larger ones from 'b'.
  - After at most 'k' beneficial swaps, calculate and print the sum of array 'a'.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
