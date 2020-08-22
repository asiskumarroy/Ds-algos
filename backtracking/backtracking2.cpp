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

vector<vector<long long int>> solve;

bool ratmaze(vector<vector<long long int >>vect,long long int x,long long int y,long long int n)
{
  if(x==n-1 && y==n-1 && vect[n-1][n-1]==1)
    {solve[x][y]=1;return true;}

  if(x<=n-1 && y<=n-1 && vect[x][y]==1)
  {

      solve[x][y]=1;

      if(ratmaze(vect,x+1,y,n))
      return true;

    if(ratmaze(vect,x,y+1,n))
      return true;

    solve[x][y]=0;
    return false;
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

     long long int n;
      cin>>n;
      solve.assign(n,vector<long long int >(n,0));
      vector<vector<long long int >>vect(n,vector<long long int >(n,0));

      for(long long int i=0;i<n;i++)
        for(long long int j=0;j<n;j++)
          cin>>vect[i][j];

      bool val=ratmaze(vect,0,0,n);
      if(val)
      {
        for(auto x:solve)
        {
          for(auto y:x)
            cout<<y<<" ";
          cout<<"\n";
        }
      }
      else
      {
        cout<<"No solution"<<"\n";
      }
      
   return 0;
}