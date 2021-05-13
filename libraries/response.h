//author Larkin Koker
#ifndef RESPONSE_H
#define RESPONSE_H
#include <string>
#include <vector>
#include <iostream>



class Response{
  private:
  bool r;
  bool g;

  public:

  void responseRED(bool);

  void responseGREEN(bool);

  void responseREDnGREEN(bool,bool);


};
#endif