#pragma once
#include <iostream>
#include "array.h"
#include <assert.h>

class Integer : public Object
{
    public:
        int val;
        Integer(int ii)
        {
            val = ii;
        }
};

int
main(int argc, char **argv)
{
    int ii = 0;
    Array aa;
    for(; ii < 100; ii++)
    {
        Integer jj(ii);
        aa.append(jj);
    }

    assert(aa.length() == 100);
    Array bb;

    assert(aa.equals(bb) == 0);
    ii = 0;
    for(; ii < 100; ii++)
    {
        Integer dd(ii);
        bb.append(dd);
    }
    assert(aa.equals(bb) == 0);
    assert(aa.equals(aa) == 1);

    puts("all tests passed");
    return 0;
}