//HEADER
#include "M5StickCPlus2.h"

//GLOBAL VAR
int mainMenuMode = 0;

//FUNCTIONS

void setMainMenu(){
  setSetupMenu();
}

void setSetupMenu(){
  StickCP2.Display.setTextSize(1);
  StickCP2.Display.clear();
  StickCP2.Display.drawFastHLine(0, 17, 240, GREEN);
  StickCP2.Display.drawRect(25, 8, 40, 10, GREEN);
  StickCP2.Display.fillRect(28, 8, 34, 8, BLACK);
  StickCP2.Display.fillRect(26, 9, 38, 10, BLACK);
  StickCP2.Display.setCursor(33, 6);
  StickCP2.Display.printf("PROG");
  StickCP2.Display.setCursor(81, 6);
  StickCP2.Display.printf("GSET");
  StickCP2.Display.setCursor(129, 6);
  StickCP2.Display.printf("ABOUT");

  StickCP2.Display.setCursor(35, 65);
  StickCP2.Display.printf("Press M5 to enter this mode");
}

void setLiveMode(){
  StickCP2.Display.setTextSize(1);
  StickCP2.Display.clear();
  StickCP2.Display.drawFastHLine(0, 17, 240, GREEN);
  StickCP2.Display.drawRect(75, 8, 46, 10, GREEN);
  StickCP2.Display.fillRect(76, 9, 44, 10, BLACK);
  StickCP2.Display.fillRect(78, 8, 40, 8, BLACK);
  StickCP2.Display.setCursor(33, 6);
  StickCP2.Display.printf("SETUP");
  StickCP2.Display.setCursor(83, 6);
  StickCP2.Display.printf("LIVE");
  StickCP2.Display.setCursor(129, 6);
  StickCP2.Display.printf("INFO");

  StickCP2.Display.setCursor(40, 60);
  StickCP2.Display.printf("Press M5 to enter LIVE mode");
}

void setInforDisplay(){
  StickCP2.Display.setTextSize(1);
  StickCP2.Display.clear();
  StickCP2.Display.drawFastHLine(0, 118, 240, WHITE);
  StickCP2.Display.drawRect(98, 118, 46, 15, WHITE);
  StickCP2.Display.fillRect(99, 115, 44, 13, BLACK);
  StickCP2.Display.setCursor(13, 124);
  StickCP2.Display.printf("SETUP");
  StickCP2.Display.setCursor(63, 124);
  StickCP2.Display.printf("LIVE");
  StickCP2.Display.setCursor(109, 120);
  StickCP2.Display.printf("INFO");

  StickCP2.Display.setCursor(40, 60);
  StickCP2.Display.printf("Press M5 to view information");

  // StickCP2.Display.setCursor(6,10);
  // StickCP2.Display.println("This device is apart of YOLO WatchDog,");
  // StickCP2.Display.println(" that is a machine learning apllied");
  // StickCP2.Display.println(" surveillance system.");
  // StickCP2.Display.println(" ");  
  // StickCP2.Display.println(" Notifications will be sent wirelessly,");
  // StickCP2.Display.println(" you will have to set up to receive them");
  // StickCP2.Display.println(" in LIVE mode.");  
  // StickCP2.Display.println(" ");  
  // StickCP2.Display.println(" Press button in bottom to switch mode");
  // StickCP2.Display.println(" and M5 button to select");  
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
