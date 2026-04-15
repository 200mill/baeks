// problem : https://www.acmicpc.net/problem/3954

#include <stdio.h>
#include <string.h>

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
    unsigned int pointer = 0;
    unsigned int memory[M];
    char commands[C];
    char input[I];
    int inputPos = 0;
    unsigned int computeTime = 0;

    for (int i = 0; i < M; i++) memory[i] = 0;

    // get code, input
    fgets(commands, C, stdin);
    fgets(input, I, stdin);

    for(int i = 0; i < C; i++) {
        if(++computeTime == 5000000) {
            int open, close;
            // find loop bracket-> ??
            // command excute log + find patternz

            printf("Loops %d %d\n", open, close);
            return -1;
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
                    if (FindBracketO(commands, &i) == 1) return 1;
                break;
            case ']':
                if (memory[pointer] != 0) {
                    if (FindBracketC(commands, &i) == 1) return 1;
                }
                break;
            case '.':
                // printf("%c", memory[pointer]);
                // ignore
                break;
            case ',':
                memory[pointer] = (unsigned int)input[inputPos++];
                break;
            default:
                break;
        }
    }
    printf("Terminates\n");
    return -1;
}

int main() {
    int loops;
    scanf("%d", &loops);
    for(int i = 0; i < loops; i++) Compute();
    return 0;
}