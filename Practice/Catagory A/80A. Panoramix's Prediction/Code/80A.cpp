//============================================================================
// Problem: 80A - Panoramix's Prediction (Codeforces)
// Author  : H. M. Nafees N. Islam
// Institute: North South University (NSU), Department of CSE
// Description:
//   Given two integers n and m, determine whether m is the immediate
//   prime number that comes right after n. If true, print "YES";
//   otherwise, print "NO".
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  In the name of Allah, the Most Gracious, the Most Merciful
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
    int n,m;
    cin>>n>>m;
    bool found , next = false;
    for(int i=n+1 ; i<= m; i++)
    {
        found = true;
        for(int j= 2; j<i ; j++)
        {
            if(i % j == 0)
            {
                found = false;
                break;
            }
        }
        if(found)
        {
            next = (i == m);
            break;
        }
    }
    string output = OUTPUT_CONDITION(next);
    cout<<output<< endl;
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}

/*
  💡 Solution Logic:
  - Read integers n and m.
  - Find the first prime number strictly greater than n.
  - If that prime is equal to m, output "YES".
  - Otherwise, output "NO".
*/

/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
