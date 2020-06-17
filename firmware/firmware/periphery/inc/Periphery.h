/********************************************************************************
 * class        Setting periphery                                               *
 *                                                                              *
 * file         Periphery.h                                                     *
 * author       Ilya Galkin                                                     *
 * date         17.06.2020                                                      *
 *                                                                              *
 ********************************************************************************/

#pragma once

/********************************************************************************
 * Include 
 ********************************************************************************/

#include "stm32f3xx.h"
#include "startupF334.h"

#include "Led.h"
#include "Hrpwm.h"
#include "Clock.h"
#include "Adc.h"

/********************************************************************************
 * Class Periphery
 ********************************************************************************/

class Periphery {
    public:
        static void Init (void) {
            Clock::Init();
            Led::Init();
            Hrpwm::Init();
//            Adc::Init();
        }
};