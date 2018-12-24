//
// Created by 신원준 on 2018. 12. 24..
//

#include <cstdio>

int main() {
    int N;

    scanf("%d", &N);

    for(int i=N; i>=1; i--) {
        for(int j=1; j<=N; j++) {
            if(j <= i) {
                printf("*");
            }
        }

        printf("\n");
    }
    return 0;
}