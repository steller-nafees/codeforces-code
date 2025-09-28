//============================================================================
// Problem  : 2094A - Trippi Troppi(Codeforces)
// Author   : H. M. Nafees N. Islam
// Institute: North South University (NSU), Department of CSE
// Date     : August 23, 2025
//
// Description:
//   In Trippi Troppi's world, each country's ancient name consists of three
//   strings (words). The modern name of the country is formed by concatenating
//   the first letter of each word.
//
// Input:
//   - t (1 ≤ t ≤ 100) : number of test cases
//   - t lines follow, each containing three space-separated lowercase strings
//     (each string ≤ 10 characters)
//
// Output:
//   - For each test case, print the modern name of the country
//
// Constraints:
//   - Time limit: 1 second
//   - Memory limit: 256 MB
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
    string a,b,c; cin>>a>>b>>c;
    string sh = "";
    sh += a[0];
    sh += b[0];
    sh += c[0];
    cout<<sh<<endl;
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
  - For each test case, read the three words of the ancient country name.
  - Concatenate the first letter of each word to form the modern name.
  - Print the modern name.
  - Time complexity: O(t), very efficient for t ≤ 100.
*/

/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
