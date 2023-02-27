#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int TC;
    cin>>TC;

    while (TC--){
        int N;
        cin>>N;
        std::vector<int> Nums;
        std::vector<int> bNums;
        int N1= N;
        while (N1--){
            int temp;
            cin>>temp;
            Nums.push_back(temp);
        }
        cout<<"Yay!";

        while (N!=1){
            for (int i = 0; i < Nums.size(); i = i+N){
                auto x = vector(Nums.begin()+i, Nums.begin()+N);
                sort(x.begin(), x.end());

                bNums.push_back(x.at(x.size()-1)-x.at(x.size()-2));
            }
            N-=1;
        }

        for (auto x: bNums){
            cout<<x<<" ";
        }
        cout<<"\n";

    }

    return 0;
}
