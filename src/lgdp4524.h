/*
 * lgdp4524.h
 *
 *  Created on: 12 џэт. 2018 у.
 *      Author: Dumitru
 */

#ifndef LGDP4524_H_
#define LGDP4524_H_


/***************************Imports*************************************************/

#include <stdint.h>

/***************************Public Macro Definitions********************************/



/***************************Public Type Definitions********************************/

typedef union{
    uint16_t instructionReg;
    struct{
        uint8_t SR;

        union{
            uint8_t value;
            struct{
                unsigned IB_7:1;
                unsigned IB_6:1;
                unsigned IB_5:1;
                unsigned IB_4:1;
                unsigned IB_3:1;
                unsigned IB_2:1;
                unsigned IB_1:1;
                unsigned IB_0:1;
            }Bit;
        }IR;
    }instruction;
}InstructionType;

/***************************Public Data Definitions********************************/



/***************************Public Function Definitions****************************/


#endif /* LGDP4524_H_ */
