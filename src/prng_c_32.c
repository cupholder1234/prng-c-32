#include "prng_c_32.h"

uint32_t prng_c_32(struct prng_c_32_s *s) {
  uint32_t block = s->a + s->c;

  s->a = ((s->a << 17) | (s->a >> 15)) ^ s->b;
  s->b += 1111111111;
  s->c = (block << 13) | (block >> 19);
  return block;
}
