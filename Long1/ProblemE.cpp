#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include <utility>
#include <bitset>
#include <cctype>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>

using namespace std;

typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;

short CC_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define PP getchar();
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

//function templates
template <class T>void DA(T* x, int l){for(int i=0; i<l;i++)cout<<"["<<i<<"]>> "<<x[i]<<'\n';}
template <class T>inline void sary(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <class T>void tobin(T n,char*bin){int pos= 1<<((int)log2(n));while(pos>=1){if((n & pos)==0)*bin='0';else*bin='1';pos>>=1;bin++;}*bin='\0';}
template <class T>int strOccur(string&s,T&tgt){int oc= 0, p= s.find(tgt);while(p != string::npos){p = s.find(tgt, p+1);oc++;}return oc;}
template <class T>LL factorial(T n){LL f= n;while(--n){f*= n;}return f;}
template <class T>inline T LCM(T x,T y){return((x*y)/__gcd(x,y));}
int bigMod(int b,int e,int m){if(e==0)return 1;if(!e&1){int temp=bigMod(b,e/2,m)%m;return(temp*temp)%m;}else return((b%m)*(bigMod(b,e-1,m))%m)%m;}
inline LL POW(LL base, int exp){LL p= 1; while(exp-->0){p *= base;} return p;}
bool ispal(const string& str){int len= str.length();for(int i= 0; i<len/2; i++){if(str[i]==str[len-i-1]){}else return false;}return true;}
bool comp(const int& a,const int& b){return a>b;}

LL todec(string& num)
{
    LL dec= num[0] - '0';
    for(int i=1; num[i]; i++){
        dec*= 2;
        dec+= num[i] - '0';
    }
    return dec;
}

void solve(void){
    int Tc;
    int n;

    cin>>Tc;

    int a, b,c,d;
    string sa, sb,sc,sd;
    bool same;

    for(int Case= 1; Case<=Tc; Case++){
        same = false;
//        if(Case == 1)cin.ignore();
        sf("%d.%d.%d.%d", &a,&b,&c,&d);
        cin.ignore();
        getline(cin, sa, '.');
        getline(cin, sb, '.');
        getline(cin, sc, '.');
        getline(cin, sd);

        if(a == todec(sa) &&
           b == todec(sb) &&
           c == todec(sc) &&
           d == todec(sd)){
            same = true;
        }



        pf("Case %d: %s\n", Case, ((same)?"Yes" : "No"));
    }

}


int main(void){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    solve();
//    char bin [111];
//    tobin(255, bin);
//    DD(bin)

//    DD(todec("11111111"))
    return 0;
}