/*
 * File:   main.c
 * Author: Thompson
 *
 * Created on May 29, 2016, 4:42 PM
 */


#include <xc.h>
#include "configBits.h"
void main(void) {
    int loop;
    TRISA = 0;
    PORTA = 0;
    while (1) {
        loop = 0;
        PORTA++;
        while (loop < 30000) {
            loop++;
        }
    }
    return;
}
