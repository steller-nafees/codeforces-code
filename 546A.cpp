//============================================================================
// 546A. Soldier and Bananas - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Abbreviate words longer than 10 characters in a specific format
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

    int k,n,w;
    cin>>k>>n>>w;

    int price = 0, borrow = 0;

    for(int i=1; i<=w; i++)
    {
        price += i*k;
    }

    if(price > n)
    {
        borrow = price - n;
    }
    else
    {
        borrow = 0;
    }
    cout<<borrow<<endl;


    return 0;
}

/*
  ## 💡 Solution Logic
  For words longer than 10 characters, output the abbreviation:
    - First letter
    - Number of letters between first and last (length - 2)
    - Last letter
  Otherwise, print the word as-is.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
