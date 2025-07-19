//============================================================================
// 490A. Team Olympiad - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Forms the maximum number of teams where each team consists of
//              one participant from each skill category: 1 (programming),
//              2 (math), and 3 (PE). Outputs total teams and participant indices.
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

int main() {
    FAST_IO;

    int n; cin>>n;

    vector<int> t(n);
    vector<int> a(3);

    vector<int> p;
    vector<int> m;
    vector<int> pe;



    for(int i=0 ;i<n; i++)
    {
        cin>>t[i];
        if(t[i] == 1)
        {
            a[0]++;
            p.push_back(i+1);
        }
        else if(t[i] == 2)
        {
            a[1]++;
            m.push_back(i+1);
        }
        else if(t[i] == 3)
        {
            a[2]++;
            pe.push_back(i+1);
        }
    }

    if(a[0] == 0 || a[1] == 0 || a[2] == 0)
    {
        cout<<0<<endl;
    }
    else
    {
        int team = min(a[0], min(a[1],a[2]));
        cout<<team<<endl;//team
        for(int i=0; i<team;i++)
        {
            cout<<p[i]<<" "<<m[i]<<" "<<pe[i]<<endl;
        }

    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Count participants for each of the three skills (1, 2, 3).
  - The number of complete teams is the minimum count among the three.
  - Output team count and construct each team by picking one index from each group.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
