//******Jai Hanuman*****************
//******Saket Kumaer*****************
#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long
#define ld long double

#define pb	push_back
#define scd(x)	scanf("%d",&x)
#define scld(x)	scanf("%ld",&x)
#define sclld(x)	scanf("%lld",&x)
#define fo(i,n)	for(int i=0;i<n;i++)
#define foc(i,k,n)	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
//==================================================================================
const int mod = 1000000007;
//==================================================================================
//-----------------------FUNCTIONS-------------------------------------------------------------------------------------------------------
//---Returns Pow(x,n)---------
ll power(int x,int n)
{
  int m = abs(n);
  ll ans=1;
    while(m)
    {
        if(m%2==0)
        x=x*2;
        else
        {
            ans=ans*x;
            x=x*x;
        }
    	m=m/2;
    }
    return ans;
}

// Returns factorial of n --------
ll fact(int n) 
{ 
    ll res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 

//Returns nCr--------------------
int nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
//----------------------------------------------------------------------------------------------------------------------------------------



int main()
{
ios_base::sync_with_stdio(0); 
cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        
    }
return 0;
}
