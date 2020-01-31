#include <iostream>
#include "array.h"
#include <assert.h>


int
main(int argc, char **argv)
{
    // tests

    // Object array
    printf("tests for Object Array\n");

    Array* aa = new Array();
    if(aa)
    {
        puts("Object array constructor: OK");
    }
    else
    {
        abort();
    }
    

    assert(aa->length() == 0);
    Object* foo = new Object();
    aa->append(foo);
    assert(aa->length() == 1);
    assert(aa->get(0)->equals(foo));
    
    Object* bar = new Object();
    Object* oo = aa->set(0, bar);

    // tests for set
    assert(foo->equals(oo));
    assert(bar->equals(aa->get(0)));

    // tests for remove
    Object* nn = aa->remove(0);
    assert(nn->equals(bar));
    assert(aa->length() == 0);
    delete(foo);
    delete(bar);

    // tests for index_of
    foo = new Object;
    bar = new Object;
    aa->append(foo);
    aa->append(bar);
    assert(aa->index_of(bar) == 1);

    // tests for destructor
    delete(aa);
    if(aa)
    {
        abort();
    }
    else{
        puts("Object array destructor: OK");
    }

    printf("tests for Object Array passed\n");

    // tests for IntArray

    // tests for append
    IntArray *ia = new IntArray();
    if(ia)
    {
        puts("Intger array constructor: OK");
    }
    else
    {
        abort();
    }

    // tests for append and get
    assert(ia->length() == 0);
    ia->append(0);
    assert(ia->length() == 1);
    ia->append(1);
    assert(ia->length() == 2);

    
    assert(ia->get(0) == 0);
    assert(ia->get(1) == 1);

    //tests for set

    int ii = ia->set(0, 100);
    assert(ii == 0);
    assert(ia->get(0) == 100);

    // indexof
    assert(ia->index_of(100) == 0);
    assert(ia->index_of(1) == 1);

    // tests for remove
    ii = ia->remove(0);
    assert(ii = 100);
    assert(ia->length() == 1);
    ii = ia->remove(0);
    assert(ii = 1);
    assert(ia->length() == 0);

    // delete
    delete(ia);
    if(ia)
    {
        abort();
    }
    else
    {
        puts("intArray destructor: OK");
    }

    printf("tests for Integer Array passed\n");
    
    // FloatArray
    
    FloatArray* fa = new FloatArray();
    if(fa)
    {
        puts("float array constructor: OK");
    }
    
    assert(fa->length() == 0);
    fa->append(1.0);
    assert(fa->length() == 1);
    fa->append(2.0);
    assert(fa->length() == 2);

    // get
    assert(fa->get(0) == 1.0);
    assert(fa->get(1) == 2.0);

    // index_of
    assert(fa->index_of(1.0) == 0);
    assert(fa->index_of(2.0) == 1);

    // remove
    float ff = fa->remove(0);
    assert(ff = 1.0);
    assert(fa->length() == 1);

    // set
    ff = fa->set(0, 100.0);
    assert(ff = 2.0);
    assert(fa->get(0) == 100.0);
    
    // destructor
    delete(fa);
    if(fa)
    {
        abort();
    }
    else
    {
        puts("Float Array destructor: OK");
    }
    printf("tests for Float Array passed\n");

    // bool array

    BoolArray *ba = new BoolArray();
    if(ba)
    {
        puts("bool array constructor: OK");
    }
    else
    {
        abort();
    }

    bool f = false;
    bool tt = true;
    assert(ba->length() == 0);
    ba->append(f);
    assert(ba->length() == 1);
    ba->append(tt);
    assert(ba->length() == 2);
    
    assert(ba->get(0) == f);
    assert(ba->get(1) == tt);

    //remove
    bool foo2 = ba->remove(0);
    assert(foo2 == false);
    assert(ba->length() == 1);

    
    // set
    bool bar2 = ba->set(0, false);
    assert(bar2);
    assert(!(ba->get(0)));

    // index_of
    assert(ba->index_of(false) == 0);

    // delete
    delete(ba);

    if(ba)
    {
        abort();
    }
    else
    {
        puts("ba destructor: OK");
    }
    
    printf("tests for Integer Array passed\n");
    puts("all tests passed");
    return 0;
}
