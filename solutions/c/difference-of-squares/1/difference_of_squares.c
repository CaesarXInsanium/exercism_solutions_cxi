#include "difference_of_squares.h"
#include <stdio.h>

uint square(uint x){
  return x*x;
}
unsigned int sum_of_squares(unsigned int number)
{
 uint result = 0;
 for (uint i = 1; i < (number+1) ; i++){
    result = result + square(i);    
 }
  printf("SumOfSquares: %u\n", result);
 return result;
}
unsigned int square_of_sum(unsigned int number){
  uint result = 0;

  for(uint i = 0 ; i < number+1 ;i++){
    result = result + i;
  }
  result = square(result);
  printf("SquareOfSum: %u\n", result);
  return result;
}
unsigned int difference_of_squares(unsigned int number){
  printf("DifferenceInput: %u\n", number);
  return square_of_sum(number) - sum_of_squares(number);
}
