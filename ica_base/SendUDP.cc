#include "SendUDP.h"

SendUDP::SendUDP(){
  myudp = Cudp(PORT);
  totp=0;
  
  strcpy(mhost,"137.138.194.204");
}
int SendUDP::Run(unsigned int sleep_us)
{
  strcpy(buf,"ON");
  myudp.SendTo(mhost,PORT,buf,2);
  cout << "Sent VETO ON packet" << endl;
  totp++;
  usleep(sleep_us);
  strcpy(buf,"OF");
  myudp.SendTo(mhost,PORT,buf,2);
  cout << "Sent VETO OFF packet" << endl;
  usleep(sleep_us);
  totp++;
  return totp;
}
