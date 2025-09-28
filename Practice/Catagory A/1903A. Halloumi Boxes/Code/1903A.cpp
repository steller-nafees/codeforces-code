//============================================================================
// 1903A. Halloumi Boxes - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description:
// Given an array of integers representing the order of boxes and a value k,
// determine if it's possible to sort the array in non-decreasing order
// using at most k moves, where in one move you can select any subarray
// and sort it in ascending order.
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
#define OUTPUT_2Values(o1,o2) cout<<o1<<" "<<o2<<endl
#define SORT_DESC(a) sort(a.begin(), a.end(),greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())
#define all(x) x.begin(), x.end()

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
    vector<int> a(n);
    INPUT_ARRAY(a,n);

    bool isSorted = is_sorted(all(a));
    if(isSorted)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(k == 1 && !isSorted)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
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
  - Read n (number of boxes) and k (max allowed operations).
  - Read the array a[] (initial arrangement of boxes).
  - If the array is already sorted in ascending order → print "YES".
  - If not sorted:
      • If k == 1 → it's impossible to sort → print "NO".
      • Otherwise → it's always possible → print "YES".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
