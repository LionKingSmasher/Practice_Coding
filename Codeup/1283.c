//20200920 1283번 주식 투자 문제
#include <stdio.h>

int main(){
  float input, result; //입력, 결과
  int day; //날짜
  float earn_money; //수익률
  scanf("%f", &input);
  result = input;
  scanf("%d", &day);
  for(int i = 0; i < day; i++){
    scanf("%f", &earn_money);
    result += result * (earn_money/100.0);
  }
  printf("%.0f\n", result-input);
  if((int)(result-input)<0)
    printf("bad\n");
  if((int)(result-input)>0)
    printf("good\n");
  if((int)(result-input)==0)
    printf("same\n");
}
