#include<stdio.h>
#include<math.h>

  void main() {
    int number, sum = 0, rem = 0, nthPower = 0, digits = 0, temp;
    printf("Enter a number");
    scanf("%d", & number);
    temp = number;
    //to calculate the number of digits in the number
    while (number != 0) {
      number = number / 10;
      digits++;
    }
    number = temp;
    
    while (number != 0) {
      rem = number % 10;
      nthPower = pow(rem, digits);
      sum = sum + nthPower;
      number = number / 10;
    }
    
    if (sum == temp)
      printf("The given number is an Armstrong number");
    else
      printf("The given number is not an Armstrong number");
  }
