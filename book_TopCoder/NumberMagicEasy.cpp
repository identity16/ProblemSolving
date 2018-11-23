//
// Created by 신원준 on 2018. 11. 22..
//
#include <iostream>
#include <vector>
#include <set>

using namespace std;

class NumberMagicEasy {
public:
    int theNumber(string answer) {
        vector<vector<int>> cards;
        cards.push_back(vector<int>({1,2,3,4,5,6,7,8}));
        cards.push_back(vector<int>({1,2,3,4,9,10,11,12}));
        cards.push_back(vector<int>({1,2,5,6,9,10,13,14}));
        cards.push_back(vector<int>({1,3,5,7,9,11,13,15}));

        vector<int> result({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16});

        for(int i=0; i<answer.length(); i++) {
            if(answer[i] == 'Y') {
                // 교집합
                auto itr = set_intersection(cards[i].begin(), cards[i].end(), result.begin(), result.end(), result.begin());
                result.erase(itr, result.end());
            } else {
                // 차집합
                auto itr = set_difference(result.begin(), result.end(), cards[i].begin(), cards[i].end(), result.begin());
                result.erase(itr, result.end());
            }
        }

        return result[0];
    }
};

int main() {
    NumberMagicEasy nme;

    cout << "0. " << nme.theNumber("YNYY") << endl;
    cout << "1. " << nme.theNumber("YNNN") << endl;
    cout << "2. " << nme.theNumber("NNNN") << endl;
    cout << "3. " << nme.theNumber("YYYY") << endl;
    cout << "4. " << nme.theNumber("NYNY") << endl;

    return 0;
}