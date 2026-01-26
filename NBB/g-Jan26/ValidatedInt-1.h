#ifndef SENECA_VALIDATED_H
#define SENECA_VALIDATED_H
namespace seneca {
   struct ValidatedInt {
      int value;
      int minValue;
      int maxValue;
   };
   void initialize(ValidatedInt& vi,int val, int minv, int maxv);
   void setValue(ValidatedInt& vi, int newVal);
   int getValue(const ValidatedInt& vi);
   void display(const ValidatedInt& vi);
   void addToValue(ValidatedInt& vi, int amount);
   void reduceValue(ValidatedInt& vi, int amount);

}
#endif 
