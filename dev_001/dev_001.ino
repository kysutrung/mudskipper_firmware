//HEADER
#include "M5StickCPlus2.h"

//GLOBAL VAR
int mainMenuMode = 1;
int lastMainMenuMode = 0;

//FUNCTIONS

void getButtonz(){
  StickCP2.update();
  if(StickCP2.BtnB.wasPressed()){
    StickCP2.Speaker.tone(8000, 20);
    mainMenuMode++;
    if(mainMenuMode > 4)
      mainMenuMode = 1;
  }
}

void setMainMenu(){
  getButtonz();
  if(lastMainMenuMode != mainMenuMode){
    StickCP2.Display.clear();
    StickCP2.Display.setTextSize(1);
    StickCP2.Display.setCursor(40, 15);
    StickCP2.Display.printf("QUICK ACCESS");
    StickCP2.Display.setCursor(40, 45);
    StickCP2.Display.printf("PROGRAMS");
    StickCP2.Display.setCursor(40, 75);
    StickCP2.Display.printf("GENERAL SETTING");
    StickCP2.Display.setCursor(40, 105);
    StickCP2.Display.printf("ABOUT");
    
    int y_dot = 0;
    switch (mainMenuMode) {
    case 1:
      y_dot = 15;
      break;
    case 2:
      y_dot = 45;
      break;
    case 3:
      y_dot = 75;
      break;
    case 4:
      y_dot = 105;
      break;
    }

    StickCP2.Display.fillRect(12, y_dot, 15, 15, WHITE);

    lastMainMenuMode = mainMenuMode;
  }

}

void setQuikMode(){

}

void setProgramsMenu(){

}

void setGeneralSettingMode(){

}

void setAboutDisplay(){

}

//END FUNCTIONS

void setup() {
    auto cfg = M5.config();
    StickCP2.begin(cfg);

    StickCP2.Display.setRotation(1);
    StickCP2.Display.setTextColor(WHITE);
    StickCP2.Display.setTextFont(&fonts::FreeSerif9pt7b);

}

void loop() {
  setMainMenu();
}
