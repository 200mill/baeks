// problem : https://www.acmicpc.net/problem/2733

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Function reviewed : (discord)@pnyani
void Fuck() { // this function reads command
    // init
    size_t capacity = 256;
    char commands[128000] = {0};

    //read command
    size_t current = 0;
    for(;;) {
        char input[101];
        if(!fgets(input, sizeof(input), stdin)) break;

        if(strcmp(input, "end\n") == 0 || strcmp(input, "end") == 0) break;

        // read commands; per line
        
        for(int i = 0; i < 101; i++) {
            if(input[i] == '%' || input[i] == 0) { // if find "%" or Empty(End-of-Line) or final

                for(int p = 0; p < i; ++p) {
                    // check character
                    if(strchr("<>-+[].,", input[p]) != NULL) {
                        commands[current] = input[p];
                        current++;
                    }
                }
                commands[current] = 0;
                break;
            }
        }
    }
    if(FuckCompute(commands) == 1) {
        printf("COMPILE ERROR\n");
    }
}

int FuckCompute(char* commands) {
    unsigned short pointer = 0;
    unsigned char memory[32768] = {0};
    int len = strlen(commands);

    // check bracket
    {
        int depth = 0;
        for(int i = 0; i < len; i++) {
            if(commands[i] == '[') depth++;
            else if(commands[i] == ']') depth--;
            if(depth<0) return 1;
        }
        if(depth != 0) return 1;
    }

    for(int i = 0; i < len; i++) {
        switch(commands[i]) {
            case '>':
                if(pointer == 32767)
                    pointer = 0;
                else
                    pointer++;
                break;
            case '<':
                if(pointer == 0)
                    pointer = 32767;
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
                if(memory[pointer] == 0)
                    if(FindBracketO(commands, &i) == 1) return 1;
                break;
            case ']':
                if(memory[pointer] != 0)
                    if(FindBracketC(commands, &i) == 1) return 1;
                break;
            case '.':
                printf("%c", memory[pointer]);
                break;
            default:
                break;
        }
    }
    printf("\n");
    return 0;
}

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

int FindBracketC(char* commands, int *index) {
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

int main() {
    int loops;
    scanf("%d", &loops);
    getchar();

    for(int i = 1; i <= loops; i++) {
        printf("PROGRAM #%d:\n", i);
        Fuck();
    }
}