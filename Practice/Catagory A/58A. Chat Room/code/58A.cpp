//============================================================================
// Platform      : Codeforces 
// Problem Title : 58A. Chat Room
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : February 20, 2026 
//
// Problem Statement:
//   Vasya has recently learned to type and log on to the Internet. 
//   He immediately entered a chat room and decided to say hello to everybody.
//   Vasya typed the word s. It is considered that Vasya managed to say hello 
//   if several letters can be deleted from the typed word so that it resulted 
//   in the word "hello".
//
//   For example:
//     - "ahhellllloou" → YES
//     - "hlelo" → NO
//
//   Determine whether Vasya managed to say hello by the given word s.
//
// Input:
//   A single string s consisting of small Latin letters.
//   (1 ≤ |s| ≤ 100)
//
// Output:
//   Print "YES" if Vasya managed to say hello.
//   Otherwise, print "NO".
//
// Constraints:
//   - 1 ≤ |s| ≤ 100
//   - Time limit: 1 second
//   - Memory limit: 256 megabytes
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
#define output(a) cout<< a <<endl;
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define OUTPUT_ARRAY(a,n) for (int i = 0; i < n; i++) cout << a[i] << endl;
#define vii(a,n,val) vector<int> a(n,val);
#define INPUT_int(n) int n; cin>>n;
#define INPUT_ll(n) ll n; cin>>n;
#define INPUT_string(s) string s; cin>>s;
#define INPUT_char(c) char c; cin>>c;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define STR_LEN(s) ((int)s.size())
#define STR_REV(s) reverse(all(s))
#define STR_SORT_ASC(s) sort(all(s))
#define STR_SORT_DESC(s) sort(rall(s))
#define STR_TOLOWER(s) transform(all(s), s.begin(), ::tolower)
#define STR_TOUPPER(s) transform(all(s), s.begin(), ::toupper)
#define STR_CONTAINS(s, sub) (s.find(sub) != string::npos)
#define STR_SUBSTR(s, l, r) (s.substr(l, r))
#define STR_APPEND(s1, s2) s1 += s2
#define STR_STARTS_WITH(s, pref) (s.rfind(pref, 0) == 0)
#define STR_ENDS_WITH(s, suff) (s.size() >= suff.size() && s.compare(s.size() - suff.size(), suff.size(), suff) == 0)
#define STR_SPLIT(vec, s, delim) { string tmp; stringstream ss(s); while (getline(ss, tmp, delim)) vec.pb(tmp); }
#define STR_JOIN(res, vec, delim) { res = ""; for (int i = 0; i < (int)vec.size(); i++) { res += vec[i]; if (i + 1 != (int)vec.size()) res += delim; } }
#define STR_TO_INT(s) stoi(s)
#define STR_TO_LL(s) stoll(s)
#define INT_TO_STR(x) to_string(x)
#define MIN_HEAP(pq) priority_queue<int, vector<int>, greater<int>>pq;
#define MAX_HEAP(pq) priority_queue<int>pq;
#define PQ_INPUT(pq) for(int i = 0; i<n; i++){INPUT_int(x);pq.push(x);}
#define PQ_SUM(pq,sum) ll sum = 0;while(!pq.empty()){sum += pq.top();pq.pop();}
#define Output_precision(pr,res) cout << fixed << setprecision(pr) << res << endl;

// pair type
#define pii pair<int,int>
#define pll pair<long long,long long>

/* ================================================ */
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
    string s ; cin >> s;

    bool seen[5] = {false}; 

    for(char c : s)
    {
        if(c == 'h' && !seen[0]) seen[0] = true;
        else if(c == 'e' && seen[0] && !seen[1]) seen[1] = true;
        else if(c == 'l' && seen[1] && !seen[2]) seen[2] = true;
        else if(c == 'l' && seen[2] && !seen[3]) seen[3] = true;
        else if(c == 'o' && seen[3] && !seen[4]) seen[4] = true;
    }

    if(seen[0] && seen[1] && seen[2] && seen[3] && seen[4])
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    FAST_IO;

    solve();

    return 0;
}

/*
   Solution Logic:
   - The problem asks whether the word "hello" appears as a subsequence 
     inside the given string s.
   - A subsequence means characters must appear in order, but not necessarily consecutively.
   - We track the appearance of each character of "hello" in order:
       h → e → l → l → o
   - Using a boolean array of size 5:
       seen[0] checks for 'h'
       seen[1] checks for 'e'
       seen[2] checks for first 'l'
       seen[3] checks for second 'l'
       seen[4] checks for 'o'
   - We iterate through the string once and update the flags when the required 
     character appears in correct order.
   - If all flags become true, then "hello" is a subsequence.
   - Time Complexity: O(n)
   - Space Complexity: O(1)
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/