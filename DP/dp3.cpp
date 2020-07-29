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

   string s1,s2;
   cin>>s1;
   cin>>s2;

   int r=s2.size();
   int c=s1.size();

   vector< vector<int> > vect1(r+1,vector<int>(c+1,0));

   for(int i=1;i<vect1[0].size();i++)
   vect1[0][i]=i;

   for(int j=1;j<vect1.size();j++)
   vect1[j][0]=j;

   for(int i=1;i<r+1;i++)
   {
      for(int j=1;j<c+1;j++)
      {
         if(s2[i-1]==s1[j-1])
         vect1[i][j]=vect1[i-1][j-1];
         else
         {
            vect1[i][j]=1+min({vect1[i][j-1],vect1[i-1][j],vect1[i-1][j-1]});
         }
      }
   }


   for(int i=0;i<vect1.size();i++)
   {
      for(int j=0;j<vect1[i].size();j++)
      {
         cout<<vect1[i][j]<<" ";
      }
      cout<<"\n";
   }


   cout<<vect1[r][c];

   return 0;

}
