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
#define mem(a,x) memset(a,x,sizeof(a))
using namespace std;
typedef pair<int,int> pii;

signed main()
{
    int n;
    cin >> n;
    if (n&1) cout << -1 << '\n';
    else
    {
        for (int i=30; i>0; i--)
        {
            if (n&(1<<i))
            {
                cout << (1<<i) << ' ';
            }
        }
        cout << '\n';
    }
}