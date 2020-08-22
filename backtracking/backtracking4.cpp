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

vector<long long int > vect;
vector<long long int>vect1;

bool solve(long long int n,long long int i,long long int val)
{
  if(val==0)
    return true;
  if(val<0 || i>n-1)
    return false;

  for(long long int j=i;j<n;j++)
  {
    vect1.push_back(vect[j]);
    if(solve(n,j+1,val-vect[j]))
      return true;
    vect1.pop_back();

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
      long long int n;
      cin>>n;
      vect.assign(n,0);
      vect1.clear();
      long long int sum=0;
      for(long long int i=0;i<n;i++)
      {
        cin>>vect[i];
        sum+=vect[i];
      }
      if(sum%2==1)
        {cout<<"NO"<<"\n";continue;}

      bool sol=solve(n,0,sum/2);
      if(sol)
        {
          cout<<"YES"<<"\n";
          for(auto x:vect1)
            cout<<x<<" ";
          cout<<"\n";
        }
      else
        cout<<"NO"<<"\n";

    }

   
   return 0;
}