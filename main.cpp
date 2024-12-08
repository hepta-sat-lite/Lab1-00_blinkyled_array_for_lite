#include "mbed.h"
DigitalOut myled[]={PB_1, PA_5};
int main()
{
    while (true) {
        for(int i=0;i<2;i++){
            myled[i] = 1;
        }
        wait_ms(500);
        for(int i=0;i<2;i++){
            myled[i] = 0;
        }
        wait_ms(500);
    }
}
