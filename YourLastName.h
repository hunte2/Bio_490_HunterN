#pragma once
#include "Player.h"
class YourLastName:
   public Player
{
   protected :
     // put variables here to act as global variables within your file
     // You could, for example, you could have variables here to
     // record the Coords of the last torpedo you fired.

   public:
      YourLastName( string n );
      bool brace( Coords );
      Coords shoot();
      void sound( Coords, bool );
      void matchInit();
};

