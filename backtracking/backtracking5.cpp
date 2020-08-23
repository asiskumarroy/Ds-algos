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

vector<long long int> colour;
vector<vector<long long int >>vect;
bool mcolouring(long long int v,long long int m,long long int n)
{
  if(v==n)
    return true;
  for(long long int i=1;i<=m;i++)
  {
    colour[v]=i;long long int j=0;
    for(;j<n;j++)
    {
      if(vect[v][j] && colour[j]==i)
        break;
    }
    if(j==n)
    {
      if(mcolouring(v+1,m,n))
        return true;
    }
    colour[v]=0;
  }
  return false;
}


int main()
{
   
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif

   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    long long int t;
    cin>>t;
    while(t--)
    {
      long long int n,a,b;
      cin>>n;
      vect.assign(n,vector<long long int>(n,0));
      colour.assign(n,0);
      long long int m;
      cin>>m;
      long long int e;
      cin>>e;

      for(long long int i=0;i<e;i++){
        cin>>a>>b;
        vect[a-1][b-1]=1;vect[b-1][a-1]=1;
      }

      bool sol=mcolouring(0,m,n);
      if(sol)
        cout<<1<<"\n";
      else
        cout<<0<<"\n";
    }
      
   return 0;
    
}