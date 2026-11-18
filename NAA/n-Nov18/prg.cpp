#include <iostream>
#include "bbl_sort.h"
#include "Container.h"
using namespace std;
using namespace seneca;

int main() {
   cout << "OOP244NAA- Nov 18" << endl;
   double vals[] = { 10.1, 5.5, 20.3, 50.4, 1.1 };
   long lvals[] = { 10, 5, 20, 50 , 1, 2, 65, 5 };
   char cvals[] = "sifnswitnoserier";
   Container cnvals[] = { 10, 5.5, 20, 50, 1 };
   prn_csv(vals, 5);
   bbl_sort(vals, 5);
   prn_csv(vals, 5);
   bbl_sort(vals, 5, false);
   prn_csv(vals, 5);
   cout << "------------------" << endl;
   bbl_sort(lvals, 8);
   prn_csv(lvals, 8);
   cout << "------------------" << endl;
   bbl_sort(cvals, 16);
   prn_csv(cvals, 16);
   cout << "------------------" << endl;
   bbl_sort(cnvals, 5);
   prn_csv(cnvals, 5);
   return 0;
}