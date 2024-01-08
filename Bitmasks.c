// https://www.learn-c.org/en/Bitmasks
// Use bit masks to manipulate some flags.

#include <stdio.h>
#include <assert.h>

/* Finish initializing the flags */

const short FLAG_ON          = 1 << 0; // 1  (0x01)
const short FLAG_MOVEMENT    = 1 << 1; // 2  (0x02)
const short FLAG_TRANSPARENT = 1 << 2; // 4  (0x04)
const short FLAG_ALIVE       = 1 << 3; // 8  (0x08)
const short FLAG_BROKEN      = 1 << 4; // 16 (0x10)
const short FLAG_EDIBLE      = 1 << 5; // 32 (0x20)


void printbits(const short x)
{
    for(int i=sizeof(x)<<3; i; i--)
        putchar('0'+((x>>(i-1))&1));
}

int showflags()
{
  printf("### FLAG VALUES ###\n");
  printf("FLAG_ON:          ");
  printbits(FLAG_TRANSPARENT);
  printf("\n");
  printf("FLAG_MOVEMENT:    ");
  printbits(FLAG_MOVEMENT);
  printf("\n");
  printf("FLAG_TRANSPARENT: ");
  printbits(FLAG_TRANSPARENT);
  printf("\n");
  printf("FLAG_ALIVE:       ");
  printbits(FLAG_ALIVE);
  printf("\n");
  printf("FLAG_BROKEN:      ");
  printbits(FLAG_BROKEN);
  printf("\n");
  printf("FLAG_EDIBLE:      ");
  printbits(FLAG_EDIBLE);
  printf("\n");
  return 0;
}

int main() 
{
  showflags();
  short attributes = 0;

  /* Set the attributes ON, TRANSPARENT, and BROKEN */
  //dobitmask(attributes, "|=", FLAG_ON);
  attributes |= FLAG_ON;
  attributes ^= FLAG_BROKEN;
  printbits(attributes); printf("\n");
  //attributes |= FLAG_ON >> attributes;
  assert(attributes == FLAG_ON);
  //assert(attributes == (FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN));

  /* Modify (set/clear/toggle) so the only attributes are ON and ALIVE */

  //assert(attributes == (FLAG_ON | FLAG_ALIVE));

  /* Check if the ALIVE flag is set */
  //assert(/* ??? */);

  /* Check if the BROKEN flag is not set */
  //assert(/* ??? */);

  /* Modify so only the EDIBLE attribute is set */

  //assert(attributes == FLAG_EDIBLE);

  //printf("Done!");
}