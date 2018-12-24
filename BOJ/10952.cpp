//
// Created by 신원준 on 2018. 12. 24..
//

#include <cstdio>

int main() {
    int A, B;

    // Loop until meeting EOF
    while(scanf("%d %d", &A, &B) != EOF) {
        if(A == 0 && B == 0) break;

        printf("%d\n", A+B);
    }

    return 0;
}