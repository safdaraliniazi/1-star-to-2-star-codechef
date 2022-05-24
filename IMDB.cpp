/* https://www.codechef.com/LP1TO201/problems/IMDB
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int N,X;
        cin >> N >> X;
        vector<pair<int,int>> ds;
        int max_imdb = INT16_MIN;
        for(int i=0; i<N; i++)
        {
            int gb,imdb;
            cin >> gb >> imdb;
            ds.push_back(make_pair(gb,imdb));
            if(ds[i].first <= X)
            {
                max_imdb = max(max_imdb,ds[i].second);
            }
            
        }
        cout<<max_imdb<<endl;
        





    }
    


    return 0;
}