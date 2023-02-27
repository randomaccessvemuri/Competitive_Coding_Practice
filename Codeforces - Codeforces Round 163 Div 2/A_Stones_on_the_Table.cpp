//  A. Stones on the Table

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define init(arr, val) memset(arr,val,sizeof(arr))
#define loop(i, a, b) for(int i=a;i<b;i++)
#define loopr(i, a, b) for(int i=a;i>=b;i--)
#define loops(i, a, b, step) for(int i=a;i<b;i+=step)
#define looprs(i, a, b, step) for(int i=a;i>=b;i-=step)
#define loopvec(v1) for(auto x: v1)
using ull = unsigned long long int;
using ll = long long;
using ld = long double;
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

int main() {
    int TCs;
    cin >> TCs;

    string stones;
    cin >> stones;

    char on_hand='X';
    int counter = 0;

    loopvec(stones) {
        if (x==on_hand) counter +=1;
        on_hand = x;
    }
    ☺
    cout << counter;
}
