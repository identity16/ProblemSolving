//
// Created by 신원준 on 2018. 12. 24..
//

#include <cstdio>

int main() {
    int N;

    scanf("%d", &N);

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            if(j <= N-i) {
                printf(" ");
            } else if(j == N) {
                printf("*");
            } else {
                if(i == N) {
                    printf("**");
                } else if(j == N-i+1) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }

        printf("\n");
    }
    return 0;
}