#include <iostream>
#include <algorithm>

using namespace std;


bool LikesPredicate(const std::vector<int> &a, const std::vector<int> &b) {
    return a.at(0) < b.at(0);
}

bool CommentsPredicate(const std::vector<int> &a, const std::vector<int> &b) {
    return a.at(1) < b.at(1);
}


int main() {
    int TC;
    cin >> TC;

    while (TC--) {

        int N;
        cin >> N;
        vector<int> Likes;
        int N1 = N;
        while (N1--) {
            int temp;
            cin >> temp;
            Likes.push_back(temp);
        }

        vector<int> Comments;
        while (N--) {
            int temp2;
            cin >> temp2;
            Comments.push_back(temp2);
        }


        vector<vector<int>> LikesCommentsIndex;
        for (int i = 0; i < Likes.size(); i++) {
            std::vector<int> temp;
            temp.push_back(Likes.at(i));
            temp.push_back(Comments.at(i));
            temp.push_back(i);
            LikesCommentsIndex.push_back(temp);
        }


        sort(LikesCommentsIndex.begin(), LikesCommentsIndex.end(), LikesPredicate);
        cout<<"I've been here";
        int highestLikes = LikesCommentsIndex.at(LikesCommentsIndex.size()-1).at(0);

        vector<vector<int>> Duplicates;
        for (auto x: LikesCommentsIndex) {
            if (x.at(0) == highestLikes) {
                Duplicates.push_back(x);
            }
        }

        sort(Duplicates.begin(), Duplicates.end(), CommentsPredicate);

        cout<<Duplicates.at(Duplicates.size()-1).at(2)<<"\n";

    }
    return 0;
}
