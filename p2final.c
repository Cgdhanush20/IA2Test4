#include<stdio.h>
#include<math.h>
typedef struct camel
{
  float radius,height,length,weight;
}camel;
camel input()
{
  camel c;
  printf("Enter the radius,height and length of the camel:");
  scanf("%f %f %f",&c.radius,&c.height,&c.length);
  return c;
}
void find_weight(camel *c)
{
  c->weight=3.14*(c->radius*c->radius*c->radius)*(sqrt(c->height*c->length));
}
void output(camel c)
{
  printf("\n%f is the weight of the camel\n",c.weight);
}
int main()
{
  camel c;
  c= input();
  find_weight(&c);
  output(c);
  return 0;
}