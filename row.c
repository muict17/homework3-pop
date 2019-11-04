#include<stdio.h>
int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  int a[n][m+1];
  for(int i=0;i<n;i++){
    for(int j=0;j<=m;j++){
      a[i][j]=0;
    }
  }
  int max=a[0][m],row;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d",&a[i][j]);
      a[i][m]=a[i][m]+a[i][j];
    }
    if(max<a[i][m]){
      max=a[i][m];
      row=i;
    }
  }
  printf("row %d",++row);
  return 0;
}