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
    delete foo;
    delete bar;

    // tests for clear
    aa->clear();
    assert(aa->length() == 0);

    // tests for hash and equal
    Array* bb = new Array();
    assert(aa->equals(bb));
    assert(aa->hash() == aa->hash());

    foo = new Object;
    aa->append(foo);
    assert(aa->hash() != bb->hash());
    assert(!(aa->equals(bb)));

    bb->append(foo);
    assert(aa->equals(bb));
    assert(aa->hash() == bb->hash());

    delete foo;

    // tests for destructor
    delete aa;
    delete bb;

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

    // tests for clear
    ia->clear();
    assert(ia->length() == 0);

    // tests for hash and equal
    IntArray *ib = new IntArray();
    assert(ia->equals(ib));
    assert(ia->hash() == ib->hash());

    
    ia->append(3);
    assert(ia->hash() != ib->hash());
    assert(!(ia->equals(ib)));

    ib->append(3);
    assert(ia->equals(ib));
    assert(ia->hash() == ib->hash());

    // delete
    delete ia;
    delete ib;

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
    assert(fa->get(0) - 1.0 < 0.001);
    assert(fa->get(1) - 2.0 < 0.001);

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

    // tests for clear
    fa->clear();
    assert(fa->length() == 0);

    // tests for hash and equal
    FloatArray *fb = new FloatArray();
    assert(fa->equals(fb));
    assert(fa->hash() == fb->hash());

    
    fa->append(3.00);
    assert(fa->hash() != fb->hash());
    assert(!(fa->equals(fb)));

    fb->append(3.00);
    assert(fa->equals(fb));
    assert(fa->hash() == fb->hash());

    // delete
    delete fb;
    
    // destructor
    delete fa;
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

    // tests for clear
    ba->clear();
    assert(ba->length() == 0);

    // tests for hash and equal
    BoolArray *bc = new BoolArray();
    assert(ba->equals(bc));
    assert(ba->hash() == bc->hash());

    
    ba->append(true);
    assert(ba->hash() != bc->hash());
    assert(!(ba->equals(bc)));

    bc->append(true);
    assert(ba->equals(bc));
    assert(ba->hash() == bc->hash());

    // delete
    delete bc;

    // delete
    delete ba;
    
    printf("tests for Bool Array passed\n");

    // tests for string array
    StringArray *sa = new StringArray();
    if(sa)
    {
        puts("bool array constructor: OK");
    }
    else
    {
        abort();
    }

    String * strfoo = new String("foo");
    String * strbar = new String("bar");

    assert(sa->length() == 0);
    sa->append(strfoo);
    assert(sa->length() == 1);
    sa->append(strbar);
    assert(sa->length() == 2);
    
    assert(sa->get(0)->equals(strfoo));
    assert(sa->get(1)->equals(strbar));

    //remove
    String * str_ = sa->remove(0);
    assert(str_->equals(strfoo));
    assert(sa->length() == 1);

    
    // set
    str_ = sa->set(0, strfoo);
    assert(str_->equals(strbar));
    assert(sa->get(0)->equals(strfoo));

    // index_of
    assert(ba->index_of(strfoo) == 0);

    // tests for clear
    sa->clear();
    assert(sa->length() == 0);

    // tests for hash and equal
    StringArray *sb = new StringArray();
    assert(sa->equals(sb));
    assert(sa->hash() == sb->hash());

    
    sa->append(strfoo);
    assert(sa->hash() != sb->hash());
    assert(!(sa->equals(sb)));

    sb->append(strfoo);
    assert(sa->equals(sb));
    assert(sa->hash() == sb->hash());

    // delete
    delete sa;

    // delete
    delete sb;
    
    printf("tests for String Array passed\n");
    puts("all tests passed");
    return 0;
}
