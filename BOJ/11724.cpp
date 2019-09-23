//
// Created by 신원준 on 2019. 09. 23..
//

#include <iostream>
#include <stack>

using namespace std;

int N, M, V, i, j, cur;
bool adj_mat[1001][1001] = {false, }, visited[1001] = {false, };

void DFS() {
	// DFS
	stack<int> s;
	s.push(V);
	
	while(!s.empty()) {
		cur = s.top();
		s.pop();
		if(visited[cur]) continue;
		visited[cur] = true;
		
		for(i=N; i>=1; i--) {
			if(adj_mat[cur][i] && !visited[i]) {
				s.push(i);
			}
		}
	}
}

int main() {
	// stdandard i/o -> file i/o
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	
	cin >> N >> M;
	V=1;
	
	for(i=0; i<M; i++) {
		int x, y;
		cin >> x >> y;
		
		adj_mat[x][y] = adj_mat[y][x] = true;
	}
	
	bool flag;
	int cnt = 1;
	
	while(1) {
		DFS();
		flag = false;
		for(i=1; i<=N; i++) {
			if(!visited[i]) {
				V = i;
				cnt++;
				flag = true;
				break;
			}
		}
		if(!flag) break;
	}
	
	cout << cnt << endl;
	
    return 0;
}