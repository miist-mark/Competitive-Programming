//Tapasweni Pathak
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cctype>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <bitset>
#include <deque>
#include <list>

#define FORALL(i,a,b)				for(int i = a; i < b; ++i)
#define FOREACH(i,a,b)				for(int i = a; i <= b; ++i)
#define REP(i,n) 		                for(int i = 0; i < n ; ++i)
#define REVALL(i,n) 		                for(int i = n ; i >= 0 ; --i)
#define REV(i,a,b) 		                for(int i = a ; i >= b ; --i)
#define TR(c,i) 				for(typeof((c).begin()) i=(c).begin();	i!=(c).end(); i++)

#define SC(n) 			                scanf("%d",&n)

#define MAX(a,b)				( (a) > (b) ? (a) : (b))
#define MIN(a,b)				( (a) < (b) ? (a) : (b))
#define CHECKBIT(n,b)				( (n >> b) & 1)
#define ODD(a)					(a & 1 ? 1 : 0)
#define EVEN(a)					(a & 1 ? 0 : 1)

#define MOD					1000000007
#define PI					3.1415925535897932384626433832795
#define INF 					1000000000 

#define PP 					pair<int,int> 
#define PB(a) 					push_back(a)
#define ALL(v) 					v.begin() , v.end() 
#define	VI    					vector<int> 
#define MII					map<int,int> 
#define MSI					map<string,int> 
#define VII					vector<vector<int> > 
#define VPP					vector<pair<int,int> > 

#define lli					long long int
#define ulli					unsigned long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    /*
    int T;
    SC(T);
    while (T--){
    }
    */

	int n, diff;
	cin >> n;
	int h, m, cashes = 1, min_cashes = 1;
	vector<int> time;
	while (n--){
		cin >> h >> m;
		time.push_back (h * 60 + m);
	}
	REP(i, time.size () - 1){
		int diff = time[i] - time[i + 1];
		diff = (diff < 0 ? -diff : diff); 
		if (diff < 1){
			++cashes;
			if (min_cashes < cashes){
				min_cashes = cashes;
			}
		}
		else {
			cashes = 1;
		}
	}
	cout << min_cashes << endl;

    return 0;
}
