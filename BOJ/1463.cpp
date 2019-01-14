//
// Created by 신원준 on 2018. 12. 24..
//

#include <cstdio>
#include <stack>
#include <vector>

using namespace std;

int main() {
    stack<int> n_stack;

    int N;

    scanf("%d", &N);

    vector<int> dp(static_cast<unsigned long>(N));

    fill(dp.begin(), dp.end(), -1);
    dp[0] = 0;

    n_stack.push(N);


    while(!n_stack.empty()) {
        int num = n_stack.top();

        if(dp[num-1] != -1) {
            n_stack.pop();
        } else {
            if(num % 3 == 0) {
                if(dp[(num / 3) - 1] != -1 && dp[num - 2] != -1) {
                    dp[num-1] = min<int>(dp[(num / 3) - 1], dp[num - 2]) + 1;
                } else {
                    n_stack.push(num / 3);
                    n_stack.push(num - 1);
                }
            } else if(num % 2 == 0) {
                if(dp[(num / 2) - 1] != -1 && dp[num - 2] != -1) {
                    dp[num-1] = min<int>(dp[(num / 2) - 1], dp[num - 2]) + 1;
                } else {
                    n_stack.push(num / 2);
                    n_stack.push(num - 1);
                }
            } else {
                if(dp[num - 2] != -1) {
                    dp[num-1] = dp[num - 2] + 1;
                } else {
                    n_stack.push(num - 1);
                }
            }
        }
    }

    printf("%d\n", dp[N-1]);

    return 0;
}