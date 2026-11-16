#ifndef SENECA_MYSORT_H
#define SENECA_MYSORT_H
#include <iostream>

namespace seneca {

   /// <summary>
   /// swaps the two values<br />
   /// the type must support rule of 3
   /// </summary>
   /// <typeparam name="type">template type</typeparam>
   /// <param name="a">to be swapped</param>
   /// <param name="b">to be swapped</param>
   template <typename type>  // only applyed to the upcomming scop
   void swap(type* a, type* b) {
      type t = *a;  // copy constructor                 
      *a = *b;    // copy assignment
      *b = t;
      // local copy dies, destructor
   }



   /// <summary>
   /// Sorts and array using bubble sort
   /// The array element type must support rule of 3
   /// operators &lt; and &gt; must be supported
   /// </summary>
   /// <typeparam name="type"></typeparam>
   /// <param name="arr"></param>
   /// <param name="size"></param>
   /// <param name="ascending">true : ascending, false: descending</param>
   template <typename type>
   void bbl_sort(type arr[], size_t size, bool ascending = true) {
      for (size_t i = 0; i < size - 1; i++) {
         for (size_t j = 0; j < size - i - 1; j++) {
            if (ascending) {
               if (arr[j] > arr[j + 1]) {
                  swap(&arr[j], &arr[j + 1]);
               }
            }
            else {
               if (arr[j] < arr[j + 1]) {
                  swap(&arr[j], &arr[j + 1]);
               }
            }
         }
      }
   }

   /// <summary>
   /// prints an array in comma separated format
   /// element of the array must be insertable into ostream
   /// </summary>
   /// <typeparam name="type"></typeparam>
   /// <param name="arr"></param>
   /// <param name="size"></param>
   template <typename type>
   void prn_csv(type arr[], size_t size, std::ostream& ostr = std::cout) {
      for (size_t i = 0; i < size; i++) {
         ostr << arr[i];
         if (i != size - 1)  ostr << ", ";
      }
      ostr << std::endl;
   }


}
#endif // !SENECA_MYSORT_H

