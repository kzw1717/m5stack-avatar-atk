#include <AquesTalkTTS.h>
#include <Avatar.h>
#include <M5Unified.h>
#include <tasks/LipSync.h>
#include <gob_unifiedButton.hpp>   // touch buttons for cores3 

goblib::UnifiedButton unifiedButton;  // touch buttons for cores3 

using namespace m5avatar;

// AquesTalk License Key
// NULL or wrong value is just ignored
const char* AQUESTALK_KEY = "XXXX-XXXX-XXXX-XXXX";

Avatar avatar;
void setup() {
  int iret;
  M5.begin();
  unifiedButton.begin(&M5.Display); // touch buttons for cores3 
  // For Kanji-to-speech mode (requires dictionary file saved on microSD)
  // See http://blog-yama.a-quest.com/?eid=970195
  // iret = TTS.createK(AQUESTALK_KEY);
 	// AquesTalkの初期化
  if (TTS.create()) {
    M5.Display.println("ERR:TTS.create()");
  }

  M5.Lcd.setBrightness(100);
  M5.Lcd.clear();
  avatar.init();
  avatar.addTask(lipSync, "lipSync");
}

void loop() {
  M5.update();
  unifiedButton.update();  // touch buttons for cores3 
  if (M5.BtnA.wasPressed()) {
    // Need to initialize with createK(AQUESTALK_KEY)
    // TTS.play("こんにちは。", 80);
    TTS.play("konnichiwa", 80);
    avatar.setSpeechText("Hello");
    delay(1000);
    avatar.setSpeechText("");
  }
}