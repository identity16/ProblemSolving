//
// Created by 신원준 on 2018. 12. 24..
//

#include <cstdio>

int main() {
    int N, num, max = -1000000, min = 1000000;

    scanf("%d", &N);

    for(int i=0; i<N; i++) {
        scanf("%d", &num);

        if(num > max)
            max = num;

        if(num < min)
            min = num;
    }

    printf("%d %d\n", min, max);

    return 0;
}