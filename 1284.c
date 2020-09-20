#include <stdio.h>
#include <math.h>

int main(){
  int n;
  int cnt = 0;
  int result;
  scanf("%d", &n);
  for(int i = 1; i < sqrt(n); i += 2){
    if(n % i == 0){
      result = i;
      cnt++;
    }
    if(cnt > 1){
      printf("wrong number\n");
      return 0;
    }
  }
  printf("%d %d", i, n / i);
}
