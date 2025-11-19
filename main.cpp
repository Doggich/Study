#include <stdio.h>

using namespace std;


int sum(int a, int b) 
{
   return a + b;
}


int main() 
{
   int number1, number2;
   printf("Input a, b? ");
   scanf("%d%d", &number1, &number2);
   printf("\n%d + %d == %d.\n", number1, number2, sum(number1, number2));
   return 0;
}
