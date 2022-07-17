#include <stdio.h>

int max(int num1, int num2);

int main() {
  int a = 400;
  int b = 200;
  int ret;

  ret = max(a, b);

  printf("Maximum number is : %d\n", ret);
}

int max(int num1, int num2) {

   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
