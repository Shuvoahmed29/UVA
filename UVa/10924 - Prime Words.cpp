#include <bits/stdc++.h>
using namespace std;
/*-----------------SHUVO AHMED------------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)
#define For(i, n) for (ll i = 0; i < n; i++)
#define FOR(i,x,y) for(ll i=x;i<=y;i++)

#define vi vector<int>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define vp vector<pair<ll,ll>>
#define Pin(x,y) pb(mp(x,y))
#define fst first
#define snd second

#define yes "YES\n"
#define no "NO\n"
#define tc ll t; cin>>t; while(t--){solve();}
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mtc int main(){fast;tc;}
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define mod 1000000007
#define pi 3.14159265358979323846
inline void solve();//mtc
/*-----------------SHUVO AHMED--------------------------------*/
int main(){
    //fast;
    solve();
}
inline void solve(){
    string str;
    while(cin>>str){
        ll sum=0,p=0;
        For(i,str.size()){
            if(str[i]>='A' && str[i]<='Z')sum+=str[i]-38;
            if(str[i]>='a' && str[i]<='z')sum+=str[i]-96;
        }
        for(ll i=2;i<sum;i++)if(sum%i==0)p++;
        if(p==0)cout<<"It is a prime word.\n";
        else cout<<"It is not a prime word.\n";
    }
}