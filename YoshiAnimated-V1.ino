#include <FastLED.h>

#define NUM_LEDS 64

#define DATA_PIN 6

CRGB leds[NUM_LEDS];

CRGB yoshi[NUM_LEDS];

CRGB pikachu[NUM_LEDS];

CRGB mario[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(32);
  for (int i = 0; i < 64; i++){
    leds[i] = CRGB::White;
    
  }
  setPikachu();
  setMario();
  setYoshi();
  
}

void setPikachu(){
  
  pikachu[0] = CRGB::Black;
  pikachu[1] = CRGB::Gray;
  pikachu[2] = CRGB::Gray;
  pikachu[3] = CRGB::Black;
  pikachu[4] = CRGB::Black;
  pikachu[5] = CRGB::Black;
  pikachu[6] = CRGB::Black;
  pikachu[7] = CRGB::Gray;

  pikachu[8] = CRGB::Black;
  pikachu[9] = CRGB::Black;
  pikachu[10] = CRGB::Gold;
  pikachu[11] = CRGB::Goldenrod;
  pikachu[12] = CRGB::Black;
  pikachu[13] = CRGB::Black;
  pikachu[14] = CRGB::Black;
  pikachu[15] = CRGB::Goldenrod;

  pikachu[16] = CRGB::Black;
  pikachu[17] = CRGB::Black;
  pikachu[18] = CRGB::Black;
  pikachu[19] = CRGB::Gold;
  pikachu[20] = CRGB::Gold;
  pikachu[21] = CRGB::Gold;
  pikachu[22] = CRGB::Gold;
  pikachu[23] = CRGB::Goldenrod;

  pikachu[24] = CRGB::Goldenrod;
  pikachu[25] = CRGB::Goldenrod;
  pikachu[26] = CRGB::Black;
  pikachu[27] = CRGB::Gold;
  pikachu[28] = CRGB::MidnightBlue;
  pikachu[29] = CRGB::Gold;
  pikachu[30] = CRGB::Gold;
  pikachu[31] = CRGB::MidnightBlue;

  pikachu[32] = CRGB::Goldenrod;
  pikachu[33] = CRGB::Goldenrod;
  pikachu[34] = CRGB::Black;
  pikachu[35] = CRGB::Red;
  pikachu[36] = CRGB::Gold;
  pikachu[37] = CRGB::Gold;
  pikachu[38] = CRGB::Gold;
  pikachu[39] = CRGB::Goldenrod;

  pikachu[40] = CRGB::Black;
  pikachu[41] = CRGB::Goldenrod;
  pikachu[42] = CRGB::Black;
  pikachu[43] = CRGB::Gold;
  pikachu[44] = CRGB::Goldenrod;
  pikachu[45] = CRGB::Goldenrod;
  pikachu[46] = CRGB::Goldenrod;
  pikachu[47] = CRGB::Black;

  pikachu[48] = CRGB::Black;
  pikachu[49] = CRGB::Goldenrod;
  pikachu[50] = CRGB::Gold;
  pikachu[51] = CRGB::Goldenrod;
  pikachu[52] = CRGB::Gold;
  pikachu[53] = CRGB::Goldenrod;
  pikachu[54] = CRGB::Gold;
  pikachu[55] = CRGB::Black;

  pikachu[56] = CRGB::Black;
  pikachu[57] = CRGB::Black;
  pikachu[58] = CRGB::Gold;
  pikachu[59] = CRGB::Goldenrod;
  pikachu[60] = CRGB::SaddleBrown;
  pikachu[61] = CRGB::SaddleBrown;
  pikachu[62] = CRGB::Goldenrod;
  pikachu[63] = CRGB::Black;
}

