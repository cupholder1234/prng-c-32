#ifndef PRNG_C_32_H
#define PRNG_C_32_H

#include <stdint.h>

struct prng_c_32_s {
  uint32_t a;
  uint32_t b;
  uint32_t c;
};

uint32_t prng_c_32(struct prng_c_32_s *s);

#endif
