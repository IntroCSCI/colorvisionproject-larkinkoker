//Author:Larkin
#include "response.h"
#include <string>
#include <iostream>
using namespace std;


void Response::responseRED(bool red){
  r=red;
  if(r==true){
    cout<<"Red has been detected."<<endl;
  }else{
    cout<<"No red here."<<endl;
  }

}

void Response::responseGREEN(bool green){
  g=green;
  if(g==true){
    cout<<"Green has been detected."<<endl;
  }else{
    cout<<"NO green here."<<endl;
  }
  
}

void Response::responseREDnGREEN(bool red, bool green){
  r=red;
  g=green;
  if(r==true&&g==true){
    cout<<"Green and red have both been detected. This can cause problems for those that suffer from Red/Green Colorblindness."<<endl;
  }else{
    cout<<"This file appears safe for those that suffer from Red/Green colorblindness."<<endl;
  }
}



