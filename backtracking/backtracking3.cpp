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

vector<pair<long long int,long long int >> vect;

bool returnqueenpos(long long int n,long long int row)
{
  if(row==n)
    return true;
  for(long long int col=0;col<n;col++)
  {
    bool colval=true;
    for(long long int queen=0;queen<row;queen++)
      {
        if(vect[queen].second==col || vect[queen].second + vect[queen].first == (row+col) || vect[queen].second - vect[queen].first == (col-row) )
          {colval=false;break;}
      }
      if(colval)
      {
        vect[row]=make_pair(row,col);
        if(returnqueenpos(n,row+1))
          return true;
      }
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
      vect.assign(n,pair<long long int ,long long int>());
      bool sol=returnqueenpos(n,0);
      if(sol)
      {
        for(auto x:vect)
        {
          cout<<x.first<<" "<<x.second<<"\n";
        }
      }
      else
      {
        cout<<"Not possible"<<"\n";
      }
      
    }

   return 0;
}