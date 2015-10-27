#include <MeggyJrSimple.h>//required code, line 1 of 2

void setup() //run once, when the sketch starts
{
  MeggyJrSimpleSetup();//required code, line 2 of 2
}
struct Drawing//initializes the things the struct will keep track of
{
  int x;
  int y;
  int color;
};

int pixelcolor1 = Dark;//variables for each of the colors of every coordinate in the canvas (not including the pallet and the clear button)
int pixelcolor2 = Dark;
int pixelcolor3 = Dark;
int pixelcolor4 = Dark;
int pixelcolor5 = Dark;
int pixelcolor6 = Dark;
int pixelcolor7 = Dark;
int pixelcolor8 = Dark;
int pixelcolor9 = Dark;
int pixelcolor10 = Dark;
int pixelcolor11 = Dark;
int pixelcolor12 = Dark;
int pixelcolor13 = Dark;
int pixelcolor14 = Dark;
int pixelcolor15 = Dark;
int pixelcolor16 = Dark;
int pixelcolor17 = Dark;
int pixelcolor18 = Dark;
int pixelcolor19 = Dark;
int pixelcolor20 = Dark;
int pixelcolor21 = Dark;
int pixelcolor22 = Dark;
int pixelcolor23 = Dark;
int pixelcolor24 = Dark;
int pixelcolor25 = Dark;
int pixelcolor26 = Dark;
int pixelcolor27 = Dark;
int pixelcolor28 = Dark;
int pixelcolor29 = Dark;
int pixelcolor30 = Dark;
int pixelcolor31 = Dark;
int pixelcolor32 = Dark;
int pixelcolor33 = Dark;
int pixelcolor34 = Dark;
int pixelcolor35 = Dark;
int pixelcolor36 = Dark;
int pixelcolor37 = Dark;
int pixelcolor38 = Dark;
int pixelcolor39 = Dark;
int pixelcolor40 = Dark;
int pixelcolor41 = Dark;
int pixelcolor42 = Dark;
int pixelcolor43 = Dark;
int pixelcolor44 = Dark;
int pixelcolor45 = Dark;
int pixelcolor46 = Dark;
int pixelcolor47 = Dark;
int pixelcolor48 = Dark;
int pixelcolor49 = Dark;
int pixelcolor50 = Dark;
int pixelcolor51 = Dark;
int pixelcolor52 = Dark;
int pixelcolor53 = Dark;
int pixelcolor54 = Dark;
int pixelcolor55 = Dark;


//establishes the struct region
Drawing pixel1 = {0,6,pixelcolor1};
Drawing pixel2 = {1,6,pixelcolor2};
Drawing pixel3 = {2,6,pixelcolor3};
Drawing pixel4 = {3,6,pixelcolor4};
Drawing pixel5 = {4,6,pixelcolor5};
Drawing pixel6 = {5,6,pixelcolor6};
Drawing pixel7 = {6,6,pixelcolor7};
Drawing pixel8 = {7,6,pixelcolor8};
Drawing pixel9 = {0,5,pixelcolor9};
Drawing pixel10 = {1,5,pixelcolor10};
Drawing pixel11 = {2,5,pixelcolor11};
Drawing pixel12 = {3,5,pixelcolor12};
Drawing pixel13 = {4,5,pixelcolor13};
Drawing pixel14 = {5,5,pixelcolor14};
Drawing pixel15 = {6,5,pixelcolor15};
Drawing pixel16 = {7,5,pixelcolor16};
Drawing pixel17 = {0,4,pixelcolor17};
Drawing pixel18 = {1,4,pixelcolor18};
Drawing pixel19 = {2,4,pixelcolor19};
Drawing pixel20 = {3,4,pixelcolor20};
Drawing pixel21 = {4,4,pixelcolor21};
Drawing pixel22 = {5,4,pixelcolor22};
Drawing pixel23 = {6,4,pixelcolor23};
Drawing pixel24 = {7,4,pixelcolor24};
Drawing pixel25 = {0,3,pixelcolor25};
Drawing pixel26 = {1,3,pixelcolor26};
Drawing pixel27 = {2,3,pixelcolor27};
Drawing pixel28 = {3,3,pixelcolor28};
Drawing pixel29 = {4,3,pixelcolor29};
Drawing pixel30 = {5,3,pixelcolor30};
Drawing pixel31 = {6,3,pixelcolor31};
Drawing pixel32 = {7,3,pixelcolor32};
Drawing pixel33 = {0,2,pixelcolor33};
Drawing pixel34 = {1,2,pixelcolor34};
Drawing pixel35 = {2,2,pixelcolor35};
Drawing pixel36 = {3,2,pixelcolor36};
Drawing pixel37 = {4,2,pixelcolor37};
Drawing pixel38 = {5,2,pixelcolor38};
Drawing pixel39 = {6,2,pixelcolor39};
Drawing pixel40 = {7,2,pixelcolor40};
Drawing pixel41 = {0,1,pixelcolor41};
Drawing pixel42 = {1,1,pixelcolor42};
Drawing pixel43 = {2,1,pixelcolor43};
Drawing pixel44 = {3,1,pixelcolor44};
Drawing pixel45 = {4,1,pixelcolor45};
Drawing pixel46 = {5,1,pixelcolor46};
Drawing pixel47 = {6,1,pixelcolor47};
Drawing pixel48 = {7,1,pixelcolor48};
Drawing pixel49 = {1,0,pixelcolor49};
Drawing pixel50 = {2,0,pixelcolor50};
Drawing pixel51 = {3,0,pixelcolor51};
Drawing pixel52 = {4,0,pixelcolor52};
Drawing pixel53 = {5,0,pixelcolor53};
Drawing pixel54 = {6,0,pixelcolor54};
Drawing pixel55 = {7,0,pixelcolor55};

