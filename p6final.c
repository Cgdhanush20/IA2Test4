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
int input_key()
{
  int key;
  printf("Enter the key element you want to serch:");
  scanf("%d",&key);
  return key;
}
int bin_search(int n,int a[],int key)
{
  int position;
  for(int i=0;i<n;i++)
    {
      if(a[i]==key)
      {
        position=i;
      }
    }
  return position;
}
void print_position(int key,int position)
{
  printf("%d is present in %d position",key,position);
}
int main()
{
  int n,key,a[100],position;
  n=input_n();
  input_array(n,a);
  sort(n,a);
  key=input_key();
  position=bin_search(n,a,key);
  print_position(key,position);
  return 0;
}