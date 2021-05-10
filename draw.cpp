#include <string>
#include <iostream>
using namespace std;
#include "draw.h"
#define H 7
#define W 8 //one extra room in the char array is required for storing '\0'









void draw_clock(char buffer[80])
{         
    char numbers[11][H][W]={
                    {" ##### ", 
                     " #   # ", 
                     " #   # ", 
                     " #   # ", 
                     " #   # ", 
                     " #   # ", 
                     " ##### "},
                   {"   #   ",
                    "  ##   ",
                    "   #   ",
                    "   #   ",
                    "   #   ",
                    "   #   ",
                    " ##### "},

                   {" ##### ",
                    "     # ",
                    "     # ",
                    " ##### ",
                    " #     ",
                    " #     ",
                    " ##### "},

                     {" ##### ",
                      "     # ",
                      "     # ",
                      " ##### ",
                      "     # ",
                      "     # ",
                      " ##### "},

                    {" #   # ",
                     " #   # ",
                     " #   # ",
                     " ##### ",
                     "     # ",
                     "     # ",
                     "     # "},
                    {" ##### ",
                     " #     ",
                     " #     ",
                     " ##### ",
                     "     # ",
                     "     # ",
                     " ##### "},

                    {" ##### ",
                    " #     ",
                    " #     ",
                    " ##### ",
                    " #   # ",
                    " #   # ",
                    " ##### "},

                     {" ##### ",
                      "     # ",
                      "     # ",
                      "  #### ",
                      "     # ",
                      "     # ",
                      "     # "},

                     {" ##### ",
                      " #   # ",
                      " #   # ",
                      " ##### ",
                      " #   # ",
                      " #   # ",
                      " ##### "},

                    {" ##### ",
                     " #   # ",
                     " #   # ",
                     " ##### ",
                     "     # ",
                     "     # ",
                     " ##### "}, 

                    {"       ", 
                     "   #   ", 
                     "   #   ", 
                     "       ", 
                     "   #   ", 
                     "   #   ", 
                     "       "}};
    for(int i = 0;i < 7;i++)
    {
        cout << numbers[buffer[0] - '0'][i] << "   " << numbers[buffer[1] - '0'][i] << "   " << numbers[10][i] << "   " << numbers[buffer[3] - '0'][i] << "   " << numbers[buffer[4] - '0'][i] << "   " << numbers[10][i] << "   " << numbers[buffer[6] - '0'][i] << "   " << numbers[buffer[7] - '0'][i] << '\n';
    }
}