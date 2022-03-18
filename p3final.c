#include <stdio.h>
#include <math.h>
typedef struct camel
{
  float radius,height,length,weight;
int mood;
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
    c->weight=3.14*(c->radius*c->radius*c->radius)* (sqrt(c->height*c->length));
}
void find_mood(camel *c)
{
  if(c->radius<c->height && c->radius<c->length)
  {
    c->mood=0;
  }
  else if(c->height<c->length && c->height<c->radius)
  {
    c->mood=1;
  }
  else if(c->length<c->height && c->length<c->radius)
  {
    c->mood=2;
  }
}
void output(camel c)
{
  if(c.mood==0)
    {
  printf("\ncamel is sick\n& %f is the weight of the camel",c.weight);
    }
  else if(c.mood==1)
      {
  printf("\ncamel is happy\n& %f is the weight of the camel",c.weight);
      }
  else if(c.mood==2)
    {
  printf("\ncamel is tense & %f is the weight of the camel",c.weight);
    }
}
int main()
{
  camel c;
  c=input();
  find_weight(&c);
  find_mood(&c);
  output(c);
  return 0;
}