/*
 * knnav's Dumb C Notes
 *
 * Just a bunch of code/notes I'm taking as I learn to code in C.
 * 
 * Topic: More pointers, enter Arrays!
 * 
 * Author: Kurt N.
 *         Github:  @knnav
 *         Twitter: @bitmonkee_
*/
#include <stdio.h>

int main() {
  /*
   * We can declare an array by using the type followed
   * by the name and [].
   *
   * If you declare it this way, you have to assign a value
   * to it right away, which is done by enclosing the values 
   * between brackets. i.e { val1, val2... etc! }
   */
  int some_array[] = {1, 2, 3, 4, 5};

  /*
   * We can also declare an array like without assigning a values
   * to it, but we have to set apart memory space for it when
   * declaring it by having it's length between the brakets []
   *
   * In this example we're declaring an empty array that can hold 5
   * integers
   */
  int just_an_example[5];

  // Just declaring some pointers that we'll use later...
  int *pointer_a;
  int *pointer_b;

  /*
   * If we do this, pointer_a starts pointing at whatever
   * is in some_array[0]
   *
   * pointer_a is: 0x16ba3f200 (at least it was when I ran it! lol)
   * pointer_a is: 1
   */
  pointer_a = &some_array[0];

  /*
   * The name of an array can be used to reference the address
   * of the first element of the array, which means that this
   * is also valid
   *
   * pointer_b is: 0x16db27200
   * pointer_b is: 1
   */
  pointer_b = some_array;

  /*
   * Since strings in C are arrays of characters, we can declare
   * a string like an array or with double quotes and both will
   * work
   *
   * some_string:  Huzzah!
   * other_string: Huzzah!
   */
  char some_string[] = {'H', 'u', 'z', 'z', 'a','h', '!'};
  char other_string[] = "Huzzah!";

  return 0;
}
