//============================================================================
// Codeforces Problem 1950C
// Clock Conversion
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Date: September 25, 2025
//
// Problem Statement:
// You are given a time in 24-hour format (HH:MM).
// Convert it into the 12-hour format with "AM" or "PM".
//
// Input:
//  - The first line contains an integer t (1 ≤ t ≤ 1000), 
//    the number of test cases.
//  - Each of the next t lines contains a string representing 
//    the time in 24-hour format (HH:MM).
//
// Output:
//  - For each test case, print the equivalent 12-hour format time.
//
// Constraints:
//  - Input time is always valid
//  - 00 ≤ HH ≤ 23, 00 ≤ MM ≤ 59
//  - Time limit: 1 second
//  - Memory limit: 256 MB
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

void solve() {
    string time; 
    cin >> time;

    // Split by ':'
    int pos = time.find(':');
    int hour = stoi(time.substr(0, pos));
    int minute = stoi(time.substr(pos + 1));

    string period = (hour >= 12) ? "PM" : "AM";

    if(hour == 0) {
        hour = 12; // Midnight case
    } else if(hour > 12) {
        hour -= 12; // Convert to 12-hour format
    }

    // Print with leading zeros
    cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << period << "\n";


}

int main()
{
    FAST_IO;
    

    int t ; cin>> t;
    while(t--) solve();

    return 0;
}

/*
  💡 Solution Logic:
  - Parse the input time string (HH:MM).
  - Extract hour (HH) and minute (MM).
  - Conversion rules:
      * 00:MM → 12:MM AM
      * 01:MM to 11:MM → same hour AM
      * 12:MM → 12:MM PM
      * 13:MM to 23:MM → (HH-12):MM PM
  - Print in 12-hour format with leading zeros for HH and MM.
*/


/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
