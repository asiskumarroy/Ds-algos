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


vector< vector<int> > adj;
int timer=0;
vector<int> tin,low;
vector< bool > used;

void dfs(int s,int p=-1)
{
   used[s]=true;
   tin[s]=low[s]=timer++;
   int children=0;
   for(auto i:adj[s])
   {
      if(i==p)
      continue;
      if(used[i])
      {
         low[s]=min(low[s],tin[i]);
      }
      else
      {
         dfs(i,s);
         low[s]=min(low[s],low[i]);
         if(low[i]>=tin[s] && p!=-1)
         cout<<s<<" ";
         children++;
      }
   }
   if(p=-1 && children>1)
   cout<<s<<" ";        //instead push it to a set and the print 
}

int main()
{
      
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif

   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);



   int n,e,a,b;
   cin>>n>>e;

   adj.assign(n,vector<int> ());
   used.assign(n,false);
   tin.assign(n,0);
   low.assign(n,0);
   for(int i=0;i<e;i++)
   {
      cin>>a>>b;
      adj[a].push_back(b);
      adj[b].push_back(a);
   }

   for(int i=0;i<n;i++)
   {
      if (used[i]==false)
      {
         dfs(i);
      }
   }
   return 0;
}
