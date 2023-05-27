#include<iostream> 

int main() {
   int a = 5; 
   int * ptr = &a; 
   std::cout << a << std::endl; 
   std::cout << "This is the actual value " << *ptr << std::endl; 
   std:: cout << "This is the memory address " << ptr << std::endl; 

   ptr = new int[5]; 
   for (int i = 1; i < 6; i++) {
      ptr[i - 1] = i; 
   }
   std::cout << *ptr << std::endl; 
   for (int i = 1; i < 5; i++) {
      ptr++; 
      std::cout << *ptr << std::endl; 
   }
   ptr++;
   std::cout << *ptr << std::endl;

   // for (int i = 4; i >= 0; i --) {
   //    std::cout << ptr[i] << std::endl;
   // }

   // for (int i = 4; i >= 0; i--) {
   //    std::cout << ptr[i] << std::endl;
   // }

   // '*' what the pointer is pointing at (the element)
   // '&' the memory address of the element

   delete [] ptr; 
}