void setMario(){
  mario[0] = CRGB::Black;
  mario[1] = CRGB::Black;
  mario[2] = CRGB::Black;
  mario[3] = CRGB::Red;
  mario[4] = CRGB::Red;
  mario[5] = CRGB::Red;
  mario[6] = CRGB::White;
  mario[7] = CRGB::Black;

  mario[8] = CRGB::Black;
  mario[9] = CRGB::Black;
  mario[10] = CRGB::Black;
  mario[11] = CRGB::Red;
  mario[12] = CRGB::Red;
  mario[13] = CRGB::Red;
  mario[14] = CRGB::Red;
  mario[15] = CRGB::Black;

  mario[16] = CRGB::Black;
  mario[17] = CRGB::Black;
  mario[18] = CRGB::SaddleBrown;
  mario[19] = CRGB::Bisque;
  mario[20] = CRGB::SaddleBrown;
  mario[21] = CRGB::Green;
  mario[22] = CRGB::Bisque;
  mario[23] = CRGB::Black;

  mario[24] = CRGB::Black;
  mario[25] = CRGB::Black;
  mario[26] = CRGB::SaddleBrown;
  mario[27] = CRGB::Bisque;
  mario[28] = CRGB::Bisque;
  mario[29] = CRGB::SaddleBrown;
  mario[30] = CRGB::SaddleBrown;
  mario[31] = CRGB::Bisque;

  mario[32] = CRGB::Black;
  mario[33] = CRGB::Black;
  mario[34] = CRGB::Black;
  mario[35] = CRGB::SaddleBrown;
  mario[36] = CRGB::Bisque;
  mario[37] = CRGB::Bisque;
  mario[38] = CRGB::Bisque;
  mario[39] = CRGB::Black;

  mario[40] = CRGB::Black;
  mario[41] = CRGB::Red;
  mario[42] = CRGB::Red;
  mario[43] = CRGB::Yellow;
  mario[44] = CRGB::Blue;
  mario[45] = CRGB::Blue;
  mario[46] = CRGB::Gold;
  mario[47] = CRGB::Black;

  mario[48] = CRGB::White;
  mario[49] = CRGB::Black;
  mario[50] = CRGB::Blue;
  mario[51] = CRGB::Blue;
  mario[52] = CRGB::Blue;
  mario[53] = CRGB::Blue;
  mario[54] = CRGB::Black;
  mario[55] = CRGB::Gray;

  mario[56] = CRGB::Black;
  mario[57] = CRGB::Black;
  mario[58] = CRGB::Goldenrod;
  mario[59] = CRGB::Black;
  mario[60] = CRGB::Black;
  mario[61] = CRGB::Black;
  mario[62] = CRGB::DarkGoldenrod;
  mario[63] = CRGB::Black;
}

