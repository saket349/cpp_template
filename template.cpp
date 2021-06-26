//******Jai Hanuman*****************
//******Saket Kumaer*****************
#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long
#define ld long double
#define pi pair<int,int>
#define pl pair<long long, long long>
#define mp make_pair
#define f first
#define s second

#define pb		push_back
#define scd(x)		scanf("%d",&x)
#define scld(x)		scanf("%ld",&x)
#define sclld(x)	scanf("%lld",&x)
#define fo(i,n)		for(int i=0;i<n;i++)
#define fof(i,k,n)	for(int i=k;i<n;i++)
#define fob(i,k,n)	for(int i=n-1;i>=k;i--)
#define modpro(a,b) 	((a%mod)*(b%mod))%mod
#define modsum(a,b) 	((a%mod)+(b%mod))%mod
#define no	        cout<<"NO\n"
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
// Returns modulo inverse of a with respect
// to m using extended Euclid Algorithm
// Assumption: a and m are coprimes, i.e.,
// gcd(a, m) = 1
int modInverse(int a, int m)
{
	int m0 = m, y = 0, x = 1;
	if (m == 1)
		return 0;
	while (a > 1) {
		// q is quotient
		int q = a / m;
		int t = m;
		// m is remainder now, process same as
		// Euclid's algo
		m = a % m, a = t;
		t = y;
		// Update y and x
		y = x - q * y;
		x = t;
	}
	// Make x positive
	if (x < 0)
		x += m0;
	return x;
}
// asc sort
bool sortcol( const vector<ll>& v1,
               const vector<ll>& v2 ) {
                  
 return v1 < v2;
}
//----------------------------------------------------------------------------------------------------------------------------------------
//__gcd(a,b)  to calculate gcd of two numbers
/*
	priority_queue <T, vector<T>, greater<T>> pq; // 30    20    10    5    1
	
*/


int main()
{
ios_base::sync_with_stdio(0); 
cin.tie(0); cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--)
    {
     
    }
return 0;
}
