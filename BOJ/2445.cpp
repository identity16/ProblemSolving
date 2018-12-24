//
// Created by 신원준 on 2018. 12. 24..
//

#include <cstdio>
#include <stdlib.h>

int main() {
    int N;
    char **pyramid;

    scanf("%d", &N);

    pyramid = (char **) malloc(N * sizeof(char *));

    for(int i=0; i<N; i++) {
        pyramid[i] = (char *) malloc((2 * N+1) * sizeof(char));
        pyramid[i][2 * N] = '\0';

        for(int j=0; j<N; j++) {
            if(j<=i) {
                pyramid[i][j] = pyramid[i][2 * N - j - 1] = '*';
            } else {
                pyramid[i][j] = pyramid[i][2 * N - j - 1] = ' ';
            }
        }

        printf("%s\n", pyramid[i]);
    }

    for(int i=N-2; i>=0; i--) {
        printf("%s\n", pyramid[i]);
    }

    return 0;
}