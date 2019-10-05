//
// Created by 신원준 on 2019. 10 .05..
//

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // stdandard i/o -> file i/o
// 	freopen("in.txt","r",stdin);
// 	freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int i, j, A, B, C, N;
    map<string, int> menuA, menuB;
    vector<string> menuC;
    
    cin >> A >> B >> C;
    
    // get menu, price
    for(i=0; i<A; i++) {
        string menu;
        int price;
        cin >> menu >> price;
        
        menuA[menu] = price;
    }
    
    for(i=0; i<B; i++) {
        string menu;
        int price;
        cin >> menu >> price;
        
        menuB[menu] = price;
    }
    
    for(i=0; i<C; i++) {
        string menu;
        
        cin >> menu;
        
        menuC.push_back(menu);
    }
    
    cin >> N;
    
    long long totalA=0, totalB=0;
    int countC=0;
    
    for(i=0; i<N; i++) {
        string order;
        cin >> order;
        
        if(menuA[order] > 0) {
            totalA += menuA[order];
        } else if(menuB[order] > 0) {
            totalB += menuB[order];
        } else {
            countC++;
        }
    }
    
    if((countC > 1)
    || (totalA < 20000 && totalB > 0)
    || (totalA + totalB < 50000 && countC > 0)) {
        cout << "No" << endl;
    } else {
        cout << "Okay" << endl;
    }
	
    return 0;
}