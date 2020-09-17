/*
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
   *                                                                 *
   *              *        *            *                            *
   *            * *      *   *        * *                            * 
   *           *  *     *     *      *  *                            *
   *          *   *    *       *    *   *                            * 
   *         *    *    *       *   *    *                            *
   *        *     *    *       *  *     *                            *
   *        * * * * *  *       *  * * * * *                          *
   *              *    *       *        *                            * 
   *              *     *     *         *                            *
   *              *        *            *                            *
   *                                                                 *
   *        E X P E R T   N O T   F O U N D                          *
   *                                                                 *
   *  Get introspected by your ethics, judged by your deeds          *
   *                                                                 *
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
*/

# include <bits/stdc++.h>
using namespace std;
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


int main()
{
      
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif

   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);

  long long int v,e,a,b;
  cin>>v>>e;
  vector< vector<long long int >> vect(v,vector<long long int >());

  for(long long int i=0;i<e;i++)
  {
    long long int a,b;
    cin>>a>>b;
    vect[a].push_back(b);
    vect[b].push_back(a);
  }

  vector<int> result(v,-1);
  result[0]=0;

  vector<bool> color(v,false);

  for(long long int V=1;V<v;V++)
  {
    for(auto x:vect[V]) /*finding put the adjacent vertices already coloured*/
    {
      if(result[x]!=-1)
        color[result[x]]=true;
    }

    /*finding out the color to be assigned to current vertex*/
    long long int cl;
    for(cl=0;cl<v;cl++)
      if(color[cl]==false)
        break;

    result[V]=cl;

    fill(color.begin(), color.end(), false);

  }

  for(auto x:result)
    cout<<x<<" ";
  cout<<"\n";
  return 0;
}