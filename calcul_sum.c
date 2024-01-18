#include <stdio.h>
#include <stdlib.h>



void func(int sum) {
  int a;
  int b;
  int sum = a+b;
  printf("sum is %d", sum);
}



int main()
{
    printf("Enter a=\n");
    scanf("%d", &a);
    printf("enter b=\n");
    scanf("%d", &b);

    return func(sum);

}
