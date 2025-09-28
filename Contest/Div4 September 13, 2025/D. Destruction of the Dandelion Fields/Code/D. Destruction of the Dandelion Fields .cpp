/*
بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
Start with the name of Allah
*/
//============================================================================
// D. Destruction of the Dandelion Fields (Codeforces 2148D)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Find the maximum total number of dandelions FJ can cut by
// ordering his visits to n fields. The lawnmower state toggles
// on fields with an odd number of dandelions and cuts when on.
//============================================================================
#include <bits/stdc++.h>
using namespace std;
// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define OUTPUT_CONDITION(x) x?"YES" : "NO"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define SORT_DESC(a) sort(a.begin(), a.end(),greater())
#define SORT_ASC(a) sort(a.begin(), a.end())
// Type aliases
using ll = long long;
using ull = unsigned long long;
void solve()
{
    int n;
    cin>>n;
    vector a(n),odds;
    INPUT_ARRAY(a,n);
    ll evenSum =0;
    for(auto x : a)
    {
        if(x % 2==0)
            evenSum += x;
        else
            odds.push_back(x);
    }
    if(odds.empty())
        cout<<0<<endl;
    else
    {
        sort(odds.begin(), odds.end(), greater()); // Use ll for sorting
        int cutOdds = (odds.size() + 1) / 2;
        ll result = evenSum;
        for(int i=0; i<cutOdds; i++)
        {
            result += odds[i];
        }
        cout<<result<<endl;
    }
}
int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
💡 Solution Logic
Input the number of test cases t.
For each test case:
• Read the number of fields n and the dandelions in each field a_i.
• The lawnmower is initially off. It toggles state (on/off) only when
visiting a field with an odd number of dandelions. It cuts dandelions
only when it is on.
• Separate the fields into two groups: those with an even number of
dandelions and those with an odd number.
• The optimal strategy is to cut dandelions from all even-dandelion fields
and from the odd-dandelion fields that contain the most dandelions.
• To achieve this:
1. Calculate the sum of dandelions from all fields with an even number
of dandelions (evenSum).
2. Store the dandelions from all odd-dandelion fields in a separate list.
3. If there are any odd-dandelion fields, FJ can ensure all even fields
are cut. He can visit one odd field (mower turns ON), then visit all
even fields, and then continue with the rest of the odd fields.
4. Sort the odd-dandelion fields in descending order. Since the mower
toggles with each odd field visit, he can only cut from the 1st, 3rd,
5th, etc., odd fields he visits. To maximize the total cut, he should
prioritize the odd fields with the most dandelions. He can cut
from (number of odd fields + 1) / 2 of them.
5. Sum evenSum with the dandelions from the largest
(number of odd fields + 1) / 2 odd fields.
6. If there are no odd fields, the mower never turns on, and no
dandelions can be cut. The answer is 0.
• The code correctly implements this greedy strategy.
Complexity: O(n log n) per test case, dominated by the sort operation.
*/
/*
Alhamdulillah, problem solved successfully!
الحمد لله الذي بنعمته تتم الصالحات
*/