void setYoshi(){
  yoshi[0] = CRGB::Black;
  yoshi[1] = CRGB::Black;
  yoshi[2] = CRGB::Red;
  yoshi[3] = CRGB::Chartreuse;
  yoshi[4] = CRGB::DarkGreen;
  yoshi[5] = CRGB::Chartreuse;
  yoshi[6] = CRGB::Black;
  yoshi[7] = CRGB::Black;

  yoshi[8] = CRGB::Black;
  yoshi[9] = CRGB::Red;
  yoshi[10] = CRGB::Chartreuse;
  yoshi[11] = CRGB::Blue;
  yoshi[12] = CRGB::Chartreuse;
  yoshi[13] = CRGB::Chartreuse;
  yoshi[14] = CRGB::Chartreuse;
  yoshi[15] = CRGB::Chartreuse;

  yoshi[16] = CRGB::Black;
  yoshi[17] = CRGB::Black;
  yoshi[18] = CRGB::White;
  yoshi[19] = CRGB::White;
  yoshi[20] = CRGB::Chartreuse;
  yoshi[21] = CRGB::Chartreuse;
  yoshi[22] = CRGB::Chartreuse;
  yoshi[23] = CRGB::Chartreuse;

  yoshi[24] = CRGB::Black;
  yoshi[25] = CRGB::Red;
  yoshi[26] = CRGB::White;
  yoshi[27] = CRGB::White;
  yoshi[28] = CRGB::Chartreuse;
  yoshi[29] = CRGB::Chartreuse;
  yoshi[30] = CRGB::Chartreuse;
  yoshi[31] = CRGB::Chartreuse;

  yoshi[32] = CRGB::Black;
  yoshi[33] = CRGB::Black;
  yoshi[34] = CRGB::Red;
  yoshi[35] = CRGB::DarkGray;
  yoshi[36] = CRGB::White;
  yoshi[37] = CRGB::White;
  yoshi[38] = CRGB::White;
  yoshi[39] = CRGB::Black;

  yoshi[40] = CRGB::Green;
  yoshi[41] = CRGB::Red;
  yoshi[42] = CRGB::DarkGreen;
  yoshi[43] = CRGB::DarkGreen;
  yoshi[44] = CRGB::DarkGray;
  yoshi[45] = CRGB::DarkGray;
  yoshi[46] = CRGB::DarkGreen;
  yoshi[47] = CRGB::Black;

  yoshi[48] = CRGB::Black;
  yoshi[49] = CRGB::Green;
  yoshi[50] = CRGB::Chartreuse;
  yoshi[51] = CRGB::DarkGreen;
  yoshi[52] = CRGB::DarkGray;
  yoshi[53] = CRGB::DarkGray;
  yoshi[54] = CRGB::DarkGreen;
  yoshi[55] = CRGB::DarkGreen;

  yoshi[56] = CRGB::Black;
  yoshi[57] = CRGB::Black;
  yoshi[58] = CRGB::Red;
  yoshi[59] = CRGB::Red;
  yoshi[60] = CRGB::Black;
  yoshi[61] = CRGB::DarkRed;
  yoshi[62] = CRGB::DarkRed;
  yoshi[63] = CRGB::Black;
}

void showYoshiRightFoot(){
  
  leds[0] = CRGB::Black;
  leds[1] = CRGB::Black;
  leds[2] = CRGB::Black;
  leds[3] = CRGB::Red;
  leds[4] = CRGB::Chartreuse;
  leds[5] = CRGB::DarkGreen;
  leds[6] = CRGB::Chartreuse;
  leds[7] = CRGB::Black;

  leds[8] = CRGB::Black;
  leds[9] = CRGB::Black;
  leds[10] = CRGB::Red;
  leds[11] = CRGB::Chartreuse;
  leds[12] = CRGB::Blue;
  leds[13] = CRGB::Chartreuse;
  leds[14] = CRGB::Chartreuse;
  leds[15] = CRGB::Chartreuse;

  leds[16] = CRGB::Black;
  leds[17] = CRGB::Black;
  leds[18] = CRGB::Black;
  leds[19] = CRGB::White;
  leds[20] = CRGB::White;
  leds[21] = CRGB::Chartreuse;
  leds[22] = CRGB::Chartreuse;
  leds[23] = CRGB::Chartreuse;

  leds[24] = CRGB::Black;
  leds[25] = CRGB::Black;
  leds[26] = CRGB::Red;
  leds[27] = CRGB::White;
  leds[28] = CRGB::White;
  leds[29] = CRGB::Chartreuse;
  leds[30] = CRGB::Chartreuse;
  leds[31] = CRGB::Chartreuse;

  leds[32] = CRGB::Chartreuse;
  leds[33] = CRGB::Red;
  leds[34] = CRGB::DarkGreen;
  leds[35] = CRGB::DarkGreen;
  leds[36] = CRGB::White;
  leds[37] = CRGB::White;
  leds[38] = CRGB::White;
  leds[39] = CRGB::Black;

  leds[40] = CRGB::Black;
  leds[41] = CRGB::Chartreuse;
  leds[42] = CRGB::Chartreuse;
  leds[43] = CRGB::DarkGreen;
  leds[44] = CRGB::DarkGray;
  leds[45] = CRGB::DarkGray;
  leds[46] = CRGB::DarkGreen;
  leds[47] = CRGB::Black;

  leds[48] = CRGB::Black;
  leds[49] = CRGB::Black;
  leds[50] = CRGB::Chartreuse;
  leds[51] = CRGB::DarkGreen;
  leds[52] = CRGB::Red;
  leds[53] = CRGB::DarkGray;
  leds[54] = CRGB::DarkGreen;
  leds[55] = CRGB::DarkGreen;

  leds[56] = CRGB::Black;
  leds[57] = CRGB::Black;
  leds[58] = CRGB::Black;
  leds[59] = CRGB::Red;
  leds[60] = CRGB::Black;
  leds[61] = CRGB::DarkRed;
  leds[62] = CRGB::DarkRed;
  leds[63] = CRGB::Black;
  
  FastLED.show();
}

