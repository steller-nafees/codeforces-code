//============================================================================
// Problem  : 1873C - Target Practice (Codeforces)
// Author   : H. M. Nafees N. Islam
// Institute: North South University (NSU), Department of CSE
// Description:
//   You are given a 10×10 board representing a target. Some cells contain
//   'X' (shots) and others contain '.'. Each cell has a score depending on
//   how close it is to the center of the board (like a dartboard).
//   Your task is to calculate the total score of all the 'X' marks.
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
    int point[10][10] =
    {
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
    };
    int total = 0;
    for(int i=0; i<10; i++)
    {
        string s;
        cin>>s;

        for(int j=0; j<10; j++)
        {
            if(s[j] == 'X')
            {
                total += point[i][j];
            }
        }
    }
    cout<<total<<endl;
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

/*
  💡 Solution Logic (1873C - Target Practice):
  - Create a 10×10 scoring grid where the center cells have the highest points (5)
    and the outermost cells have the lowest points (1).
  - Read the 10×10 board.
  - For each 'X', add its corresponding score from the scoring grid.
  - Print the total score.
*/

/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
