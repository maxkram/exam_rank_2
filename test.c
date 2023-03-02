// Shows program to fill polygon using floodfill
// algorithm
#include <graphics.h>
#include <stdio.h>
// Describes flood fill algorithm
void flood(int x1, int y1, int new_col, int old_col){
   // Checking current pixel is old_color or not
   if (getpixel(x1, y1) == old_col) {
      // Putting new pixel with new color
      putpixel(x1, y1, new_col);
      // Shows recursive call for bottom pixel fill
      flood(x1 + 1, y1, new_col, old_col);
      //Shows recursive call for top pixel fill
      flood(x1 - 1, y1, new_col, old_col);
      // Shows recursive call for right pixel fill
      flood(x1, y1 + 1, new_col, old_col);
      // Shows recursive call for left pixel fill
      flood(x1, y1 - 1, new_col, old_col);
   }
}
int main(){
   int gd1, gm1 = DETECT;
   // Initializing graph
   initgraph(&gd1, &gm1, "");
   //Shows rectangle coordinate
   int top1, left1, bottom1, right1;
   top1 = left1 = 50;
   bottom1 = right1 = 300;
   // Shows rectangle for print rectangle
   rectangle(left1, top1, right1, bottom1);
   // Fills start cordinate
   int x1 = 51;
   int y1 = 51;
   // Shows new color to fill
   int newcolor = 12;
   // Shows old color which you want to replace
   int oldcolor = 0;
   // Calling for fill rectangle
   flood(x1, y1, newcolor, oldcolor);
   getch();
   return 0;
}