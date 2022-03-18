#include<stdio.h>
int input_n()
{
  int n;
  printf("Enter the value of n:");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[])
{
  for(int i=0;i<n;i++)
    {
      printf("\nEnter the numbers in array:");
      scanf("%d",&a[i]);
    }
}
void sort(int n,int a[])
{
  int temp;
  for(int x = 0; x < n - 1; x++)
  {
     for(int y = 0; y < n - x - 1; y++)
        {
          if(a[y] > a[y + 1])
            {   
              temp = a[y];
              a[y] = a[y + 1];
              a[y + 1] = temp;
            }  
        }
  }
}
void output(int n,int a[])
{
  for(int i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
  printf("\n");
}
int main()
{
  int n,a[100];
  n=input_n();
  input_array(n,a);
  sort(n,a);
  output(n,a);
  return 0;
}