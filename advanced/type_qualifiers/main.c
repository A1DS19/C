#include <stdlib.h>

// type qualifiers
// const
// volatile
// restrict

typedef struct {
} Test;

void test(const Test *const test);

int main(int argc, char *argv[]) {
  const int numbers[7] = {1, 2, 3, 4, 5, 6, 7};

  // const pointers
  const float *ptr1; // the value the address is pointing to cannot be changed,
                     // value cannot be modified through the pointer, although
                     // the pointer itself can point to different floats

  float *const ptr2; // the address cannot change, you can modify the float
                     // value it points to, but the pointer must always point
                     // to the same memory location once initialized.

  const float *const ptr3; // cant change the address and cant change the value,
                           // The pointer itself cannot be changed to point to a
                           // different address. The value at the address it
                           // points to cannot be modified through the pointer.

  // volatile
  // use when:
  // memory mapped peripheral registers
  // global variables non stack variables modified by ISR
  // global variables accesed by multiple threads

  // restrict
  // used with pointers to say "this value will only be referenced by me"
  // The restrict keyword is used to tell the compiler that for the lifetime of
  // the pointer, only that pointer (or pointers directly derived from it) will
  // be used to access the object it points to
  const int i = 0;
  const int *restrict restricted_i = &i;

  return EXIT_SUCCESS;
}
