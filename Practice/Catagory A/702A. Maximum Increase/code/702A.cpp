//============================================================================
// Platform      : Codeforces 
// Problem Title : 702A. Maximum Increase
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 22, 2025 
//
// Problem Statement:
//   You are given an array consisting of n integers. Your task is to find the
//   maximum length of an increasing subarray of the given array.
//
//   A subarray is a sequence of consecutive elements of the array. A subarray
//   is called increasing if each element of this subarray is strictly greater
//   than the previous one.
//
// Input:
//   The first line contains a single positive integer n (1 ≤ n ≤ 10⁵) — the
//   number of integers.
//   The second line contains n positive integers a₁, a₂, …, aₙ (1 ≤ aᵢ ≤ 10⁹).
//
// Output:
//   Print the maximum length of an increasing subarray of the given array.
//
// Constraints:
//   - 1 ≤ n ≤ 10⁵
//   - 1 ≤ aᵢ ≤ 10⁹
//   - Time limit: 1 second
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
#define OUTPUT_CONDITION(x) x?"YES" : "NO"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define OUTPUT_2Values(o1,o2) cout<<o1<<" "<<o2<<endl
#define SORT_DESC(a) sort(a.begin(), a.end(),greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())
#define vi(a,n) vector<int> a(n);
#define vl(a,n) vector<ll> a(n);
#define INPUT_int(n) int n; cin>>n;
#define INPUT_ll(n) ll n; cin>>n;
#define INPUT_string(s) string s; cin>>s;
#define INPUT_char(c) char c; cin>>c;
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
    INPUT_ll(n);
    vl(a,n); INPUT_ARRAY(a,n);
    ll max_length = 0;
    ll current_length = 1;
    for(int i = 1; i<n; i++)
    {
        if(a[i] > a[i-1])
        {
            current_length++;
            max_length = max(max_length , current_length);
        }
        else
        {
            current_length = 1;
            max_length = max(max_length , current_length);
        }
    }
    cout <<(n > 1 ? max_length : 1) << endl;

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
    Solution Logic:
   - Read integer n and an array of n elements.
   - Initialize two counters: 
       current_length = 1 (for the current increasing subarray)
       max_length = 0 (to store the maximum found so far)
   - Traverse the array from index 1 to n-1:
       • If a[i] > a[i-1], it continues the increasing subarray → increment current_length.
       • Otherwise, reset current_length to 1 (new subarray starts).
       • Update max_length with the maximum of itself and current_length each step.
   - Output the final max_length which represents the length of the longest increasing subarray.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/