class Base {
   int data;

   void doFooStuff();
protected:
   // only accessible to derived classed
   void faaStuff();
public:
   Base();
   Base(int value);
   void faa();
   void foo() {
      doFooStuff();
   };

};


class Derived : public Base {

public:
   Derived(){

   }
   Derived(int v) :Base(v * 2) {

   }
   void faa() {
      faaStuff();
   }


};

int main() {
   Derived D;
   D.foo();
   D.faa();
 
}