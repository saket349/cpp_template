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
#define modpro(a,b)  ((a%mod)*(b%mod))%mod
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
// Retruns modularExponentiation
ll modularExponentiation(ll x,ll n,ll M)
{
    ll result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=modpro(result,x);
        x=modpro(x,x);
        n=n/2;
    }
    return result;
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
ll nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
}
// Returns n^(-1) mod p 
unsigned long long modInverse(unsigned long long n, int p) 
{ 
    return modularExponentiation(n, p - 2, p); 
}

// Return nCr%p using Fermant's little theorem
unsigned long long nCrModPFermat(unsigned long long n, 
                                 int r, int p) 
{ 
    // Base case 
    if (r == 0) 
        return 1; 
  
    // Fill factorial array so that we 
    // can find all factorial of r, n 
    // and n-r 
    unsigned long long fac[n + 1]; 
    fac[0] = 1; 
    for (int i = 1; i <= n; i++) 
        fac[i] = (fac[i - 1] * i) % p; 
  
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p; 
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
