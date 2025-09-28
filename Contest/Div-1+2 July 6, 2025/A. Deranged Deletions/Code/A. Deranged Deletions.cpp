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
bool is_derangement(const vector<int> &a, const vector<int> &b)
{

    for(int i=0; i<b.size(); i++)
    {
        if(a[i] == b[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    FAST_IO;

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i=0 ; i<a.size();i++)
        {
            cin>>a[i];
        }

        vector<int> org = a;
        sort(a.begin(), a.end());

        vector<int> b = a;

        for(int i=0 ;i<n-1;i++)
        {
            swap(b[i], b[i+1]);
        }
        if(is_derangement(org,b))
        {
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<b[0]<<" "<<b[1]<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
