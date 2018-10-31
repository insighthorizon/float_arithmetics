#include <stdio.h>

int main()
{
  double x;
  for (;;){
  printf("Hi, I'm double, you give me this number: ");
  scanf("%lf", &x);
  printf("I represent it as this number: %5.40f\n\n", x); }
  
  return 0;
}
