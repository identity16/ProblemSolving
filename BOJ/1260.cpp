//
// Created by 신원준 on 2019. 09. 23..
//

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
	// stdandard i/o -> file i/o
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N, M, V, i, j, cur;
	
	cin >> N >> M >> V;
	
	bool adj_mat[N+1][N+1] = {false, }, visited[N+1] = {false, };
	
	for(i=0; i<M; i++) {
		int x, y;
		cin >> x >> y;
		
		adj_mat[x][y] = adj_mat[y][x] = true;
	}
	
	// DFS
	stack<int> s;
	s.push(V);
	
	while(!s.empty()) {
		cur = s.top();
		s.pop();
		if(visited[cur]) continue;
		visited[cur] = true;
		printf("%d ", cur);
		
		for(i=N; i>=1; i--) {
			if(adj_mat[cur][i] && !visited[i]) {
				s.push(i);
			}
		}
	}
	
	// Reset visited array
	for(i=1; i<=N; i++) {
		visited[i] = false;
	}
	
	printf("\n");
	
	// BFS
	queue<int> q;
	q.push(V);
	
	while(!q.empty()) {
		cur = q.front();
		q.pop();
		if(visited[cur]) continue;
		visited[cur] = true;
		printf("%d ", cur);
		
		for(i=1; i<=N; i++) {
			if(adj_mat[cur][i] && !visited[i]) {
				q.push(i);
			}
		}
	}
	
	printf("\n");
	
    return 0;
}