#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

int binpow(int a, int b) {
    if (b == 0)
        return 1;
    int res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

ll gcd(ll a,ll b)
{
    if (b==0) return a;
    return gcd(b,a%b);
}
string to_upper(string a)
{
    for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A';
    return a;
}
 
string to_lower(string a)
{
    for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A';
    return a;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n,x,y,c=0;
    string s;
    cin>>n>>x>>y;
    cin>>s;
    for (int i=1;i<n;++i)
    {
        if (s[i]=='1'&&s[i-1]=='0')
        {
            ++c;
        }
    }
    if (s[n-1]=='0')
    {
        ++c;
    }
    if (c)
    {
        cout<<y+(min(x,y)*(c-1));
    }
    else
    {
        cout<<0;
    }
    return 0;
}