void YoshiLeftFoot(){
  leds[0] = CRGB::Black;
  leds[1] = CRGB::Red;
  leds[2] = CRGB::Chartreuse;
  leds[3] = CRGB::DarkGreen;
  leds[4] = CRGB::Chartreuse;
  leds[5] = CRGB::Black;
  leds[6] = CRGB::Black;
  leds[7] = CRGB::Black;

  leds[8] = CRGB::Red;
  leds[9] = CRGB::Chartreuse;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Chartreuse;
  leds[12] = CRGB::Chartreuse;
  leds[13] = CRGB::Chartreuse;
  leds[14] = CRGB::Chartreuse;
  leds[15] = CRGB::Black;

  leds[16] = CRGB::Black;
  leds[17] = CRGB::White;
  leds[18] = CRGB::White;
  leds[19] = CRGB::Chartreuse;
  leds[20] = CRGB::Chartreuse;
  leds[21] = CRGB::Chartreuse;
  leds[22] = CRGB::Chartreuse;
  leds[23] = CRGB::Black;

  leds[24] = CRGB::Red;
  leds[25] = CRGB::White;
  leds[26] = CRGB::White;
  leds[27] = CRGB::Chartreuse;
  leds[28] = CRGB::Chartreuse;
  leds[29] = CRGB::Chartreuse;
  leds[30] = CRGB::Chartreuse;
  leds[31] = CRGB::Black;

  leds[32] = CRGB::Black;
  leds[33] = CRGB::Red;
  leds[34] = CRGB::DarkGray;
  leds[35] = CRGB::White;
  leds[36] = CRGB::White;
  leds[37] = CRGB::White;
  leds[38] = CRGB::Black;
  leds[39] = CRGB::Black;

  leds[40] = CRGB::Red;
  leds[41] = CRGB::DarkGreen;
  leds[42] = CRGB::DarkGreen;
  leds[43] = CRGB::DarkGray;
  leds[44] = CRGB::DarkGray;
  leds[45] = CRGB::DarkGray;
  leds[46] = CRGB::DarkGreen;
  leds[47] = CRGB::Black;

  leds[48] = CRGB::Green;
  leds[49] = CRGB::Chartreuse;
  leds[50] = CRGB::DarkGreen;
  leds[51] = CRGB::DarkGray;
  leds[52] = CRGB::DarkGray;
  leds[53] = CRGB::DarkGreen;
  leds[54] = CRGB::Red;
  leds[55] = CRGB::Black;

  leds[56] = CRGB::Black;
  leds[57] = CRGB::Red;
  leds[58] = CRGB::Red;
  leds[59] = CRGB::Black;
  leds[60] = CRGB::Black;
  leds[61] = CRGB::DarkRed;
  leds[62] = CRGB::Black;
  leds[63] = CRGB::Black;
  
  FastLED.show();
}

