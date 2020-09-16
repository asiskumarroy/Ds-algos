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



void floodtraverse( vector<vector<long long int >> &vect,long long int x,long long int y,long long int k,long long int a)
{
  if(!(x>=0 && x<vect.size() && y>=0 && y<vect[0].size()))
    return;
  if(vect[x][y]==k)
    return;
  if(vect[x][y]!=a)
    return;

  vect[x][y]=k;

  floodtraverse(vect,x-1,y,k,a);
  floodtraverse(vect,x,y-1,k,a);
  floodtraverse(vect,x,y+1,k,a);
  floodtraverse(vect,x+1,y,k,a);


}


int main()
{
      
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif

   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);

  long long int t;
  cin>>t;
  while(t--)
  {
    long long int n,m;
    cin>>n>>m;
    vector<vector<long long int >>vect(n,vector<long long int >(m,0));
    for(long long int i=0;i<n;i++)
      for(long long int j=0;j<m;j++)
        cin>>vect[i][j];

    long long int x,y,k;
    cin>>x>>y>>k;

    floodtraverse(vect,x,y,k,vect[x][y]);

    for(long long int i=0;i<n;i++)
      for(long long int j=0;j<m;j++)
        cout<<vect[i][j]<<" ";
      cout<<"\n";

    cout<<"\n"<<"\n";

  }


   return 0;
}