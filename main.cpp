//Author: Larkin Koker
#include <iostream>
#include "libraries/bitmap.h"
#include <vector>
#include "libraries/response.h"
using namespace std;

bool imageValidator(bool, Bitmap);
bool redDetect(Pixel , vector<vector<Pixel>> , bool );
bool greenDetect(Pixel , vector<vector<Pixel>>, bool );


int main()
{
 string fileName;
 Bitmap image;
 vector <vector <Pixel> > bmp;
 Pixel rgb;
 bool validImage;
 bool red;
 bool green;
 Response blind;

 do{
   cout<<"What file do you want to open (or 'no' to quit)?"<<endl;
   getline(cin, fileName);
   
   if(fileName!="no"){
   
   image.open(fileName);
   validImage=imageValidator(validImage, image);
   
   
   if(validImage==true){
    bmp=image.toPixelMatrix();
    red=redDetect(rgb,bmp, red);
    green=greenDetect(rgb,bmp,green);
    blind.responseRED(red);
    blind.responseGREEN(green);
    blind.responseREDnGREEN(red, green);
    
    

   }else{
     cout<<"What file do you want to open (or 'no' to quit)?"<<endl;
   getline(cin, fileName);
   }
   }else{
     cout<<"Oh, no file? Don't waste my time then."<<endl;
   }

 }while (fileName != "no");

 return 0;
}

bool imageValidator(bool a, Bitmap image){
  a = image.isImage();
  return a;
}
bool redDetect(Pixel rgb , vector<vector<Pixel> > bmp ,bool r ){
  for(int i=0; i<bmp.size();i++){
 rgb=bmp[i][i];
  }
  if(rgb.red>rgb.green&&rgb.red>rgb.blue){
  r= true;
  return r;
  }else{
    r= false;
  }
  return r;
}


bool greenDetect(Pixel rgb, vector<vector<Pixel>>bmp, bool g){
 for(int i=0; i<bmp.size();i++){
  rgb=bmp[i][i];
 }
  if(rgb.red<rgb.green&&rgb.green>rgb.blue){
  g= true;
  return g;
  }else{
    g= false;
  }
 
 
  return g;
}





