//============================================================================
// Platform      : Codeforces 
// Problem Title : 816A. Karen and Morning
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : February 12, 2026 
//
// Problem Statement:
//   Karen loves palindromes and believes waking up at a palindromic time
//   brings good luck.
//
//   The current time is given in 24-hour format as hh:mm.
//   Determine the minimum number of minutes Karen should sleep so that
//   when she wakes up, the time is a palindrome.
//
//   A palindrome is a string that reads the same forwards and backwards.
//   For example, 05:50 is a palindrome, but 05:39 is not.
//
// Input:
//   A single string in the format hh:mm (00 ≤ hh ≤ 23, 00 ≤ mm ≤ 59).
//
// Output:
//   Print a single integer — the minimum number of minutes needed
//   to reach the next palindromic time.
//
// Constraints:
//   - Time limit: 2 seconds
//   - Memory limit: 512 MB
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

// create maps
#define umap(name, keytype, valuetype) unordered_map<keytype, valuetype> name;
#define omap(name, keytype, valuetype) map<keytype, valuetype> name;

// pair type
#define pii pair<int,int>
#define pll pair<long long,long long>

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
    string time; cin >>time; 

    vector<int>palindromes = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};
    
    string hh = time.substr(0, 2);
    int hr = stoi(hh);
    int min = stoi(time.substr(3, 2));

    
    string reqmin = hh;
    reverse(reqmin.begin(), reqmin.end());
    int reversedHour = stoi(reqmin);
    
    int totalMin = hr * 60 + min;

    int n = palindromes.size();
    int res = 0; 
    for(int i = 0; i<n-1 ; i++)
    {
        if(totalMin == palindromes[i] || totalMin == palindromes[i+1])
        {
            res = 0;
            break;
        }     
        else if(totalMin >= palindromes[i] && totalMin <= palindromes[i+1])
        {
            res = palindromes[i+1] - totalMin;
            break;
        }
        else if(totalMin > palindromes[n-1])
        {
            res = 1440 - totalMin;
            break;
        }
        
    }
    cout << res << endl; 
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
   - Convert the given time (hh:mm) into total minutes from 00:00.
   - Pre-store all possible palindromic times of a day in minutes format.
   - Iterate through the palindromic times to find the next one
     that is greater than or equal to the current time.
   - The answer is the difference between the next palindromic time
     and the current total minutes.
   - Print that difference.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
