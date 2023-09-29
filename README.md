Tabii ki, işte İngilizce GitHub açıklama metni:

**A C library for getting user input of different data types**

This library contains a set of functions for getting user input of different data types in C. The supported data types are:

* string (char array)
* int (integer)
* float (decimal number)
* double (double-precision decimal number)
* long (long integer)
* short (short integer)

Each function converts the value entered by the user to the corresponding data type and returns it. To use the functions, follow these steps:

1. Include the library header files in your program:

```c
#include <stdio.h>
#include <stdlib.h>
#include "input_functions.h"
```

2. Define a variable of the data type you want.

3. Call the function to get the user input. You can pass a message to the function that prompts the user for their input.

4. Assign the value returned by the function to the variable.

5. Use the variable in your program.

Here is an example:

```c
// String variable to store the user input.
string userInput = get_string("Please enter a string: ");

//or

string userInput;

userInput = get_string("Please enter a string: ");

// Print the user-entered string value to the console.
printf("%s\n", userInput);
```

With this library, you can easily get user input of different data types in C.

