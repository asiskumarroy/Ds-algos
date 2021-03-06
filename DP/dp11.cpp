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
    cout.tie(NULL);

    long long int t;
    cin>>t;

    while(t--)
    {
      long long int n,m;
      cin>>n>>m;

      vector<vector<int>> green(n,vector<int>(m,0));
      long long int max=0;
      for(long long int i=0;i<n;i++)
      {
        for(long long int j=0;j<m;j++)
        {
         cin>>green[i][j];
         if(green[i][j] > max)
            max=green[i][j];
        }
      }
      
      for(long long int i=1;i<n;i++)
      {
        for(long long int j=1;j<m;j++)
        {
           if(green[i][j]==0)
           continue;

           green[i][j]=1+min({green[i-1][j],green[i-1][j-1],green[i][j-1]});

           if(green[i][j] > max)
            max=green[i][j];

        }
      }
      
      cout<<max<<"\n";
      
    }
    return 0;
}