//
// Created by 신원준 on 2019.09.15..
//

#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	list<char> L;
	list<char>::iterator cursor;
	char S[600001];
	int  N, i;
	char ch, command, param;
	
	cin >> S;
	
	for(i=0; i<600001; i++) {
		if(S[i] == '\0') break;
		L.push_back(S[i]);
	}
	
	cursor = L.end();
	
	cin >> N;
	for(i=0; i<N; i++) {
		cin >> command;
		
		switch(command) {
			case 'L':
				if(cursor != L.begin()) {
					cursor--;
				}
				break;
			case 'D':
				if(cursor != L.end()) {
					cursor++;
				}
				break;
			case 'B':
				if(cursor != L.begin()) {
					cursor--;
					cursor = L.erase(cursor);
				}
				break;
			case 'P':
				cin >> param;
				
				L.insert(cursor, param);
				break;
		}
		
	}
	
	for(cursor=L.begin(); cursor!=L.end(); cursor++) {
		cout << *cursor;
	}
	
	
    return 0;
}
