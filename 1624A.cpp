//============================================================================
// Problem  : 1624A - Plus One on the Subset (Codeforces)
// Author   : H. M. Nafees N. Islam
// Institute: North South University (NSU), Department of CSE
// Description:
//   You are given an array of n integers. You may perform the following
//   operation any number of times: choose a subset of elements and
//   increase all of them by 1.
//   The task is to find the minimum number of operations required to make
//   all elements equal.
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  In the name of Allah, the Most Gracious, the Most Merciful
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define OUTPUT_CONDITION(x) x?"NO" : "YES"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define OUTPUT_2Values(o1,o2) cout<<o1<<" "<<o2<<endl
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
    int n; cin >> n;
    vector<int> a(n);
    INPUT_ARRAY(a,n);

    cout << (*max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end())) << endl;
}

int main()
{
    FAST_IO;
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

/*
  💡 Solution Logic (1624A - Plus One on the Subset):
  - The only way to equalize all numbers is to "raise" smaller ones until
    they match the maximum element.
  - Hence, the minimum number of operations equals:
        max_element - min_element
  - Print this difference for each test case.
*/

/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
