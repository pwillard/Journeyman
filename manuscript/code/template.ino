//==============================================================================
// TTTTT EEEEE M   M PPPP  L      AAA  TTTTT EEEEE        III  N   N OOOOO 
//   T   E     MM MM P   P L     A   A   T   E             I   NN  N O   O 
//   T   EEEE  M M M PPPP  L     AAAAA   T   EEEE          I   N N N O   O 
//   T   E     M M M P     L     A   A   T   E      ..     I   N  NN O   O 
//   T   EEEEE M   M P     LLLLL A   A   T   EEEEE  ..    III  N   N OOOOO 
//==============================================================================
//==============================================================================
// Program: template.ino
// Author: Pete Willard
// Version: 1.0
// Target: Uno
// Date: 2015/04/02
// Time: 06:41:02
// Notes:
//
// ----------------------------------------------------------------------------
// 'THE BEER-WARE LICENSE':
// petewillard@gmail.com: As long As you retain this notice you
// can do whatever you want With this stuff. If we meet some day, And you think
// this stuff is worth it, you can buy me a beer in return. Pete Willard
// ----------------------------------------------------------------------------
//
// Reference:
//==============================================================================
 
//=====[ INCLUDE ]==============================================================
 
//=====[ CONSTANTS ]============================================================
#define DEBUG 1 // 0 = debugging disabled, 1 = enabled
 
//=====[ PINS ]=================================================================
int onboardLed = 13;
 
//=====[ SETUP ]================================================================
// Runs only one time at startup
void Setup() {
pinMode(onboardLed,OUTPUT);
 
}
 
//=====[ MAIN PROCESS LOOP ]====================================================
void Loop() {
 
}
 
//=====[ SUBROUTINES ]==========================================================
void printBreak() {
Serial.println("=============================");

}
