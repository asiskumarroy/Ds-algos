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

   long long int t;
   cin>>t;
   while(t--)
   {
      string a,b;
      cin>>a>>b;
      a=" "+a;
      b=" "+b;
      long long int n1=a.size();
      long long int n2=b.size();
      vector<vector<bool>> gp(n1,vector<bool>(n2,false));
      gp[0][0]=true;
      for(long long int i=1;i<n1;i++)
      {
        if(a[i]>='A' && a[i]<='Z')
          gp[i][0]=false;
        else
          gp[i][0]=gp[i-1][0];
      }

      for(long long int i=1;i<n1;i++)
      {
        for(long long int j=1;j<n2;j++)
        {
          if(a[i]==b[j])
          {
            if(a[i]>='a' && a[i]<='z')
              gp[i][j]=gp[i-1][j] | gp[i-1][j-1];
            else
              gp[i][j]=gp[i-1][j-1];
          }
         else if(a[i]>='A' && a[i]<='Z')
          {
            gp[i][j]=false;
          }
          else
          {
            if((a[i]-32) == b[j])
              gp[i][j]=gp[i-1][j-1];
            else
              gp[i][j]=gp[i-1][j];
          }

        }
      }
      if(gp[n1-1][n2-1])
        cout<<"YES"<<"\n";
      else
        cout<<"NO"<<"\n";
      
   }
   return 0;
}