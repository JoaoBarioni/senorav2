#ifndef SENORACTRL_H
#define SENORACTRL_H

#define bt_COMER 0
#define bt_BEBER 1
#define bt_BANHEIRO 2
#define bt_BRINCAR 3
#define bt_DORMIR 4
#define PIN_BUZZER 5

class senoraCtrl
{
private:
public:
    static void init();
    static void pressComer();
    static void pressBeber();
    static void pressBanheiro();
    static void pressBrincar();
    static void pressDormir();
};

#endif