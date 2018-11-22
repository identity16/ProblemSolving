#include <iostream>
#include <vector>
#include <stack>

using namespace std;


// for Iterative
enum {EAST, SOUTH, WEST, NORTH};

typedef struct {
    int direction;
    int step;
} Node;

bool visited_tmp;
double probabilities[4];
//

// for Recursive
bool grid[100][100] = {false};
int vx[] = {1, -1, 0, 0};
int vy[] = {0, 0, 1, -1};
double prob[4];
//

class CrazyBot {
public:
    // Recursive Solution
    double getProbabilityR(int n, int east, int west, int south, int north) {
        prob[0] = east / 100.0;
        prob[1] = west / 100.0;
        prob[2] = south / 100.0;
        prob[3] = north / 100.0;

        return dfs(50, 50, n);
    }

    // Iterative Solution
    double getProbability(int n, int east, int west, int south, int north) {
        stack<Node> dfs_stack;
        stack<int> history;
        probabilities[EAST] = east / 100.0;
        probabilities[WEST] = west / 100.0;
        probabilities[SOUTH] = south / 100.0;
        probabilities[NORTH] = north / 100.0;

        int x=n, y=n, i, j, k;
        auto arr_len = 2 * n + 1;
        vector<vector<bool>> visited(                   // 방문 기록
                static_cast<unsigned long>(arr_len),
                vector<bool>(static_cast<unsigned long>(arr_len),
                             false));

        double result = 0, probability = 1;

        visited[x][y] = true;

        for(i=EAST; i<=NORTH; i++) {
            if(probabilities[i] == 0) continue;
            dfs_stack.push(Node{i, 0});
        }

        while(!dfs_stack.empty()) {
            Node node = dfs_stack.top();
            dfs_stack.pop();

            history.push(node.direction);

            probability *= probabilities[node.direction];

            movePosition(x, y, node.direction);
            visited_tmp = visited[x][y];
            if(!visited[x][y]) {
                visited[x][y] = true;

                if(node.step < n - 1) {
                    int opposite = getOppositeDirection(node.direction);

                    for(i=EAST; i<=NORTH; i++) {
                        if(i == opposite) continue;
                        if(probabilities[i] == 0) continue;
                        dfs_stack.push(Node{i, node.step + 1});
                    }
                } else {
                    result += probability;
                    if(!dfs_stack.empty()) {
                        stepBack(x, y, probability, dfs_stack.top(), visited, history);
                    }
                }
            } else {
                if(!dfs_stack.empty()) {
                    stepBack(x, y, probability, dfs_stack.top(), visited, history);
                }
            }
        }

        return result;
    }

private:
    // For Iterative
    int getOppositeDirection(int direction) {
        return (direction + 2) % 4;
    }

    void movePosition(int &x, int &y, int direction) {
        switch(direction) {
            case EAST:
                x += 1;
                break;
            case WEST:
                x -= 1;
                break;
            case SOUTH:
                y += 1;
                break;
            case NORTH:
                y -= 1;
                break;
            default:
                return;
        }
    }

    void stepBack(int &x, int &y, double &probability, Node &top, vector<vector<bool>> &visited, stack<int> &history) {
        bool k = true;
        while(history.size() > top.step) {
            if(k) {
                visited[x][y] = visited_tmp;
                k = false;
            } else {
                visited[x][y] = false;
            }

            movePosition(x, y, getOppositeDirection(history.top()));

            probability /= probabilities[history.top()];

            history.pop();
        }
    }

    // For Recursive
    double dfs(int x, int y, int n) {
        if(grid[x][y]) return 0;
        if(n == 0) return 1;

        grid[x][y] = true;
        double ret = 0;
        for(int i=0; i<4; i++) {
            ret += dfs(x + vx[i], y + vy[i], n - 1) * prob[i];
        }

        grid[x][y] = false;

        return ret;
    }
};

int main() {
    CrazyBot cb;

    cout << "===Iterative===" << endl;
    cout << "0. " << cb.getProbability(1, 25, 25, 25, 25) << endl;
    cout << "1. " << cb.getProbability(2, 25, 25, 25, 25) << endl;
    cout << "2. " << cb.getProbability(7, 50, 0, 0, 50) << endl;
    cout << "3. " << cb.getProbability(14, 50, 50, 0, 0) << endl;
    cout << "4. " << cb.getProbability(14, 25, 25, 25, 25) << endl;

    cout << endl;

    cout << "===Recursive===" << endl;
    cout << "0. " << cb.getProbabilityR(1, 25, 25, 25, 25) << endl;
    cout << "1. " << cb.getProbabilityR(2, 25, 25, 25, 25) << endl;
    cout << "2. " << cb.getProbabilityR(7, 50, 0, 0, 50) << endl;
    cout << "3. " << cb.getProbabilityR(14, 50, 50, 0, 0) << endl;
    cout << "4. " << cb.getProbabilityR(14, 25, 25, 25, 25) << endl;

    return 0;
}