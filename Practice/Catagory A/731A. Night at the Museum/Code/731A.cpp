//============================================================================
// Problem  : 731A - Night at the Museum (Codeforces)
// Author   : H. M. Na fees N. Islam
// Institute: North South University (NSU), Department of CSE
// Date     : August 23, 2025
//
// Description:
//   The dial of the museum’s exhibition is a circle with the letters
//   'a' to 'z'. The dial starts pointing at 'a'.
//
//   Vlad needs to spell a string s by rotating the dial. In one move,
//   he can rotate the dial one step clockwise or counterclockwise.
//
//   Task: Find the minimum total number of moves required to type s.
//
// Input:
//   - string s (1 ≤ |s| ≤ 100)
//
// Output:
//   - Minimum number of moves.
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
    string s; cin>>s;

    int total = 0;
    char st = 'a';
    for(int i=0; i<s.length(); i++)
    {
        char en = s[i];
        int clock = abs(en - st);
        int counter = abs(abs(en - st) - 26);
        total += min(clock,counter);
        st = en;
    }
    cout<<total<<endl;
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}

/*
  💡 Solution Logic:
  - Start from 'a'.
  - For each character in the string, calculate the clockwise distance and
    counter-clockwise distance from the current position.
  - Add the minimum of the two distances to the answer.
  - Update current position.
  - Time complexity: O(|s|), very efficient.
*/

/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
