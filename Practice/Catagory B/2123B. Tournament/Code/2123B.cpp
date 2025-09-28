//============================================================================
// 2123B. Tournament - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Determines whether player j can possibly be among the last k
//              remaining players in a tournament where weaker players are
//              eliminated randomly.
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
        int n,j,k; cin >> n>> j >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int strong = *max_element(a.begin(), a.end());
        if(k==1)
        {
            if(a[j-1] == strong)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }

    return 0;
}


/*
  ## 💡 Solution Logic
  - For each test case:
    - If k > 1 → Player j can always survive since more than 1 survivor is allowed.
    - If k == 1:
        - Then only the strongest can survive.
        - So we check if player j has the highest strength.
          - If yes → YES
          - If not → NO
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
