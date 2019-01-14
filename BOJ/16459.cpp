//
// Created by 신원준 on 2018. 12. 26..
//
#define N_STORY 100

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <regex>

using namespace std;

int main() {
    int i=0, n_story=0;
    string story[N_STORY + 1];
    string who, where, what;

    for(i=0; i<N_STORY; i++) {
        getline(cin, story[i]);

        // "0"이 입력되었을 때
        if(story[i] == "0") {
            n_story = i;
            break;
        }
    }

    // WHO, WHERE, WHAT
    getline(cin, who);
    getline(cin, where);
    getline(cin, what);

    i=0;

    while(i < n_story) {
        string result;
        result = regex_replace(story[i], regex("WHO"), who);
        result = regex_replace(result, regex("WHERE"), where);
        result = regex_replace(result, regex("WHAT"), what);
        cout << result << endl;
        i++;
    }

    return 0;
}