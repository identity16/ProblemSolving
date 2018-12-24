//
// Created by 신원준 on 2018. 12. 24..
//

#include <cstdio>

int main() {
    int N;

    scanf("%d", &N);

    for(int i=1; i<=9; i++) {
        printf("%d * %d = %d\n", N, i, N*i);
    }

    return 0;
}