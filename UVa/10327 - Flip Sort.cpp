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

#define For(i,n) for(int i=0;i<n;i++)
typedef std::vector<ll> V;
#define vi vector<ll>

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb(x) push_back(x)
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/*-----------------SHUVO AHMED--------------------------------*/

int main(){
    int n,arr[1000];
    
    while(scanf("%d",&n)==1){
        for(int i = 0;i<n;++i)cin>>arr[i];
        
        ll cunt= 0;
        
        for(int i = 1;i<n;++i)
            for(int j = 0;j<i;++j)
                if(arr[j]>arr[i])
                    cunt++;
        
        cout<<"Minimum exchange operations : "<<cunt<<nl;
    }
}