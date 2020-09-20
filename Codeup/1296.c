#include <stdio.h>

int main(){
  float input;
  scanf("%f", &input);
  input /= 4.0;
  printf("%d\n", (int)(input * input));
}
