//============================================================================
// 1760A. Medium Number - Codeforces 
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given three distinct integers a, b, and c, the task is to 
//              determine and print the median value — the number that is 
//              neither the maximum nor the minimum.
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

int main()
{
    FAST_IO;

    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c; cin>>a>>b>>c;

        if((a > b && a < c) || (a < b && a > c))
            cout<<a<<endl;
        else if((b > a && b < c) || (b < a && b > c))
            cout<<b<<endl;
        else
            cout<<c<<endl;
    }
    return 0;
}

/*
  ## 💡 Solution Logic:
  - You are given 3 **distinct integers** a, b, and c.
  - The goal is to print the **median** of the three numbers — the one that is **neither the largest nor the smallest**.
  - A number `x` is the median if: (x > y and x < z) or (x < y and x > z).
  - This logic is applied to all three numbers, and the one satisfying it is printed.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
