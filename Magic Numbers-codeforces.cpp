#include<bits/stdc++.h>

using namespace std ;

typedef long long int ll ;
typedef unsigned long long int ull ;
typedef unsigned long int ul ;
typedef long double ld ;

#define line cout<<'\n'
#define F first
#define S second
#define R return
#define C continue 
#define pb push_back 
#define pf push_front
#define mp make_pair
#define mod1 1000000007

#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vii vector <vector <int> >
#define vs vector <string>
#define vpii vector <pair <int , int> >
#define vpll vector <pair <long , long> >
#define Fi(i,L,R) for (int i = L; i <= R; i++)
#define Fd(i,R,L) for (int i = R; i >= L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;

void swap_int(int *a , int *b)
{
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

int solve (int testcase)
{
	int n ;
	cin >> n ;
	while (n)
	{
		if (n % 10 == 1)
		   n /= 10 ;
		else if (n % 100 == 14)
		   n /= 100 ;
		else if (n % 1000 == 144)
		   n /= 1000 ;
		else
		{
			cout << "NO" ;
			return 0 ;
		}
	}
	cout << "YES" ;
}

int main()
{
	fast 
	int t = 1 ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
