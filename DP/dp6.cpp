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

   string str;
   cin>>str;
   int k=str.size();
   vector< vector<int> > vect(k,vector<int>(k,0));

   for(int i=0;i<vect.size();i++)
   vect[i][i]=1;

   for(int i=2;i<=k;i++)
   {
      for(int j=0;j<=k-i;j++)
      {
         if (str[j]==str[j+i-1])
         vect[j][j+i-1]=vect[j+1][j+i-2]+2;
         else
         vect[j][j+i-1]=max(vect[j][j+i-2],vect[j+1][j+i-1]);
         
      }
   }

   for(int i=0;i<k;i++)
   {
      for(int j=0;j<k;j++)
      cout<<vect[i][j]<<" ";
      cout<<"\n";
   }

   cout<<vect[0][k-1];

   return 0;

}
