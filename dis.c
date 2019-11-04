#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int dis=a[0];
  for(int i=0;i<n;i++){
    if((a[i]-dis)<2){
      dis=a[i];
    }
    else{
      printf("%d",++dis);
      break;
    }
  }
  return 0;
}