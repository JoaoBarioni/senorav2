#include "senoraNote.h"
#include "senoraCtrl.h"

void SENORA_NOTAS_BEBER()
{
    int tempo = 144;
    int musicBeber[] = {
        NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};
    int musicBeberDurations[] = {
        4, 8, 8, 4, 4, 4, 4, 4};
    for (int Note = 0; Note < 8; Note++)
    {
        int noteDuration = 1000 / noteDuration[Note];
        tone(PIN_BUZZER, musicBeber[Note], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        noTone(PIN_BUZZER);
    }
}
void SENORA_NOTAS_COMER()
{
    int tempo = 144;
    int musicComer[] = {
        NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};
    int musicComerDurations[] = {
        4, 8, 8, 4, 4, 4, 4, 4};
    for (int Note = 0; Note < 8; Note++)
    {
        int noteDuration = 1000 / noteDuration[Note];
        tone(PIN_BUZZER, musicComer[Note], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        noTone(PIN_BUZZER);
    }
}
void SENORA_NOTAS_BANHEIRO()
{
    int tempo = 144;
    int musicBanheiro[] = {
        NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};
    int musicBanheiroDurations[] = {
        4, 8, 8, 4, 4, 4, 4, 4};
    for (int Note = 0; Note < 8; Note++)
    {
        int noteDuration = 1000 / noteDuration[Note];
        tone(PIN_BUZZER, musicBanheiro[Note], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        noTone(PIN_BUZZER);
    }
}
void SENORA_NOTAS_BRINCAR()
{
    int tempo = 144;
    int musicBrincar[] = {
        NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};
    int musicBrincarDurations[] = {
        4, 8, 8, 4, 4, 4, 4, 4};
    for (int Note = 0; Note < 8; Note++)
    {
        int noteDuration = 1000 / noteDuration[Note];
        tone(PIN_BUZZER, musicBrincar[Note], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        noTone(PIN_BUZZER);
    }
}
void SENORA_NOTAS_DORMIR()
{
    int tempo = 144;
    int musicDormir[] = {
        NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};
    int musicDormirDurations[] = {
        4, 8, 8, 4, 4, 4, 4, 4};
    for (int Note = 0; Note < 8; Note++)
    {
        int noteDuration = 1000 / noteDuration[Note];
        tone(PIN_BUZZER, musicDormir[Note], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        noTone(PIN_BUZZER);
    }
}