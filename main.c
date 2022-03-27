/* Blank template for PICO C program */

/* Minimum include files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pico/stdlib.h"
#include "include/messages.h"

/* Make all DEF's and global declarations here */




/* Function declarations here */

int main() {
    char *msg = malloc(100 * sizeof(char));
    msg = "This is message number  ";
    int index = 0;

    /* Allows USB serial printf */
    stdio_init_all();
    messages_init();
    
    
    while(1) //infinite loop, will end when choice will be 4
    {

      index++;
      printf("%d ", index);
      add_msg(msg);
      display_messages();
      sleep_ms(1000); 
    }

    free(messages);
    free(msg);
    /* required, could return a 1 for error */
    return 0;
}

