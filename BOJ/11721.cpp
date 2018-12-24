//
// Created by 신원준 on 2018. 12. 24..
//

#include <cstdio>

int main() {
    char ch;
    int i=0;

    while(ch = getchar()) {
        if(ch == EOF) break;
        i++;
        putchar(ch);

        if(i % 10 == 0) putchar('\n');
    }
    return 0;
}