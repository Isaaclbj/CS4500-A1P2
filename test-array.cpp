#include <iostream>
#include "array.h"
#include <assert.h>

int
main(int argc, char **argv)
{
    int ii = 0;
    IntArray* aa = new IntArray();
    
    // test for append
    for(; ii < 100; ii++)
    {
        aa->append(ii);
    }

    // test for length
    assert(aa->length() == 100);
    IntArray* bb = new IntArray();



    assert(!aa->equals(bb));
    ii = 0;
    for(; ii < 100; ii++)
    {
        bb->append(ii);
    }
    assert(aa->equals(bb));

    puts("all tests passed");
    return 0;
}
