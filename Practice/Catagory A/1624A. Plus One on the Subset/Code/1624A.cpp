//============================================================================
// Problem  : 1624A. Plus One on the Subset (Codeforces)
// Author   : H. M. Nafees N. Islam
// Institute: North South University (NSU), Department of CSE
// Description:
//   You are given three points (xA, yA), (xB, yB), (xC, yC) — the vertices
//   of a triangle with integer coordinates. Determine whether it's possible
//   to draw a straight line that is either horizontal or vertical that cuts
//   the triangle into two non-degenerate triangles. If possible, print "YES";
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
    int n;cin>>n;
    vector<int>a(n);
    INPUT_ARRAY(a,n);

    cout<<(*max_element(a.begin(), a.end()) - *min_element(a.begin(),a.end()))<<endl;

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
  💡 Solution Logic (1767A - Cut the Triangle):
  - Read three points (x, y).
  - Observation: It's IMPOSSIBLE only when some two points share the same x
    AND (independently) some two points share the same y. In all other cases,
    it's possible.
  - Implementation:
      cond = (any equal x-pair) && (any equal y-pair)
      print "NO" if cond is true; otherwise print "YES".
*/

/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