void onlyPikachu(){
  leds[0] = CRGB::Black;
  leds[1] = CRGB::Gray;
  leds[2] = CRGB::Gray;
  leds[3] = CRGB::Black;
  leds[4] = CRGB::Black;
  leds[5] = CRGB::Black;
  leds[6] = CRGB::Black;
  leds[7] = CRGB::Gray;

  leds[8] = CRGB::Black;
  leds[9] = CRGB::Black;
  leds[10] = CRGB::Gold;
  leds[11] = CRGB::Goldenrod;
  leds[12] = CRGB::Black;
  leds[13] = CRGB::Black;
  leds[14] = CRGB::Black;
  leds[15] = CRGB::Goldenrod;

  leds[16] = CRGB::Black;
  leds[17] = CRGB::Black;
  leds[18] = CRGB::Black;
  leds[19] = CRGB::Gold;
  leds[20] = CRGB::Gold;
  leds[21] = CRGB::Gold;
  leds[22] = CRGB::Gold;
  leds[23] = CRGB::Goldenrod;

  leds[24] = CRGB::Goldenrod;
  leds[25] = CRGB::Goldenrod;
  leds[26] = CRGB::Black;
  leds[27] = CRGB::Gold;
  leds[28] = CRGB::MidnightBlue;
  leds[29] = CRGB::Gold;
  leds[30] = CRGB::Gold;
  leds[31] = CRGB::MidnightBlue;

  leds[32] = CRGB::Goldenrod;
  leds[33] = CRGB::Goldenrod;
  leds[34] = CRGB::Black;
  leds[35] = CRGB::Red;
  leds[36] = CRGB::Gold;
  leds[37] = CRGB::Gold;
  leds[38] = CRGB::Gold;
  leds[39] = CRGB::Goldenrod;

  leds[40] = CRGB::Black;
  leds[41] = CRGB::Goldenrod;
  leds[42] = CRGB::Black;
  leds[43] = CRGB::Gold;
  leds[44] = CRGB::Goldenrod;
  leds[45] = CRGB::Goldenrod;
  leds[46] = CRGB::Goldenrod;
  leds[47] = CRGB::Black;

  leds[48] = CRGB::Black;
  leds[49] = CRGB::Goldenrod;
  leds[50] = CRGB::Gold;
  leds[51] = CRGB::Goldenrod;
  leds[52] = CRGB::Gold;
  leds[53] = CRGB::Goldenrod;
  leds[54] = CRGB::Gold;
  leds[55] = CRGB::Black;

  leds[56] = CRGB::Black;
  leds[57] = CRGB::Black;
  leds[58] = CRGB::Gold;
  leds[59] = CRGB::Goldenrod;
  leds[60] = CRGB::SaddleBrown;
  leds[61] = CRGB::SaddleBrown;
  leds[62] = CRGB::Goldenrod;
  leds[63] = CRGB::Black;

  FastLED.show();
}

void movingDot(){
  for(int dot = 0; dot < NUM_LEDS; dot++){
    leds[dot] = CRGB::Blue;
    FastLED.show();
    leds[dot] = CRGB::Black;
    delay(300);
  }
}



void loop() {
  // put your main code here, to run repeatedly:

  memcpy(leds, yoshi, sizeof(yoshi[0])*64);
  FastLED.show();
  delay(800);
  FastLED.clear();

  memcpy(leds, pikachu, sizeof(pikachu[0])*64);
  FastLED.show();
  delay(800);
  FastLED.clear();

  memcpy(leds, mario, sizeof(mario[0])*64);
  FastLED.show();
  delay(800);
  FastLED.clear();
  
//FastLED.clear();
//leds[0] = CRGB::Red;


//FastLED.show();

//showYoshiStill();
//delay(300);
//FastLED.clear();
//showYoshiRightFoot();
//delay(300);
//FastLED.clear();
//showYoshiStill();
//delay(300);
//FastLED.clear();
//YoshiLeftFoot();
//delay(300);
//FastLED.clear();
//pikachu();
//delay(300);
//FastLED.clear();
}

