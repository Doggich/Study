#include <stdio.h>

using namespace std;


int add(int a, int b) 
{
   return a + b;
}

int sub(int a, int b) 
{
   return a - b;
}

int mul(int a, int b) 
{
   return a * b;
}

int div(int a, int b) 
{
   return a / b;
}


int main() 
{
   int number1, number2;
   printf("Input a, b? ");
   scanf("%d%d", &number1, &number2);
   printf("\n%d + %d == %d.\n", number1, number2, add(number1, number2));
   printf("%d - %d == %d.\n", number1, number2, sub(number1, number2));
   printf("%d * %d == %d.\n", number1, number2, mul(number1, number2));
   printf("%d / %d == %d.\n", number1, number2, div(number1, number2));
   return 0;
}
