//============================================================================
// 1409A. Yet Another Two Integers Problem - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Determines the minimum number of operations to make two integers equal,
//              where one operation can increase or decrease a number by up to 10.
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

    int t; cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;


        //Detailed Way
//        if(a == b)
//        {
//            cout<<0<<endl;
//            continue;
//        }
//        else
//        {
//            int moves = abs(a-b) / 10;
//            if(abs(a-b) % 10 == 0)
//                cout<<moves<<endl;
//            else
//                cout<<moves+1<<endl;
//        }
        //Most efficient way
        cout<<(abs(a-b) + 9) / 10<<endl; //Max reminder is 9
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  To make two integers equal, we can increase or decrease either number by up to 10 in one move.
  So, the number of moves is equal to ceil(abs(a - b) / 10).
  If the difference is divisible by 10, then exactly (diff / 10) moves are needed.
  Otherwise, one extra move is needed to cover the remainder.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
