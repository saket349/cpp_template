//******Jai Hanuman*****************
//******Saket Kumaer*****************
#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long
#define ld long double

#define pb		push_back
#define scd(x)		scanf("%d",&x)
#define scld(x)		scanf("%ld",&x)
#define sclld(x)	scanf("%lld",&x)
#define fo(i,n)		for(int i=0;i<n;i++)
#define fof(i,k,n)	for(int i=k;i<n;i++)
#define fob(i,k,n)	for(int i=n-1;i>=k;i--)
#define modpro(a,b) ((a%mod)*(b%mod))%mod
#define modsum(a,b) ((a%mod)+(b%mod))%mod
//==================================================================================
const int mod = 1000000007;
//==================================================================================
//-----------------------FUNCTIONS-------------------------------------------------------------------------------------------------------
//---Returns x^n ---------
ll power(int x,int n)
{
  int m = abs(n);
  ll ans=1;
    while(m)
    {
        if(m%2==0)
        x=x*x;
        else
        {
            ans=ans*x;
            x=x*x;
        }
    	m=m/2;
    }
    return ans;
}

//---Returns modular exponential---------
ll Mpower(int x,int n)
{
    int m = abs(n);
    ll ans=1;
    while(m)
    {
        if(m%2==0)
        x=modpro(x,x);
        else
        {
            ans=modpro(ans,x);
            x=modpro(x,x);
        }
    	m=m/2;
    }
    return ans;
}

//Return GCD
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 //Return LCM
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
//----------------------------------------------------------------------------------------------------------------------------------------
//__gcd(a,b)  to calculate gcd of two numbers



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
