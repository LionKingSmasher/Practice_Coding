//20200920 2001번 최소대금 문제
#include <stdio.h>

int main(){
  double input;
  double result_pasta = 0, result_juice = 0;
  double result;
  for(int i = 0; i < 3; i++){
    scanf("%lf", &input);
    if(result_pasta == 0)
      result_pasta = input;
    else
      result_pasta = (result_pasta < input) ? result_pasta : input;
  }
  for(int i = 0; i < 2; i++){
    scanf("%lf", &input);
    if(result_juice == 0)
      result_juice = input;
    else
      result_juice = (result_juice < input) ? result_juice : input;
  }
  result = result_pasta + result_juice;
  result += result / 10;
  printf("%.1f\n", result);
}
