#include <stdio.h>
#include <stdlib.h>
#include "Validar.h"

int validar_pos(int x, int tam)
  {
     if(x>=1 && x<=tam)
       {
           return 0;   
       } else
       {
           return 1;
       }
  }
