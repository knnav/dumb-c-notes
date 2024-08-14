/*
 * knnav's Dumb C Notes
 *
 * Just a bunch of code/notes I'm taking as I learn to code in C.
 * 
 * Topic: Pointers!
 * 
 * Author: Kurt N.
 *         Github:  @knnav
 *         Twitter: @bitmonkee_
*/
#include <stdio.h>
// Function declarations, please ignore them~
void swap(int *pointer_x, int *pointer_y); 

int main() {
  int original_value = 1; // This is the variable we'll be working with

  /*
   * First things first: pointers have to be declared before
   * being assigned (at least on the compiler I'm using!)
   *
   * To declare one, you use the type of variable it'll hold,
   * and append the *operator before the name
  */
  int *pointer_1;

  /*
   * To assign a value to a pointer, we use the & operator
   * which returns the memory address of the variable instead
   * of the actual value
   *
   * In this case, &original_value returns something like
   * 0x16f2f3270 instead of 1
   *
   * original_value is 1
   * &original_value is 0x16f2f3270 (this will of course change) 
  */
  pointer_1 = &original_value;

  /*
   * To modify the value contained in the memory address 
   * referenced by the pointer, we can use the dereferencing
   * operator (*) to access the object our pointer is,
   * referencing to, and then we can just modify it!
  */
  *pointer_1 += 2;

  /*
   * We can also assign a pointer to point to another pointer
   * in this example, pointer_2 will point to the same address
   * that pointer_1 is pointing to.
   *
   * pointer_2 will point to original_value's memory address.
   */
  int *pointer_2;
  pointer_2 = pointer_1;

  /*
   * We can use pointers to modify the values of a variable inside
   * of a function.
   *
   * In this case, we're going to be swapping the memory address that
   * swap_pointer_x and swap_pointer_y point to
   * 
   *
   * (check the function implementation for the details)
   */
  int *swap_pointer_x;
  int *swap_pointer_y;

  int swap_value_x = 1;
  int swap_value_y = 2;

  swap_pointer_x = &swap_value_x;
  swap_pointer_y = &swap_value_y;

  swap(&swap_pointer_x, &swap_pointer_y);

  return 0;
}

/*
 * A function I'm "borrowing" from The C Programming Language book
 * that explains really well how pointers can be used to manipulate
 * a variable's value inside of a function without having to return it
 * (Just put it in the black box and it'll do it's magic~)
*/
void swap(int *pointer_x, int *pointer_y) {
  int temp;
  // In the beginning, pointer_x is: 0x6fb43254 -- pointer_y is 0x6fb43250

  temp = *pointer_x; // pointer_x is: 0x6fb43254 -- temp is 0x6fb43254

  *pointer_x = *pointer_y; // pointer_x is: 0x6fb43250 -- pointer_y is 0x6fb43250

  *pointer_y = temp; // After the full swap pointer_x is: 0x6fb43250 -- pointer_y is 0x6fb43254
}
