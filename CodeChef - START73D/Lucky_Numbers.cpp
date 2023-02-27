#include <iostream>
using namespace std;

bool lucky_checker(int i){
    bool stat = false;
    while (i!=0){
        if (i%10==7){
            stat = true;
            break;
        } else {
            i/=10;

        }
    }

    return stat;
}


int main() {

    int TC;
    cin>>TC;

    while(TC--){
        int tc;
        cin>>tc;
        auto stat = lucky_checker(tc);
        if (stat) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
