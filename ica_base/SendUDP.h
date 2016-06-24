#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "Cudpux.h"
#include <iostream>
using namespace std;

#define PORT 7654

class SendUDP{

public:
  SendUDP();
  int Run(unsigned int);
  
private:

  Cudp myudp;
  int totp;
  char mhost[128];
  char buf[3];
  
};
