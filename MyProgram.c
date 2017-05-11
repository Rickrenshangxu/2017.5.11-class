#include <stdio.h>
int f[11][20],v[11][20];
int show(int,int);
int main()
{
    /*定义变量*/
    int m,n,i,j,k;
    /*赋初始值为0*/
    for(i=0;i<=11;i++)
       for(j=0;j<=20;j++)
          {f[i][j]=0;v[i][j]=0;}
    /*输入变量*/
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
       for(j=1;j<=m;j++)
          scanf("%d",v[i][j]);
    /*计算*/
    for(i=1;i<=n;i++)
       for(j=1;j<=m;j++)
       {
          max=0;
          for(k=0;k<=j;k++)
             if(f[i-1][k]+v[i][j-k]>max)
               max=f[i-1][k]+v[i][j-k];
          f[i][j]=max;
       }
}
