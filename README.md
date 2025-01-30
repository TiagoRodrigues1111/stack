# Stack Implementation in C

This repository contains a simple implementation of a stack data structure in the C programming language. The stack follows the Last In, First Out (LIFO) principle, and the implementation supports common stack operations such as push, pop, peek/top, and check for emptiness as well as the  current size of the stack.

## Features

- Dynamic stack implementation (using a resizable array or linked list).
- Basic operations:
  - `Create`: Creates the stack datastructure.  - `create_stack`
  - `Push`: Add an element to the top of the stack. - `stack_push`
  - `Pop`: Remove and return the top element of the stack. - `stack_pop`
  - `Peek/Top`: View the top element without removing it. - `check_stack_top`
  - `IsEmpty`: Check if the stack is empty. - `check_stack_is_empty`
  - `Size`: Get the current size of the stack. - `check_stack_size`
  - `Free`: Frees the stack datastructure. - `free_stack` 
## Prerequisites

To compile and run the program, you need:
- A C compiler (e.g., GCC, Clang, or MSVC).
- Basic knowledge of working with C files.


## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/TiagoRodrigues1111/stack
   cd stack
   ```



2. Compile the code using one of the following options:

   ### 2.1 Using `stack.c` (Array-based implementation):
   ```bash
   gcc stack.c main.c -o stack
   ```

   ### 2.2 Using `stack_ll.c` (Linked list-based implementation):
   ```bash
   gcc stack_ll.c main.c -o stack
   ```

3. Run the executable:
   ```bash
   ./stack
   ```

## Repo Structure

### File Structure

- [stack.c](stack.c): Contains the implementation of the stack functions (array-based)
- [stack_ll.c](stack_ll.c): Contains the implementation of the stack functions (linked list-based)
- [stack.h](stack.h): Header file with function declarations and definitions
- [simplemain.c](simplemain.c): Example usage of the stack
- [README.md](README.md): Documentation for the project


### Folder  Structure

```
.
├── stack.c         
├── stack_ll.c      
├── stack.h         
├── main.c          
└── README.md       
```

## Operations Breakdown

### `Create`
- **Description**: Creates th stack datastructure
- **Input**: The pointer to the memory position of the stack, the datatype size, and number of elements to allocate.
- **Example**:
  ```c
  void *stack= NULL;
  create_stack(&stack, sizeof(uint8_t), 10);
  ```

### `Push`
- **Description**: Adds an element to the top of the stack.
- **Input**: The pointer to the stack, as well as a void* to the input data.
- **Example**:
  ```c
  uint8_t data=10;
  stack_push(stack,(void*)&data);
  ```

### `Pop`
- **Description**: Removes the top element from the stack.
- **Output**: None.
- **Example**:
  ```c
  stack_pop(stack);
  ```

### `Peek/Top`
- **Description**: Returns the top element of the stack without removing it.
- **Output**: The starting memory position of the element.
- **Example**:
  ```c
  uint8_t top = *((uint8_t*)check_stack_top(stack));
  printf("Top element: %u\n",top);  
  ```

### `IsEmpty`
- **Description**: Checks if the stack is empty.
- **Output**: A boolean value (0 or 1).
- **Example**:
  ```c
  if (check_stack_is_empty(stack1)) {
      printf("Stack is empty\n");
  }
  ```

### `Size`
- **Description**: Returns the number of elements currently in the stack.
- **Output**: An uint64_t representing the stack size.
- **Example**:
  ```c
  uint64_t size = check_stack_size(stack1);
  printf("Stack size: %lu\n", size);
  ```

### `Free`
- **Description**: Frees the stack datastructur.
- **Output**: None.
- **Example**:
  ```c
  free_stack(stack);
  ```



## Example Usage

Here is a simple example of how the stack can be used (tutorial() in [simplemain.c](simplemain.c)):

```c
#include <stdio.h>
#include "stack.h"

int main() 
{
        void *stack1 = NULL;
        create_stack(&stack1, sizeof(uint16_t),5);                              // create a stack of 5 elements of uint16_t size

        uint16_t data1 = 3;
        stack_push(stack1,(void*) &data1);                                      // Push a value onto the stack
        
        data1 = 20;
        stack_push(stack1,(void*) &data1);                                  // Push another value onto the stack

        if(!check_stack_is_empty(stack1))                                       // Checks if stack is not empty 
        {
                printf("%u\n",*((uint16_t*)check_stack_top(stack1)));         // prints top of stack
        }

        stack_pop(stack1);                                                      // Pops a value from the stack

        printf("%lu\n",check_stack_size(stack1));                               // prints size of the stack

        free_stack(stack1);                                                     // frees the stack

        return 0;
}
```

## Contributions

Contributions are welcome! If you find any issues or have ideas for improvement, feel free to open an issue or submit a pull request.

## License

This project is licensed under the Unlicense license. See the `LICENSE` file for more details.
