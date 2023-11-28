#include<ctime>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
#include<vector>
#include<unordered_map>

using namespace std;
typedef long long LL;
const int test_num = 10;
string in_s = ".in", ans_s = ".ans";
const int N = 100010;
int n,m,hp;
void solve()
{
    if(m==0)
    {
        if(hp>2ll*n) printf("YES\n");
        else printf("NO\n");
        return ;
    }
    if(m+hp>n) printf("YES\n");
    else printf("NO\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	string in, ans;
	for (int i = 1; i <= 20; i ++ )
	{
		in = to_string(i) + in_s;
		ans = to_string(i) + ans_s;
		freopen(in.c_str(), "w", stdout);
        n = rand()%100000000+900000000;
        m = rand()%100000000+900000000;
        hp = rand()%100000000+900000000;
        if(i%10==0)
        {
            n=10;
            m=0;
            hp=i+1;
        }
        if(i==15)
        {
            n=10;
            m=5;
            hp=6;
        }
        if(i==16)
        {
            n=10;
            m=5;
            hp=5;
        }
        cout<<n<<" "<<m<<" "<<hp<<"\n";
		freopen(ans.c_str(), "w", stdout);
		//cout << i << endl;
		freopen(in.c_str(),"r",stdin);
		solve();
	}
}
