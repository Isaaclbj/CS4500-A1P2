#pragma once

#include <cstdlib>
#include "object.h"
#include "string.h"

// assuming an array is a java-style arraylist
class Array : public Object {
   public:

    // constructor
    Array() {}

    // destructor
    ~Array() {}

    // putting an item at the end of the array
    virtual void append(Object* oo) {}

    // get the n'th item in the array
    Object* get(size_t nn) {}

    // remove the n'th item in the array
    // returning the removed item to the caller
    Object* remove(size_t nn) {}


    // returns the length of the array.
    virtual size_t length() {}

    // set n'th element to the given object
    // returns the replace Object.
    virtual Object* set(size_t nn, Object* oo) {}

    // get the index of an object in the array
    virtual size_t index_of(Object* oo) {}

    // Compares other with this array for equality.
    bool equals(Object* oo) {}

    size_t hash() {}
};



class IntArray : public Array {
 public:


  // constructor
  IntArray() {}

  // destructor
  ~IntArray() {}

  // putting an item at the end of the array
  void append(int oo) {}

  // get the n'th item in the array
  int get(size_t nn) {}


  // remove the n'th item in the array
  // returning the removed item to the caller
  int remove(size_t nn) {}

  // set n'th element to the given element
  // returns the replace Object.
  int set(size_t nn, int oo) {}

  // get the index of an element in the array
  size_t index_of(int oo) {}

  // Compares other with this array for equality.
  bool equals(Object* oo) {}

  size_t hash() {}
};

class FloatArray : public Array {
 public:

  // constructor
  FloatArray() {}

  // destructor
  ~FloatArray() {}

  // putting an item at the end of the array
  void append(float oo) {}

  // get the n'th item in the array
  float get(size_t nn) {}

  // remove the n'th item in the array
  // returning the removed item to the caller
  float remove(size_t nn) {}

  // set n'th element to the given element
  // returns the replace Object.
  float set(size_t nn, float oo) {}

  // get the index of an float in the array
  size_t index_of(float oo) {}

  // Compares other with this array for equality.
  bool equals(Object* oo) {}

  size_t hash() {}
};

class BoolArray : public Array {
 public:
  // constructor
  BoolArray() {}

  // destructor
  ~BoolArray() {}

  // putting an item at the end of the array
  void append(bool oo);

  // get the n'th item in the array
  bool get(size_t nn);

  // remove the n'th item in the array
  // returning the removed item to the caller
  bool remove(size_t nn);

  // set n'th element to the given element
  // returns the replace Object.
  bool set(size_t nn, bool oo);

  // get the index of an element in the array
  size_t index_of(bool oo);

  // Compares other with this array for equality.
  bool equals(Object* oo);

  size_t hash();
};

class StringArray : public Array {
 public:

  // constructor
  StringArray() {}

  // destructor
  ~StringArray() {}

  // putting an item at the end of the array
  void append(String* oo);
   
  // get the n'th item in the array 
  String* get(size_t nn);

  // get the index of an element in the array 
  size_t index_of(String* ss);

  // remove the n'th item in the array
  // returning the removed item to the caller
  String* remove(size_t nn);

  // set n'th element to the given object
  // returns the replace Object.
  String* set(size_t nn, String* oo);
};
