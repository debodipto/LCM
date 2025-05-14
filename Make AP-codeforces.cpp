#include <bits/stdc++.h>
 
#define ll long long int
#define newline '\n'
#define space ' '
#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fore(i, l, r) for (int i = int(l); i < int(r); i++)
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAX 1000000
using namespace std;


int main(){
    speed;
    int test;
    cin >> test;
    while(test--){
        int a,b,c,m;
        cin >> a >> b >> c;
         m=-1;
         
        if((2*b-c)%a==0 && (2*b-c)>0){
            m=(2*b-c)/a;
        }
        else if((a+c)%(2*b)==0){

            m=(a+c)/(2*b);
            
        }
        else if((2*b-a)%c==0 && (2*b-a)>0){

            m=(2*b-a)/c;

        }

        

        if(m==-1){

            cout<<"NO\n";

        }else{

            cout<<"YES\n";

        }


    }
}
