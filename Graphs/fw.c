// Program for Floyd-Warshall algorithm in C

#include<stdio.h>

int ar[10][10];

void floydWarshallFunc ()
{
 for (int k = 0; k < n; k++)
  for (int i = 0; i < n; i++)
   for (int j = 0; j < n; j++)
    if (ar[i][k] + ar[k][j] < ar[i][j])
     ar[i][j] = ar[i][k] + ar[k][j];
}

int main()
{
  int n;
  printf("Enter the number of vertices :");
  scanf("%d",&n);
  printf("\n");

  // Take input matrix
  for(int i=0;i<n;i++)
  for(int j=0;j<n;j++)
   {
    printf("ar[%d][%d]:",i,j);
    scanf("%d",&ar[i][j]);
   }

 floydWarshallFuc();

 // print output
 printf (" \n\n The shortest distances between every pair of vertices is:\n");
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < n; j++)
   printf ("%d\t", ar[i][j]);
  printf("\n");
 }
 return 0;
}
