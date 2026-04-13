// problem : https://www.acmicpc.net/problem/3954

#include <stdio.h>

typedef struct BracketPos {
    int open;
    int close;
};

int Compute() {
    int M, C, I; // M = memory, C = code, I = input
    scanf("%d %d %d", &M, &C, &I);

    // memory init
    unsigned int memory[M] = {0};
    unsigned int pointer = 0;
    char code[C] = {0};
    char input[I] = {0};
    unsigned int computeTime = 0;

    

    for(int i = 0; i < C; i++) {
        if(++computeTime == 5000000) {
            // Loops?
        }
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
                
                break;
            case ']':
                
                break;
            case '.':
                // printf("%c", memory[pointer]);
                break;
            default:
                break;
        }
    }
    

    return -1;
}

)

int main() {
    int loops;
    scanf("%d", &loops);
    for(int i = 0; i < loops; i++) Compute();
    return 0;
}