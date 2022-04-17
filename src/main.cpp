#include <Arduino.h>
#include <senoraCtrl.h>
#include <senoraNote.h>

unsigned long debouncing_time = 400;
unsigned long last_millis;

bool comer_pressed = false;
void comer_button_pressed()
{
  if (millis() - last_millis > debouncing_time)
  {
    last_millis = millis();
    senoraNote::playNote(SENORA_NOTAS_COMER);
    comer_pressed = true;
  }
}
bool beber_pressed = false;
void beber_button_pressed()
{
  if (millis() - last_millis > debouncing_time)
  {
    last_millis = millis();
    senoraNote::playNote(SENORA_NOTAS_BEBER);
    beber_pressed = true;
  }
}
bool banheiro_pressed = false;
void banheiro_button_pressed()
{
  if (millis() - last_millis > debouncing_time)
  {
    last_millis = millis();
    senoraNote::playNote(SENORA_NOTAS_BANHEIRO);
    banheiro_pressed = true;
  }
}
bool brincar_pressed = false;
void brincar_button_pressed()
{
  if (millis() - last_millis > debouncing_time)
  {
    last_millis = millis();
    senoraNote::playNote(SENORA_NOTAS_BRINCAR);
    brincar_pressed = true;
  }
}
bool dormir_pressed = false;
void dormir_button_pressed()
{
  if (millis() - last_millis > debouncing_time)
  {
    last_millis = millis();
    senoraNote::playNote(SENORA_NOTAS_DORMIR);
    dormir_pressed = true;
  }
}

void setup()
{
  Serial.begin(115200);
  SenoraControl::init();

  attachInterrupt(digitalPinToInterrupt(COMER), comer_button_pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(BEBER), beber_button_pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(BANHEIRO), banheiro_button_pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(BRINCAR), brincar_button_pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(DORMIR), dormir_button_pressed, FALLING);
  ("[SETUP] END");
}
void loop()
{
}