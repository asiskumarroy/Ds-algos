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

vector<int> color;

vector<int> time_in, time_out;
int dfs_timer = 0;


void dfs(int s)
{
   color[s]=1;
   time_in[s]=dfs_timer++;
   cout<<s<<" ";
   for(auto i:adj[s])
   {
      if (color[i]==0)
      {
         color[i]=1;
         dfs(i);
      }
   }
   color[s]=2;
   time_out[s]=dfs_timer++;
}


int main()
{
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif

   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);



   int n,e,s; // nodes,edges and source

   cin>>n>>e>>s;

   adj.assign(n,vector<int>());
   color.assign(n,0);
   time_in.assign(n,0);
   time_out.assign(n,0);

   int a,b; // edges

   for(int i=0;i<e;i++)
   {
      cin>>a>>b;
      adj[a].push_back(b);
      adj[b].push_back(a); //comment in case of directed graph
   }

   dfs(s);
   return 0;

}