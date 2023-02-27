#include <iostream>
using namespace std;

int main() {
    int tcs;
    cin>>tcs;

    while (tcs--){
        int a,b;
        cin>>a>>b;

        if (b>3*a){
            cout<<"YES";
        } else {
            cout<<"NO";
        }
    }

    return EXIT_SUCCESS;
}
