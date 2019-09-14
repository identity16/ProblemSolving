//
// Created by 신원준 on 2019.09.14.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
	string A, B, C, D;
	
	cin >> A >> B >> C >> D;
	cout << stol(A+B) + stol(C+D) << endl;
    return 0;
}