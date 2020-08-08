#include <iostream>
#include <unistd.h>

int main()
{
  std::string n;
  std::cin >> n;

  int i;
  for (i = n.size( )-1; i >= 0 ;--i)
  {
     char m =  n[i];
     usleep(1000000);
     std::cout << m << std::endl;

  }
  return 0;
}
