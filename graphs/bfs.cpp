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
vector< bool > used;

int main()
{
   
   #ifndef ONLINE_JUDGE
   freopen("inputx.txt","r",stdin);
   freopen("outputx.txt","w",stdout);
   #endif

   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n,e; // no. of nodes and edges and source
    cin>>n>>e;

    int a,b;

    adj.assign(n,vector<int>());
    used.assign(n,false);

    for (int i=0;i<e;i++)
    {
      cin>>a>>b;
      cout<<a<<b;
      adj[a].push_back(b);
      adj[b].push_back(a);  // comment for directed graph
    }

      for(int i=0;i<n;i++)
      {
         if(used[i]==false)
         {
             queue <int >q;
             q.push(i);
             used[i]=true;

             while(q.empty()==false)
             {
               int v=q.front();
               cout<<v<<" ";
               q.pop();
               for(auto x : adj[v])
               {
                  if(used[v]==false)
                  {
                     used[v]=true;
                     q.push(v);
                  }
               }

            }
         }
      }

   
   return 0;
}