Drawing pixelArray[55] = {pixel1, pixel2, pixel3, pixel4, pixel5, pixel6, pixel7, pixel8, pixel9, pixel10, pixel11, pixel12, pixel13, pixel14, pixel15, pixel16, pixel17, pixel18, pixel19, pixel20, pixel21, pixel22, pixel23, pixel24, pixel25, pixel26, pixel27, pixel28, pixel29, pixel30, pixel31, pixel32, pixel33, pixel34, pixel35, pixel36, pixel37, pixel38, pixel39, pixel40, pixel41, pixel42, pixel43, pixel44, pixel45, pixel46, pixel47, pixel48, pixel49, pixel50, pixel51, pixel52, pixel53, pixel54, pixel55};
//creates an array
int xdot = 7;//player
int ydot = 0;

int dotcolor = Blue;//variable for the color of the player

int xclear = 0;//clear button
int yclear = 0;

int xred = 0;//red color - press "a" to change the color
int yred = 7;

int xorange = 1;//orange color
int yorange = 7;

int xyellow = 2;//yellow color
int yyellow = 7;

int xgreen = 3;//green color
int ygreen = 7;

int xblue = 4;//blue color
int yblue = 7;

int xpurple = 5;//purple color
int ypurple = 7;

int xpink = 6;//pink color
int ypink = 7;

int xwhite = 7;//white color
int ywhite = 7;

void loop()//run over and over again
{
  ClearSlate();
    
  CheckButtonsDown();//check to see which buttons are down
    if (Button_Up)         
    ydot = ydot + 1; //If the up button is pressed, y coordinate is increased by 1
    
    if (ydot > 7) //keeps the y coordinate from going out of bounds
    ydot = 7;

    if (Button_Down)       
    ydot = ydot - 1; //if the down button is pressed, y coordinate is decreased by 1
  
    if (ydot < 0)
    ydot = 0; //keeps the y coordinate from going lower than 0  

    if (Button_Right)       
    xdot = xdot + 1; //if the right button is pressed, x coordinate is increased by 1

    if (xdot > 7)
    xdot = 7; //keeps the x coordinate from going out of bounds

    if (Button_Left)       
    xdot = xdot - 1; //if the left button is pressed, x coordinate is decreased by 1
  
    if (xdot < 0)
    xdot = 0; //keeps the x coordinate from going lower than 0
    
    if (Button_A)
    Color();//calls the function color, changes color of the brush or clears the screen
    
    if (Button_B)
    Draw();//calls the function draw, "draws" a pixel to the screen
    
    Pallet();//draws the pallet
    //below, it draws the pixels to the screen, couldn't use "pixelArray[number -].color", didn't work? also was originally using a for loop, but I needed to change it b/c the pixels were displayed individually instead of all at once
   for (int i = 0 ; i< 55 ; i++)
   {
    DrawPx(pixelArray[i].x, pixelArray[i].y, pixelArray[i].color);
   }//draws the canvas/pixelArray to the screen
    DrawPx(xclear, yclear, Red);//draws the clear button
    DrawPx(xdot, ydot, dotcolor);//draws the player
    DisplaySlate();//displays the player and pallet to the screen
    delay(200);//waits a little bit
}//end of main loop
  
