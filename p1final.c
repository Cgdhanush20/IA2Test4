#include<stdio.h>
#include<math.h>
float input_radius()
{
  float radius;
  printf("Enter the radius of the camel:");
  scanf("%f",&radius);
  return radius;
}
float input_height()
{
  float height;
  printf("\nEnter the height of the camel:");
  scanf("%f",&height);
  return height;
}
float input_length()
{
  float length;
  printf("\nEnter the length of the camel:");
  scanf("%f",&length);
  return length;
}
float find_weight(float radius,float height,float length)
{
  float weight;
  weight=3.14*(radius*radius*radius)*(sqrt(height*length));
  return weight;
}
void output(float weight)
{
  printf("\n%fkg is the weight of the camel\n",weight);
}
int main()
{
  float radius,height,length,weight;
  radius=input_radius();
  height=input_height();
  length=input_length();
  weight=find_weight(radius,height,length);
  output(weight);
  return 0;
}