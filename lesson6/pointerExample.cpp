#include<iostream> 

int main() {
   int a = 5; 
   int * ptr = &a; 
   std::cout << "Print out value a: " << a << std::endl; 

   // '*' what the pointer is pointing at (the element)
   std::cout << "Pointer is pointing at the value: " << *ptr << std::endl; 

   // '&' the memory address of the variable a
   std::cout << "Memory address of a: " << &a << std::endl;

   // the value that the pointer contains
   std::cout << "Memory address inside of the pointer: " << ptr << std::endl; // address of the variable a

   // the memory address of the pointer
   std::cout << "Memory address of the pointer: " << &ptr << std::endl; // different address from a

   // create an array in the heap with 1, 2, 3, 4, 5
   ptr = new int[5]; 
   for (int i = 1; i < 6; i++) {
      ptr[i - 1] = i; 
   }

   // print out in order
   std::cout << *ptr << " "; 
   for (int i = 1; i < 5; i++) {
      ptr++; 
      std::cout << *ptr << " "; 
   }
   std::cout << std::endl; 

   // print in opposite direction
   std::cout << *ptr << " "; 
   for (int i = 4; i >= 1; i--) {
      ptr--;
      std::cout << *ptr << " "; 
   }
   std::cout << std::endl; 

   // always free or deallocate the memory in the heap 
   delete [] ptr; 
}