void Pallet()//function that draws the pallet at the top
{
  DrawPx(xred, yred, Red);//draws the red color
  DrawPx(xorange, yorange, Orange);//draws the orange color
  DrawPx(xyellow, yyellow, Yellow);//draws the yellow color
  DrawPx(xgreen, ygreen, Green);//draws the green color
  DrawPx(xblue, yblue, Blue);//draws the blue color
  DrawPx(xpurple, ypurple, Violet);//draws the purple color
  DrawPx(xpink, ypink, DimViolet);//draws the pink color
  DrawPx(xwhite, ywhite, White);//draws the white color
}

void Color()//function that changes the color of the brush or clears the screen
{
if (xdot == xred && ydot == yred)//checks to see if the player is on the red dot
    dotcolor = Red;//makes the player red
  if (xdot == xorange && ydot == yorange)//checks to see if the player is on the orange dot
    dotcolor = Orange;//makes the player orange
  if (xdot == xyellow && ydot == yyellow)//checks to see if the player is on the yellow dot
    dotcolor = Yellow;//makes the player yellow
  if (xdot == xgreen && ydot == ygreen)//checks to see if the player is on the green dot
    dotcolor = Green;//makes the player yellow
  if (xdot == xblue && ydot == yblue)//checks to see if the player is on the blue dot
    dotcolor = Blue;//makes the player blue
  if (xdot == xpurple && ydot == ypurple)//checks to see if the player is on the purple dot
    dotcolor = Violet;//makes the player purple
  if (xdot == xpink && ydot == ypink)//checks to see if the player is on the purple dot
    dotcolor = DimViolet;//makes the player pink
  if (xdot == xwhite && ydot == ywhite)//checks to see if the player is on the white dot
    dotcolor = White;//makes the player white
  if (xdot == xclear && ydot == yclear)//checks to see if the player is on the clear button
    for (int i = 0; i<56; i++)
    {
    pixelArray[i].color = Dark;//sets the canvas area to "dark" basically "clears" the screen
    }
}
  
void Draw()//function to draw things to the screen
/* 
This part of the code basically checks what color the player/brush is
and then, based on which pixel/coordinate it's sitting on, changes the
color of that pixel from "Dark" to the brush color. Uses for loops to
manipulate the number associated with the coordinate, easier than writing
it out manually.
  
*/
{
  if (dotcolor == Red)
  {
    for (int i = 0; i<56; i++)
    if (xdot == pixelArray[i].x && ydot == pixelArray[i].y)
    {
      pixelArray[i].color = Red;
    }
  }
  if (dotcolor == Orange)
  {
    for (int i = 0; i<56; i++)
    if (xdot == pixelArray[i].x && ydot == pixelArray[i].y)
    {
      pixelArray[i].color = Orange;
    }
  }
  if (dotcolor == Yellow)
  {
    for (int i = 0; i<56; i++)
    if (xdot == pixelArray[i].x && ydot == pixelArray[i].y)
    {
      pixelArray[i].color = Yellow;
    }
  }
  if (dotcolor == Green)
  {
    for (int i = 0; i<56; i++)
    if (xdot == pixelArray[i].x && ydot == pixelArray[i].y)
    {
      pixelArray[i].color = Green;
    }
  }
  if (dotcolor == Blue)
  {
    for (int i = 0; i<56; i++)
    if (xdot == pixelArray[i].x && ydot == pixelArray[i].y)
    {
      pixelArray[i].color = Blue;
    }
  }
  if (dotcolor == Violet)
  {
    for (int i = 0; i<56; i++)
    if (xdot == pixelArray[i].x && ydot == pixelArray[i].y)
    {
      pixelArray[i].color = Violet;
    }
  }
  if (dotcolor == DimViolet)
  {
    for (int i = 0; i<56; i++)
    if (xdot == pixelArray[i].x && ydot == pixelArray[i].y)
    {
      pixelArray[i].color = DimViolet;
    }
  }
  if (dotcolor == White)
  {
    for (int i = 0; i<56; i++)
    if (xdot == pixelArray[i].x && ydot == pixelArray[i].y)
    {
      pixelArray[i].color = White;
    }
  }
}

  
