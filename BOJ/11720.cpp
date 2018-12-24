//
// Created by 신원준 on 2018. 12. 24..
//

#include <cstdio>
#include <ctype.h>

int main() {
    int T, sum = 0;
    char ch;

    scanf("%d", &T);

    while(ch = getchar()) {
        if(ch == EOF) break;

        if(isdigit(ch)) {
            sum += ch - '0';
        }
    }

    printf("%d\n", sum);

    return 0;
}