//2002번 문제 비밀편지
#include <stdio.h>
#include <string.h>

#define P(X, K) 3*X+K

int main(){
    char input[256] = {0,};
    int input_K;
    scanf("%d", &input_K);
    scanf("%s", input);
    for(int i = 1; i <= strlen(input); i++){
        input[i-1] = 90 - (((input[i-1] - P(i, input_K)) % 65) % 26);
    }
    printf("%s\n", input);
}