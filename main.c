#include <stdio.h>
#include "rpi.h"

extern struct bcm2835_peripheral gpio;  // They have to be found somewhere, but can't be in the header

int main() {

    if (map_peripheral(&gpio) == -1) {
        printf("Failed to map the physical GPIO registers into the virtual memory space.\n");
        return -1;
    }

    // Define pin 7 as output
    INP_GPIO(4);
    OUT_GPIO(4);

    while (1) {
        // Toggle pin 7 (blink a led!)
        GPIO_SET = 1 << 4;
        sleep(1);

        GPIO_CLR = 1 << 4;
        sleep(1);
    }
    return 0;
}

