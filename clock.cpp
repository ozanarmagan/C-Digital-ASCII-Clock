#include <chrono>
#include <iostream>
#include <ctime>
#include <time.h> 
#include <string>
#include <Windows.h>
#include "draw.h"
#include "draw.cpp"
using namespace std;
#define H 7
#define W 8 //one extra room in the char array is required for storing '\0'


void ClearScreen()
{	
COORD cursorPosition;	cursorPosition.X = 0;	cursorPosition.Y = 0;	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
}



int main()
{
  time_t rawtime;
  struct tm * timeinfo;
  char buffer [80];

  while(1)
  {
    ClearScreen();
    time(&rawtime);
    timeinfo = localtime (&rawtime);
    strftime(buffer,80,"%H:%M:%S",timeinfo);
    draw_clock(buffer);
    Sleep(1);
  }
}