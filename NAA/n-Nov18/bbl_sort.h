#ifndef SENECA_BBL_SORT_H
#define SENECA_BBL_SORT_H
#include <iostream>
namespace seneca {

   /// <summary>
   /// swaps the content of two objects
   /// T must support rule of 3
   /// </summary>
   /// <typeparam name="T"></typeparam>
   /// <param name="a"></param>
   /// <param name="b"></param>
   template <typename T>
   void swap(T* a, T* b) {
      T t = *a;
      *a = *b;
      *b = t;
   }


   /// <summary>
   /// sort an array of types
   /// type must support operator &lt; and operator &gt;
   /// using swap template type needs rule of 3
   /// </summary>
   /// <typeparam name="type"></typeparam>
   /// <param name="arr"></param>
   /// <param name="size"></param>
   /// <param name="ascending"></param>
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
   /// prints the array element in csv format
   /// type must be insertable into ostream
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
#endif // !SENECA_BBL_SORT_H
