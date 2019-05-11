//
// Created by 신원준 on 12/03/2019.
//

#include <cstdio>
long sides[100][5] = {0};

long P(long sides[100][5], int N);
void calcSides(int N);

int main() {
    int T, N, i;
    sides[3][0] = 2;
    sides[3][1] = 1;
    sides[3][2] = 1;
    sides[3][3] = 1;
    sides[3][4] = 2;


    scanf("%d", &T);

    for(i=0; i<T; i++) {
        scanf("%d", &N);
        printf("%ld\n", P(sides, N));
    }

    return 0;
}

void calcSides(int N) {
    if(N <= 4) return;
    
    // 이전 sides가 계산되지 않은 경우
    if(sides[N-2][0] == 0) calcSides(N-1);
    
    int i;
    int curMaxIdx = 4 - ((N + 1) % 5);
    
    for(i=0; i<5; i++) {
        if(i == curMaxIdx) {
            sides[N-1][curMaxIdx] = sides[N-2][curMaxIdx] + sides[N-2][(curMaxIdx + 1) % 5];
        } else {
            sides[N-1][i] = sides[N-2][i];
        }
    }

}

long P(long sides[100][5], int N) {
    switch(N) {
        case 1:
        case 2:
        case 3:
        return 1;
        case 4:
        return 2;
    }

    calcSides(N);

    return sides[N-2][4 - ((N) % 5)];
}