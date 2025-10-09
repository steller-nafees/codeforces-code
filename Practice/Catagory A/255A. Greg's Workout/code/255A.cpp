//============================================================================
// Platform      : Codeforces 
// Problem Title : 255A. Greg's Workout
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 09, 2025 
//
// Problem Statement:
//   Greg is a beginner bodybuilder. Today the gym coach gave him a training plan
//   with n exercises. Each exercise ai must be repeated exactly ai times.
//
//   Greg only does three types of exercises in a cyclic order:
//     1. "chest"
//     2. "biceps"
//     3. "back"
//
//   The first exercise is chest, the second biceps, the third back, the fourth chest,
//   and so on. Determine which muscle will get the most exercise during the training.
//
// Input:
//   The first line contains an integer n (1 ≤ n ≤ 20) — the number of exercises.
//   The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 25) — the repetitions
//   for each exercise.
//
// Output:
//   Print "chest" if the chest gets the most exercise, "biceps" if the biceps gets
//   the most exercise, or "back" if the back gets the most exercise.
//
// Constraints:
//   - 1 ≤ n ≤ 20
//   - 1 ≤ ai ≤ 25
//   - Time limit: 2 seconds
//   - Memory limit: 256 MB
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
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
#define vi(a,n) vector<int> a(n);
#define vl(a,n) vector<ll> a(n);
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
    int n; cin>>n;
    vi(a,n); INPUT_ARRAY(a,n);

    int chest = 0, biceps = 0, back = 0;
    for(int i=0; i<n; i++)
    {
        if(i%3 == 0) chest += a[i];
        else if(i%3 == 1) biceps += a[i];
        else back += a[i];
    }
    if(chest > biceps && chest > back) cout<<"chest"<<endl;
    else if(biceps > chest && biceps > back) cout<<"biceps"<<endl;
    else cout<<"back"<<endl;
}

int main()
{
    FAST_IO;

    //int t; cin>>t; 
    //while (t--) solve();
    
    //For single test case, comment the above 3 lines and uncomment below line
    solve();

    return 0;
}

/*
  💡 Solution Logic:
  - Initialize counters for each muscle: chest, biceps, back.
  - Iterate through the exercises:
      • Exercise i goes to chest if i % 3 == 0
      • Exercise i goes to biceps if i % 3 == 1
      • Exercise i goes to back if i % 3 == 2
      • Add the repetitions ai to the corresponding muscle counter.
  - Compare the totals and print the muscle with the maximum repetitions.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
