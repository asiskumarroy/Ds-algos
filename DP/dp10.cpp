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


long long int calc_hist(vector<int> vect)
{
      long long int max_area=0;
      stack <int> s;
      long long int i=0;
      while(i<vect.size())
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
      return max_area;
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

   long long int n,m;
   cin>>n>>m;

   vector<vector<int>> vect(n,vector<int>(m,0));

   for(long long int i=0;i<n;i++)
      for(long long int j=0;j<m;j++)
         cin>>vect[i][j];

   vector<int> vect_hist(m,0);
   long long int max_area=0;
   for(long long int i=0;i<n;i++)
   {
      for(long long int j=0;j<m;j++)
         if(vect[i][j]==0)
            vect_hist[j]=0;
         else
            vect_hist[j]+=1;

      long long int area = calc_hist(vect_hist);
      if(area > max_area)
      max_area = area;
   }
   cout<<max_area<<"\n";
   return 0;
}