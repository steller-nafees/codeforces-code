//============================================================================
// 791A. Bear and Big Brother - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Checks the number of distinct characters to determine the output
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

    int a,b;
    cin>>a>>b;
    int years;

    for(years=0; ; years++)
    {
        if(a <= b)
        {
            a *= 3;
            b *= 2;
        }
        else
        {
            break;
        }

    }

    cout<<years<<endl;



    return 0;
}

/*
  ## 💡 Solution Logic
  - Start with Limak's and his brother's weight.
  - Each year:
      Limak's weight triples (a *= 3)
      Brother's weight doubles (b *= 2)
  - Stop when Limak's weight exceeds his brother's.
  - Output the number of years required.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
