//
// Created by 신원준 on 2018. 12. 24..
//

#include <cstdio>

int main() {
    int T, A, B;

    scanf("%d", &T);

    // Loop until meeting EOF
    for (int i = 1; i <= T; ++i) {
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", i, A+B);
    }

    return 0;
}