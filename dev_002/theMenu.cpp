#include "theMenu.h"
#include "yourPrograms.h"

//GLOBAL VAR
int MAIN_MENU_MODE = 1;
int LAST_MAIN_MENU_MODE = 0;
int HAVE_ACCESS_THIS_MODE = 0;

//FUNCTIONS
void getButtonz(){
  StickCP2.update();
  if(StickCP2.BtnB.wasPressed()){
    StickCP2.Speaker.tone(8000, 20);
    if(HAVE_ACCESS_THIS_MODE != 1){
      MAIN_MENU_MODE++;
    }
    if(MAIN_MENU_MODE > 4){
      MAIN_MENU_MODE = 1;
    }
  }
  if(StickCP2.BtnA.wasPressed()){
    StickCP2.Speaker.tone(8000, 20);
    HAVE_ACCESS_THIS_MODE++;
  }
}

void setMainMenu(){
  getButtonz();
  int y_dot = 0;

  switch (MAIN_MENU_MODE) {
  case 1:
    y_dot = 15;
    if(HAVE_ACCESS_THIS_MODE > 0){
      setQuikMode();
    }
    break;
  case 2:
    y_dot = 45;
    if(HAVE_ACCESS_THIS_MODE > 0){
      setProgramsMenu();
    }
    break;
  case 3:
    y_dot = 75;
    if(HAVE_ACCESS_THIS_MODE > 0){
      setGeneralSettingMode();
    }
    break;
  case 4:
    y_dot = 105;
    if(HAVE_ACCESS_THIS_MODE > 0){
      setAboutDisplay();
    }
    break;
  }

  if(LAST_MAIN_MENU_MODE != MAIN_MENU_MODE && HAVE_ACCESS_THIS_MODE == 0){
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

    StickCP2.Display.fillRect(12, y_dot, 15, 15, WHITE);

    LAST_MAIN_MENU_MODE = MAIN_MENU_MODE;
  }

}

void setQuikMode(){
    StickCP2.Display.clear();
    StickCP2.Display.setTextSize(1);
    StickCP2.Display.setCursor(40, 15);
    StickCP2.Display.printf("Meo meo");
}

void setProgramsMenu(){
    StickCP2.Display.clear();
    StickCP2.Display.setTextSize(1);
    StickCP2.Display.setCursor(40, 15);
    StickCP2.Display.printf("Meo meo");
}

void setGeneralSettingMode(){
    StickCP2.Display.clear();
    StickCP2.Display.setTextSize(1);
    StickCP2.Display.setCursor(40, 15);
    StickCP2.Display.printf("Meo meo");
}

void setAboutDisplay(){
    StickCP2.Display.clear();
    StickCP2.Display.setTextSize(1);
    StickCP2.Display.setCursor(40, 15);
    StickCP2.Display.printf("Meo meo");
}

//END FUNCTIONS