#include <iostream>
#include "ValidatedInt.h"
using namespace std;
namespace seneca {




   void initialize(ValidatedInt& vi,int val, int minv, int maxv) {
      vi.minValue = minv;
      vi.maxValue = maxv;
      setValue(vi, val);  // Reuse setValue for validation
   }

   void setValue(ValidatedInt& vi, int newVal) {
      if (newVal < vi.minValue) {
         vi.value = vi.minValue;
      }
      else if (newVal > vi.maxValue) {
         vi.value = vi.maxValue;
      }
      else {
         vi.value = newVal;
      }
   }

   int getValue(const ValidatedInt& vi) {
      return vi.value;
   }

   void display(const ValidatedInt& vi) {
      cout << "Value: " << vi.value
         << " (range: " << vi.minValue
         << " to " << vi.maxValue << ")" << std::endl;
   }

   void addToValue(ValidatedInt& vi, int amount) {
      setValue(vi, vi.value + amount);
   }

   void reduceValue(ValidatedInt& vi, int amount) {
      setValue(vi, vi.value - amount);
   }

}