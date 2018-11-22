//
// Created by 신원준 on 2018. 11. 22..
//
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef struct {
    int row;
    int col;
    int count = 0;
} Point;

class MazeMaker {
public:
    int longestPath(const vector<string> &maze, int startRow, int startCol,
            const vector<int> &moveRow, const vector<int> &moveCol) {
        vector<vector<int>> counts;
        queue<Point> points;

        const auto rowNum = static_cast<const int>(maze.size());
        const auto colNum = static_cast<const int>(maze[0].length());
        const auto moveLen = static_cast<const int>(moveRow.size());

        // counts 초기 값 지정
        for (int i=0; i<rowNum; i++) {
            vector<int> row;
            for (int j=0; j<colNum; j++) {
                if(maze[i][j] == '.' && (i != startRow || j != startCol)) {
                    row.push_back(0);
                } else {
                    row.push_back(-1);
                }
            }
            counts.push_back(row);
        }

        // 시작점 Push
        points.push(Point{startRow, startCol});

        while(!points.empty()) {
            // 이동 기준점 Pop;
            Point current = points.front();
            points.pop();

            // 모든 방향에 대한 수행
            for(int i=0; i<moveLen; i++) {
                Point next = {current.row + moveRow[i], current.col + moveCol[i], current.count + 1};
                // 이동 가능하면
                if(next.row < rowNum && next.row >= 0
                && next.col < colNum && next.col >= 0
                && maze[next.row][next.col] == '.') {
                    // 처음 간 위치면 이동 횟수 저장하고 현재 위치 Push
                    if(counts[next.row][next.col] == 0) {
                        counts[next.row][next.col] = next.count;
                        points.push(next);
                    }
                }
            }
        }

        int max = 0;
        for (const auto &i : counts) {
            for (int j : i) {
                // 방문하지 않은 점이 존재하면 -1 리턴
                if(j == 0) {
                    return -1;
                }

                // Max 값 갱신
                if(j > max) {
                    max = j;
                }
            }
        }

        return max;
    }
};

int main() {
    MazeMaker mm;
    vector<string> maze;
    int startRow;
    int startCol;
    vector<int> moveRow, moveCol;

    maze = {
        "...",
        "...",
        "..."
    };

    startRow = 0;
    startCol = 1;

    moveRow = {1, 0, -1, 0};
    moveCol = {0, 1, 0, -1};

    cout << "0. " << mm.longestPath(maze, startRow, startCol, moveRow, moveCol) << endl;

    maze = {
            "...",
            "...",
            "..."
    };

    startRow = 0;
    startCol = 1;

    moveRow = {1, 0, -1, 0, 1, 1, -1, -1};
    moveCol = {0, 1, 0, -1, 1, -1, 1, -1};

    cout << "1. " << mm.longestPath(maze, startRow, startCol, moveRow, moveCol) << endl;

    maze = {
            "X.X",
            "...",
            "XXX",
            "X.X"
    };

    startRow = 0;
    startCol = 1;

    moveRow = {1, 0, -1, 0};
    moveCol = {0, 1, 0, -1};

    cout << "2. " << mm.longestPath(maze, startRow, startCol, moveRow, moveCol) << endl;

    maze = {
            ".......",
            "X.X.X..",
            "XXX...X",
            "....X..",
            "X....X.",
            "......."
    };

    startRow = 5;
    startCol = 0;

    moveRow = {1, 0, -1, 0, -2, 1};
    moveCol = {0, -1, 0, 1, 3, 0};

    cout << "3. " << mm.longestPath(maze, startRow, startCol, moveRow, moveCol) << endl;

    maze = {"......."};

    startRow = 0;
    startCol = 0;

    moveRow = {1, 0, 1, 0, 1, 0};
    moveCol = {0, 1, 0, 1, 0, 1};

    cout << "4. " << mm.longestPath(maze, startRow, startCol, moveRow, moveCol) << endl;

    maze = {"..X.X.X.X.X.X."};

    startRow = 0;
    startCol = 0;

    moveRow = {2, 0, -2, 0};
    moveCol = {0, 2, 0, -2};

    cout << "5. " << mm.longestPath(maze, startRow, startCol, moveRow, moveCol) << endl;
    return 0;
}