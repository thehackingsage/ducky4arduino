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
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("notepad.exe");

  typeKey(KEY_RETURN);

  delay(300);

  Keyboard.print("          , ,\\ ,'\\,'\\ ,'\\ ,\\ ,");

  typeKey(KEY_RETURN);

  Keyboard.print("    ,  ,\\/ \\' `'     `   '  /|");

  typeKey(KEY_RETURN);

  Keyboard.print("    |\\/                      |");

  typeKey(KEY_RETURN);

  Keyboard.print("    :                        |");

  typeKey(KEY_RETURN);

  Keyboard.print("    :                        |");

  typeKey(KEY_RETURN);

  Keyboard.print("     |                       |");

  typeKey(KEY_RETURN);

  Keyboard.print("     |                       |");

  typeKey(KEY_RETURN);

  Keyboard.print("     :               -.     _|");

  typeKey(KEY_RETURN);

  Keyboard.print("     :                \\     `.");

  typeKey(KEY_RETURN);

  Keyboard.print("     |         ________:______\\");

  typeKey(KEY_RETURN);

  Keyboard.print("     :       ,'o       / o    ,");

  typeKey(KEY_RETURN);

  Keyboard.print("     :       \\       ,'-----./");

  typeKey(KEY_RETURN);

  Keyboard.print("      \\_      `--.--'        )");

  typeKey(KEY_RETURN);

  Keyboard.print("     ,` `.              ,---'|");

  typeKey(KEY_RETURN);

  Keyboard.print("     : `                     |");

  typeKey(KEY_RETURN);

  Keyboard.print("      `,-'                   |");

  typeKey(KEY_RETURN);

  Keyboard.print("      /      ,---.          ,'");

  typeKey(KEY_RETURN);

  Keyboard.print("   ,-'            `-,------'");

  typeKey(KEY_RETURN);

  Keyboard.print("   `.        ,--'");

  typeKey(KEY_RETURN);

  Keyboard.print("     `-.____/");

  typeKey(KEY_RETURN);

  Keyboard.print("            \\");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("There, just like Bart Simpson.");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("Please remember to lock your computer when you step away from your desk.");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("Thank you.");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  Keyboard.print("x");

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}