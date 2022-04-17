#include <Arduino.h>
#include <senoraCtrl.h>
#include <senoraNote.h>
#include <senoraNote.cpp>

unsigned long debouncing_time = 400;
unsigned long last_millis;

void SENORA_NOTAS_BEBER()
{
 for (int Note = 0; Note < 8; Note++)
 {
        int noteDuration = 1000 / musicBeberDurations[Note];
        tone(PIN_BUZZER, musicBeber[Note], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        noTone(PIN_BUZZER);
 }
}
void SENORA_NOTAS_COMER()
{
    for (int Note = 0; Note < 8; Note++)
    {
        int noteDuration = 1000 / musicComerDurations[Note];
        tone(PIN_BUZZER, musicComer[Note], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        noTone(PIN_BUZZER);
    }
}
void SENORA_NOTAS_BANHEIRO()
{
    for (int Note = 0; Note < 8; Note++)
    {
        int noteDuration = 1000 / musicBanheiroDurations[Note];
        tone(PIN_BUZZER, musicBanheiro[Note], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        noTone(PIN_BUZZER);
    }
}
void SENORA_NOTAS_BRINCAR()
{
    for (int Note = 0; Note < 8; Note++)
    {
        int noteDuration = 1000 / musicBrincarDurations[Note];
        tone(PIN_BUZZER, musicBrincar[Note], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        noTone(PIN_BUZZER);
    }
}
void SENORA_NOTAS_DORMIR()
{
    for (int Note = 0; Note < 8; Note++)
    {
        int noteDuration = 1000 / musicDormirDurations[Note];
        tone(PIN_BUZZER, musicDormir[Note], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        noTone(PIN_BUZZER);
    }
}

bool comer_pressed = false;
void comer_button_pressed()
{
  if (millis() - last_millis > debouncing_time)
  {
    last_millis = millis();
    SENORA_NOTAS_COMER();
    comer_pressed = true;
  }
}
bool beber_pressed = false;
void beber_button_pressed()
{
  if (millis() - last_millis > debouncing_time)
  {
    last_millis = millis();
    SENORA_NOTAS_BEBER();
    beber_pressed = true;
  }
}
bool banheiro_pressed = false;
void banheiro_button_pressed()
{
  if (millis() - last_millis > debouncing_time)
  {
    last_millis = millis();
    SENORA_NOTAS_BANHEIRO();
    banheiro_pressed = true;
  }
}
bool brincar_pressed = false;
void brincar_button_pressed()
{
  if (millis() - last_millis > debouncing_time)
  {
    last_millis = millis();
    SENORA_NOTAS_BRINCAR();
    brincar_pressed = true;
  }
}
bool dormir_pressed = false;
void dormir_button_pressed()
{
  if (millis() - last_millis > debouncing_time)
  {
    last_millis = millis();
    SENORA_NOTAS_DORMIR();
    dormir_pressed = true;
  }
}

void setup()
{
  Serial.begin(115200);
  senoraCtrl::init();
  attachInterrupt(digitalPinToInterrupt(bt_COMER), comer_button_pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(bt_BEBER), beber_button_pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(bt_BANHEIRO), banheiro_button_pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(bt_BRINCAR), brincar_button_pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(bt_DORMIR), dormir_button_pressed, FALLING);
}
void loop()
{
}