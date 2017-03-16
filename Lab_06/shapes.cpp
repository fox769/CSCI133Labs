#include <iostream>
#include <stdlib.h>
#include "shapes.h"

using std::cout;
using std::endl;

void line(int size, char c){
    for (int col = 1; col <= size; col++) {
      cout << c;
    }
}


/*
  * 
  ** 
  ***
  ****
  *****
  height = 5
*/
void tri1(int height){
  for (int row = 1; row <= height; row++) {
    line(row,'*');
    cout << endl;
  }

}

/*
  AAAA*
  AAA**  
  AA***
  A****
  *****
  height = 5

 */
void tri2(int height){
  for (int row = 1; row <= height; row++) {
    line(height-row,' ');
    line(row,'*');
    cout << endl;
  }

}


void rect(int width, int height){
  line(width,'*');
  cout << endl;
  for (int row=1; row <=height-2; row++){
    cout << '*';
    line(width-2,' ');
    cout << '*';
    cout << endl;
  }
  line(width,'*');
  cout << endl;

}


/*
  ***
  ****
  *****
  side = 5 height = 3
*/
void trap(int side, int height){
  for (int row = 1; row <= height; row++) {
    line(side-height+row,'*');
    cout << endl;
  }

}


void circle(int r){
  int x,y;

  for (y = -2*r; y <= 2*r;y=y+1){
    for (x = -2 * r; x < 2*r; x=x+1) {
      if (abs(x*x + y*y - r*r) <=1) 
	cout << '*';
      else
	cout << ' ';
    }
    cout  << endl;
  }
  
}
