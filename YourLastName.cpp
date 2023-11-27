#include "YourLastName.h"

// constructor.  passes the player name to Player.  
// You can add other setup things here if you want.
YourLastName::YourLastName( string n) : Player(n)
{
   // your code here ?
}

// brace takes a Coords as an argument and returns true if
// a torpedo there in myOcean hits a ship.  This is you
// reporting  fairly whether your ship was hit.  
// This is also the only chance you get to
// record this fact in case you want to do something about
// it.   (It may not help you that much to know if YOU are 
// being hit.)
bool YourLastName::brace( Coords c )
{
   return myOcean[c.i][c.j].ship; // leave this line in
}

// shoot() is a request to this Player to fire a
// torpedo at the opponent's ocean.  The return value
// is the place you want to shoot at your opponent.
// It is up to this you to record where you made this shot
// if you want to remember it.  
Coords YourLastName::shoot()
{
   Coords c{0,0};

   // your code here
   // Here is a place where you need to put some code.  Where do you
   // shoot next?  What is your strategy?  The variable 
   // yourOcean[][] is there for you to record all of your 
   // previous torpedos and whether they hit a ship.  

   return c;
}

// This is the system reporting to you the results
// of shooting at the other player 
// as Coords c, hit=true is a hit, false=miss.  
// You should at least record that you fired a torpedo
// here and whether there is a ship or not
// at this location in yourOcean (the other player's).  
// You may also 
// want to set up information for your next shot 
// (depending on whether you hit or missed).
void YourLastName::sound( Coords c, bool hit )
{
   // your code here
}


// This function is called before a match starts,
// before the two players start firing torpedos. 
// At the very least, you need to put a ship in
// your ocean, 4 consecutive cells verticle or
// horizontal (with ship=true).  You may also
// set up anything else you like for your strategy.
void YourLastName::matchInit()
{
    // your code here
}
