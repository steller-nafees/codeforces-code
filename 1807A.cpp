//============================================================================
// 116A. Tram - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Calculates the maximum number of passengers in a tram
//              at any point during the route
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
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b == c)
            cout<<"+"<<endl;
        else
            cout<<"-"<<endl;
    }
    return 0;
}

/*
  ## 💡 Solution Logic
  - For each stop, subtract the number of people exiting the tram (`a`) and
    add the number of people entering the tram (`b`).
  - Track the maximum capacity at each step to determine the max occupancy.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
