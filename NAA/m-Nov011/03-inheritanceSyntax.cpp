class Base {
   int m_data;
protected:
   void Der_Only();
public:
   Base();
   Base(int value);

   void foo();

};

class Derived : public Base {
   double m_data;
public:
   void foo() {
      Base::foo();
      // additional things
   }
   Derived() :Base(1000), m_data{} {}
   Derived(double data):Base(int(data)), m_data(data){ }
   Derived(int data, double d_data) : Base(data), m_data(d_data) {
      Der_Only();
   }
};


int main() {
   Derived D;
   D.foo();
   D.Base::foo();
   return 0;
}

