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
      
      long long int n;
      cin>>n;
      vector <int > vect(n,0);
      long long int max_area=0;
      for(long long int i=0;i<n;i++)
      cin>>vect[i];

      stack <int> s;
      long long int i=0;
      while(i<n)
      {
        if(s.empty() || vect[s.top()]<=vect[i])
        s.push(i++);
        else
        {
          long long int top=s.top();
          s.pop();
          long long int area_now=vect[top] * (s.empty() ? i : (i-1-s.top()) );
          if(area_now > max_area)
          max_area=area_now;
        }
      }

      while(s.empty()==false)
      {
          long long int top=s.top();
          s.pop();
          long long int area_now=vect[top] * (s.empty() ? i : (i-1-s.top()) );
          if(area_now > max_area)
          max_area=area_now;
      }
      cout<<max_area<<"\n";
          
    }
  
   return 0;
      
      
}