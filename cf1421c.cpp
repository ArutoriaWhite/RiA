#include <bits/stdc++.h>
#define de(x) cout << #x << "=" << x << ", "
#define dd cout << '\n';
#define rep(i,j,k) for (int i=j; i<=k; i++)
#define SakuraMyWife ios::sync_with_stdio(0), cin.tie(0);
#define ff first
#define ss second
#define int long long
#define SZ(x) ((int)x.size())
#define pb push_back
using namespace std;
typedef pair<int,int> pii;

string s;

signed main()
{
    cin >> s;
    cout << 3 << '\n';
    cout << "L " << 2 << '\n';
    cout << "R " << 2 << '\n';
    cout << "R " << s.size()*2-1 << '\n';
}