/*
file   : *.cpp
author : shentq
version: V1.0
date   : 2015/7/5

Copyright 2015 shentq. All Rights Reserved.
*/

//STM32 RUN IN eBox


#include "ebox.h"
#include "math.h"
#include "colorled.h"
#include "nokia5110.h"


NOKIA5110 lcd;




void setup()
{
    ebox_init();
    PB8.mode(OUTPUT_PP);
    PB8.set();
    uart1.begin(115200);
    lcd.begin();
    lcd.disp_string(0, 0, "  Welcome to  ");
    lcd.disp_string(0, 1, "  ebox world ");
    lcd.disp_string(0, 2, "cloudmaker.org");
    lcd.disp_string(0, 3, " Nokia5110 LCD");
    lcd.write_chinese_string(12, 4, 12, 4, 0, 5);
}
u8 str[] = "123";
int main(void)
{
    setup();
    while(1)
    {
        delay_ms(300);

    }

}




