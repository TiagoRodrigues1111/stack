

#include "stack.h"
#include <stdio.h>


int main()
{
               
        
        create_stack(sizeof(uint8_t));
        printf("%u\n",check_stack_is_empty());

        uint8_t data_test = 3;
        stack_push((void*) &data_test);

        data_test = 20;
        stack_push((void*) &data_test);
        
        data_test = 30;
        stack_push((void*) &data_test);
        

        printf("%u\n", *((uint8_t*)check_stack_top()));
        stack_pop();

        printf("%u\n", *((uint8_t*)check_stack_top()));
        stack_pop();

        printf("%u\n", *((uint8_t*)check_stack_top()));


        printf("%u\n",check_stack_size());

        free_stack();

        return 0;  
}