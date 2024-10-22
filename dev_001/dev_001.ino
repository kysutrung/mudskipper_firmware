//HEADER
#include "M5StickCPlus2.h"

//GLOBAL VAR
int mainMenuMode = 0;

//FUNCTIONS

void setMainMenu(){
  setQuikMode();
  delay(2000);
  setProgramsMenu();
  delay(2000);
  setGeneralSettingMode();
  delay(2000);
  setAboutDisplay();
  delay(2000);
  setQuikMode();
  delay(2000);
  setProgramsMenu();
  delay(2000);
  setGeneralSettingMode();
  delay(2000);
  setAboutDisplay();
}

void setQuikMode(){
  StickCP2.Display.setTextSize(1);
  StickCP2.Display.clear();

  StickCP2.Display.drawFastHLine(0, 17, 240, GREEN);
  StickCP2.Display.drawRect(23, 8, 40, 10, GREEN);
  StickCP2.Display.fillRect(26, 8, 34, 8, BLACK);
  StickCP2.Display.fillRect(24, 9, 38, 10, BLACK);

  StickCP2.Display.setCursor(31, 6);
  StickCP2.Display.printf("QUIK");
  StickCP2.Display.setCursor(79, 6);
  StickCP2.Display.printf("PROG");
  StickCP2.Display.setCursor(127, 6);
  StickCP2.Display.printf("GSET");
  StickCP2.Display.setCursor(177, 6);
  StickCP2.Display.printf("ABOUT");

  StickCP2.Display.setCursor(35, 65);
  StickCP2.Display.printf("Press M5 to enter this mode");
}

void setProgramsMenu(){
  StickCP2.Display.setTextSize(1);
  StickCP2.Display.clear();

  StickCP2.Display.drawFastHLine(0, 17, 240, GREEN);
  StickCP2.Display.drawRect(70, 8, 40, 10, GREEN);
  StickCP2.Display.fillRect(73, 8, 34, 8, BLACK);
  StickCP2.Display.fillRect(71, 9, 38, 10, BLACK);

  StickCP2.Display.setCursor(31, 6);
  StickCP2.Display.printf("QUIK");
  StickCP2.Display.setCursor(79, 6);
  StickCP2.Display.printf("PROG");
  StickCP2.Display.setCursor(127, 6);
  StickCP2.Display.printf("GSET");
  StickCP2.Display.setCursor(177, 6);
  StickCP2.Display.printf("ABOUT");

  StickCP2.Display.setCursor(35, 65);
  StickCP2.Display.printf("Press M5 to enter this mode");
}

void setGeneralSettingMode(){
  StickCP2.Display.setTextSize(1);
  StickCP2.Display.clear();

  StickCP2.Display.drawFastHLine(0, 17, 240, GREEN);
  StickCP2.Display.drawRect(118, 8, 40, 10, GREEN);
  StickCP2.Display.fillRect(121, 8, 34, 8, BLACK);
  StickCP2.Display.fillRect(119, 9, 38, 10, BLACK);

  StickCP2.Display.setCursor(31, 6);
  StickCP2.Display.printf("QUIK");
  StickCP2.Display.setCursor(79, 6);
  StickCP2.Display.printf("PROG");
  StickCP2.Display.setCursor(127, 6);
  StickCP2.Display.printf("GSET");
  StickCP2.Display.setCursor(177, 6);
  StickCP2.Display.printf("ABOUT");

  StickCP2.Display.setCursor(35, 65);
  StickCP2.Display.printf("Press M5 to enter this mode");  
}

void setAboutDisplay(){
  StickCP2.Display.setTextSize(1);
  StickCP2.Display.clear();

  StickCP2.Display.drawFastHLine(0, 17, 240, GREEN);
  StickCP2.Display.drawRect(169, 8, 45, 10, GREEN);
  StickCP2.Display.fillRect(172, 8, 39, 8, BLACK);
  StickCP2.Display.fillRect(170, 9, 43, 10, BLACK);

  StickCP2.Display.setCursor(31, 6);
  StickCP2.Display.printf("QUIK");
  StickCP2.Display.setCursor(79, 6);
  StickCP2.Display.printf("PROG");
  StickCP2.Display.setCursor(127, 6);
  StickCP2.Display.printf("GSET");
  StickCP2.Display.setCursor(177, 6);
  StickCP2.Display.printf("ABOUT");

  StickCP2.Display.setCursor(35, 65);
  StickCP2.Display.printf("Press M5 to enter this mode");  
}

//END FUNCTIONS

void setup() {
    auto cfg = M5.config();
    StickCP2.begin(cfg);
    StickCP2.Display.setRotation(3);
    StickCP2.Display.setTextColor(GREEN);

    setMainMenu();
}

void loop() {

}
