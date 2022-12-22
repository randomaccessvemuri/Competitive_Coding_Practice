#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define init(arr,val) memset(arr,val,sizeof(arr))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define loopvec(v1) for(auto x: v1)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define ld long double
#define ALL(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define DEBUG_VEC(v) for (auto x: v){std::cout<<x<<' ';}

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
const ll maxn = 1e5;
const ll inf = 1e9;
const double pi = acos(-1);

using namespace std;
using namespace __gnu_pbds;


//Slice vector into given dimensions along with step
string str_slice(string &data, int start, int end, int step) {
    string res;
    for (int i = start; i < end; i += step)
        res.push_back(data.at(i));

    return res;
}


string perSecondIter(string &currentQueue, int numOfStudents, int t){
    string newQueue = currentQueue;
    while (t--){
        string temp = newQueue;
        loop(i, 0, numOfStudents-1) {
            if (newQueue.at(i) == 'B' && newQueue.at(i+1) == 'G' ) {
                temp[i] = 'G';
                temp[i + 1] = 'B';
            }
        }
        newQueue = temp;
    }
    return newQueue;
}

int main() {
    FAST
    int numOfCharacters, t;
    cin >> numOfCharacters >> t;
    string Queue;
    cin>>Queue;

    cout << perSecondIter(Queue, numOfCharacters, t);

}
