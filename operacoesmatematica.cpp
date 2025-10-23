#include <iostream> 
#include <cstdlib>
#include <iomanip>

int main()
{
   int a; 
   float b;
   char c;
   bool d;


   a = 5;
   b = 2.3;
   c = 'a';
   d = true;


   std::cout << std::fixed << std::setprecision(1);

   std::cout << "\n o valor de a = " << a;
   std::cout << "\n o valor de a = " << b;
   std::cout << "\n o valor de a = " << c;

   std::cout << "\n o valor de d = " << d << "\n";


   std::cout << "\n Digite um valor para 'a' (int): ";
   std::cin >> a;
   std::cout << "Digite um valor parqa 'b' (float): ";
   std::cin >> b; 
   std::cout << "Digite um vamlor para 'c' (char): ";
   std::cin >> c;
   std::cout << "Digite um valor para 'd' (0 ou 1): ";
   std::cin >> d;
   
   std::cout << "\n 0 valor de a = " << a;
   std::cout << "\n 0 valor de a = " << b;
   std::cout << "\n 0 valor de a = " << c;
   std::cout << "\n 0 valor de a = " << d << "\n";

   system("pause");

   return 0;

}



