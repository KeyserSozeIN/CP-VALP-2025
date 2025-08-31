#include <bits/stdc++.h>
using namespace std;

#define f(a,b) for(ll i=a;i<b;i++)
#define ll long long int
#define pb(n) push_back(n)
#define endl "\n"

const ll mod = 10e9+7;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r" ,stdin);
    freopen("output.txt", "w" ,stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll l,r;
    cin>>l>>r; 
    
    ll ans=0;
    for(ll i=1;i<=r;i*=2){
        for(ll j=1;j<=r;j*=3){
            if((i*j)>=l){
                if((i*j)<=r)
                    ans++;
                else
                    break;
            }
        }
    }
    cout<<ans<<endl;

    return 0;

}