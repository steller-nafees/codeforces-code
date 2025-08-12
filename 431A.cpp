//============================================================================
// 431A. Black Square - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given the calories burned for stepping on each of the 4
//              types of black squares and a string representing the squares
//              stepped on, calculate the total calories burned.
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/


#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define OUTPUT_CONDITION(x) x?"YES" : "NO"
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
    int a1, a2, a3, a4;
    cin>>a1>>a2>>a3>>a4;
    int strip[4] = {a1,a2,a3,a4};
    string s; cin>>s;

    int cal = 0;
    for(char ch : s)
    {
        int num = ch - '0';
        cal += strip[num - 1];
    }
    cout<<cal<<endl;
}

int main()
{
    FAST_IO;

    solve();

    return 0;
}


/*
  💡 Solution Logic:
  - Read integers a1, a2, a3, a4 (calories for stepping on squares 1–4).
  - Read the string s (sequence of squares stepped on).
  - For each character in s:
      • Convert to integer (1–4).
      • Add the corresponding calories from the array strip[].
  - Output the total calories burned.
*/


/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
