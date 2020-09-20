#include <stdio.h>
#include <math.h>

int main(){
  int n;
  int cnt = 0;
  int result;
  scanf("%d", &n);
  if(n==1){
    printf("wrong number\n");
    return 0;
  }
  else if(n%2==0)
    result = 2;
  else{
    for(int i = 3; i < sqrt(n); i += 2){
      if(n % i == 0){
        result = i;
        cnt++;
      }
      if(cnt > 1){
        printf("wrong number\n");
        return 0;
      }
    }
  }
  if(n/result==1){
    printf("wrong number\n");
    return 0;
  }
  printf("%d %d\n", result, n / result);
}
