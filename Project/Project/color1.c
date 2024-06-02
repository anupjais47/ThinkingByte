#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
void SetColor1(int ForgC);
int main(void)
{
  SetColor1(4);
  printf("\n  \t This text is written in Red Color \n ");
  SetColor1(1);
  printf("\n  \t This text is written in Blue Color \n ");
  SetColor1(6);
  printf("\n  \t This text is written in Yellow Color \n ");
  SetColor1(3);
  printf("\n  \t This text is written in Aqua Color \n ");
  SetColor1(5);
  printf("\n  \t This text is written in Purple Color \n ");
  SetColor1(7);
  printf("\n  \t This text is written in White Color \n ");
  SetColor1(2);
  printf("\n  \t This text is written in Green Color \n ");
  SetColor1(8);
  printf("\n  \t This text is written in Gray Color \n ");
  SetColor1(9);
  printf("\n  \t This text is written in Light blue Color \n ");
  getch();
  return 0;
}

void SetColor1(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}
