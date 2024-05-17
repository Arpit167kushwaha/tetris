#include "color.h"

   const Color red = {231, 76, 60,255};
   const Color green = {46, 204, 113,255};
   const Color blue = {52, 152, 219,255};
   const Color yellow = {241, 196, 15,255};
   const Color purple = {155, 89, 182,255};
   const Color orange = {230, 126, 34,255};
   const Color pink = {241, 196, 15,255};

   std::vector<Color> getcolors(){
    std::vector<Color> colors;
    colors.push_back(red);
    colors.push_back(green);
    colors.push_back(blue);
    colors.push_back(yellow);
    colors.push_back(purple);
    colors.push_back(orange);
    colors.push_back(pink);
    return colors;}

    