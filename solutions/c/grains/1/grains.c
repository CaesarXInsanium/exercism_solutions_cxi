#include "grains.h"
#include <stdint.h>

u64 pow_u64(u64 x, u64 y)
{
  u64 result = 1;
  for (u64 i = 0; i < y; i++) {
    result = result * x;
  }
  return result;
}
uint64_t square(uint8_t index)
{
  if (index == 0) {
    return 0;
  }
  u64 u = (u64)index - 1;
  return pow_u64(2, u);
}
uint64_t total(void)
{
  u64 total = 0;
  for (u64 i = 1; i < 65; i++) {
    total = total + square(i);
  }
  return total;
}
