#include "MicroBit.h"

MicroBit uBit;

int main()
{
    uBit.init();
    
    uBit.display.scroll("PLANTS");
    
    release_fiber();
}
