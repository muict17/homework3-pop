#include <stdio.h>


int main() {
  int n,count_open=0,count_close=0;
  scanf("%d",&n);
  char arr[n];
  for(int i=0;i<n;i++){
    scanf("%c",&arr[i]);
    if(arr[i]=='('){
      count_open++;
    }
    else{
      count_close++;
    }
  }
  if(count_open==count_close){
    printf("complete");
  }
  else{
    printf("uncomplete");
  }
  return 0;
}