//============================================================================
// B. Upscaling (Codeforces 1950B)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given an integer n, output a 2n×2n checkerboard made of
//              2×2 squares alternating '#' and '.', with the top-left cell being '#'.
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
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

void solve()
{
    int n;
    cin>>n;
    for(int i=1; i<=2*n; i++)
    {
        for(int j=1; j<=2*n; j++)
        {
            if((i+j)%2 == 0 )
                cout<<"##";
            else
                cout<<"..";
        }
        cout<<endl;
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
  💡 Solution Logic
  - Output a 2n×2n checkerboard made of 2×2 squares.
  - Each 2×2 square alternates between '#' and '.'.
  - Top-left cell is '#'.
  - Complexity: O((2n)^2) per test case, which is fine since n ≤ 20.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
