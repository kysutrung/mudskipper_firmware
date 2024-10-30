#include "theMenu.h"

//GLOBAL VAR
int MAIN_MENU_MODE = 1;
int LAST_MAIN_MENU_MODE = 0;

//FUNCTIONS
void getButtonz(){
  StickCP2.update();
  if(StickCP2.BtnB.wasPressed()){
    StickCP2.Speaker.tone(8000, 20);
    MAIN_MENU_MODE++;
    if(MAIN_MENU_MODE > 4)
      MAIN_MENU_MODE = 1;
  }
}

void setMainMenu(){
  getButtonz();
  if(LAST_MAIN_MENU_MODE != MAIN_MENU_MODE){
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
    switch (MAIN_MENU_MODE) {
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

    LAST_MAIN_MENU_MODE = MAIN_MENU_MODE;
  }

}

//END FUNCTIONS