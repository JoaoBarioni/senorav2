#include "senoraCtrl.h"
#include "senoraNote.h"

void senoraCtrl::init()
{
    pinMode(bt_COMER, INPUT_PULLUP);
    pinMode(bt_BEBER, INPUT_PULLUP);
    pinMode(bt_BANHEIRO, INPUT_PULLUP);
    pinMode(bt_BRINCAR, INPUT_PULLUP);
    pinMode(bt_DORMIR, INPUT_PULLUP);
}