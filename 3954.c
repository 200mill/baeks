// problem : https://www.acmicpc.net/problem/3954

#include <stdio.h>
#include <string.h>

struct BracketPos {
    int open;
    int close;
};

int FindBracketO(const char* commands, int* index) {
    int depth = 1;
    for(int i = *index + 1; i < strlen(commands); i++) {
        if(commands[i] == '[') depth++;
        else if(commands[i] == ']') depth--;
        if(depth == 0) {
            *index = i;
            return 0;
        }
    }
    return 1;
}

int FindBracketC(const char* commands, int *index) {
    int depth = 1;
    for(int i = *index - 1; i >= 0; i--) {
        if(commands[i] == ']') depth++;
        else if(commands[i] == '[') depth--;
        if(depth == 0) {
            *index = i;
            return 0;
        }
    }
    return 1;
}

int Compute() {
    int M, C, I; // M = memory, C = code, I = input
    scanf("%d %d %d", &M, &C, &I);

    // memory init
    unsigned int memory[M] = {0};
    unsigned int pointer = 0;
    char commands[C] = {0};
    char input[I] = {0};
    unsigned int computeTime = 0;
    struct BracketPos SelectedBracket;
    SelectedBracket.open = SelectedBracket.close = -1;

    // get code, input
    fgets(commands, C, stdin);
    fgets(input, I, stdin);



    for(int i = 0; i < C; i++) {
        if(++computeTime == 5000000) {
            printf("Loops %d %d\n", SelectedBracket.open, SelectedBracket.close);
        }
        switch(commands[i]) {
            case '>':
                if(pointer == M)
                    pointer = 0;
                else
                    pointer++;
                break;
            case '<':
                if(pointer == 0)
                    pointer = M;
                else
                    pointer--;
                break;
            case '+':
                memory[pointer]++;
                break;
            case '-':
                memory[pointer]--;
                break;
            case '[':
                if (memory[pointer] == 0) // loop open Br-O
                    if (FindBracketO(commands, &i) == 1) { return 1; }
                else {
                    SelectedBracket.open = pointer;
                }
                break;
            case ']':
                if (memory[pointer] != 0) {
                    SelectedBracket.close = pointer;
                    if (FindBracketC(commands, &i) == 1) return 1;
                }
                break;
            case '.':
                // printf("%c", memory[pointer]);
                // ignore
                break;
            default:
                break;
        }
    }
    return -1;
}

int main() {
    int loops;
    scanf("%d", &loops);
    for(int i = 0; i < loops; i++) Compute();
    return 0;
}