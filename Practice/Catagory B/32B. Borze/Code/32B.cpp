//============================================================================
// 32B. Borze - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Decodes a Borze-encoded string into digits (0, 1, 2)
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

    string borze; cin>>borze;

    for(int i=0 ; i < borze.length(); i++)
    {
        if(borze[i] == '.')
        {
            cout<<0;
        }
        else if(borze[i] == '-')
        {
            if(borze[i+1] == '.')
            {
                cout<<1;
            }
            else if(borze[i+1] == '-')
            {
                cout<<2;
            }
            if(i != borze.length() - 1)
            {
                i++;
            }
        }
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  The Borze language encodes digits as:
    - "." → 0
    - "-." → 1
    - "--" → 2
  Traverse the string character by character and decode accordingly.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
