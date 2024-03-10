/*
---------------------------------------
- SIGUELINEAS CURSO LABORATORIO GLUON -
-          TIWTCH.TV/LABGLUON         -
---------------------------------------

pinout.h
TB6612_"nombre_pin"  --> TB6612_PWMA, TB6612_AIN1, TB6612_AIN2, TB6612_PWMB, TB6612_BIN1, TB6612_BIN2, TB6612_STBY
MULTPLX_"nombre_pin" --> MULTPLX_SIG, MULTPLX_S0, MULTPLX_S1, MULTPLX_S2, MULTPLX_S3, MULTPLX_EN
*/

#include <driver/gpio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/timers.h>
#include <esp_log.h>
#include <esp_timer.h>
#include <pinout.h>

extern "C" void app_main();

void app_main() {}