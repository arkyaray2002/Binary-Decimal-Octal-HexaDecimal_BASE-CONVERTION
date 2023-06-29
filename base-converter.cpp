#include <iostream>  
 #include <cstdio> 
 #include <cmath> 
 using namespace std;  
  
 void Any2Bin(int number, int initial_base) 
 { 
         int a[10],i; 
         for(i=0;number>0;i++)     
         {     
                 a[i] = number%2;     
                 number = number/2;     
         } 
         printf("\n THE NUMBER IN BASE 2 IS : "); 
         for(i=i-1;i>=0;i--)     
         {     
                 printf("%d",a[i]);     
         } 
 } 
  
  
void Bin2Any(int number, int final_base) 
 { 
         int x=0, i=0, rem; 
         while (number > 0)   
     {   
         rem = number % 10; 
         x = x + rem * pow(2,i); 
         number = number / 10; 
         i++;
     } 
                         if(final_base == 8) 
                         { 
                                 printf("THE NUMBER IN BASE %d IS : %o" ,final_base ,x); 
                         } 
                         if(final_base == 10) 
                         { 
                                 printf("THE NUMBER IN BASE %d IS : %d" ,final_base ,x); 
                         } 
                         if(final_base == 16) 
                         { 
                                 printf("THE NUMBER IN BASE %d IS : %x" ,final_base ,x); 
                         } 
 } 
  
  
 int main() 
 { 
         int initial_base, final_base, number; 
         cout<< "ENTER THE CURRENT BASE OF THE NUMBER : \t"; 
         cin>> initial_base; 
         cout<< "ENTER THE FINAL BASE OF THE NUMBER : \t"; 
         cin>> final_base; 
  
                 if(initial_base == 2) 
                 { 
                         printf("ENTER THE NUMBER TO BE CONVERTED : \t"); 
                         scanf("%d" ,&number); 
                         Bin2Any(number,final_base); 
                 } 
  
  
                 if(initial_base == 8) 
                 { 
                 printf("ENTER THE NUMBER TO BE CONVERTED : \t"); 
                 scanf("%o" ,&number); 
                         if(final_base == 2) 
                         { 
                                 Any2Bin(number,initial_base); 
                         } 
                         if(final_base == 10) 
                         { 
                                 printf("THE NUMBER IN BASE %d IS : %d" ,final_base ,number); 
                         } 
                         if(final_base == 16) 
                         { 
                                 printf("THE NUMBER IN BASE %d IS : %x" ,final_base ,number); 
                         } 
                         if(final_base != 16 && final_base != 10 && final_base != 2) 
                         { 
                                 printf("\n WRONG CHOICE \n ENTER DATA CORRECTLY"); 
                         }         
                 } 
  
  
                 if(initial_base == 10) 
                 { 
                 printf("ENTER THE NUMBER TO BE CONVERTED : \t"); 
                 scanf("%d" ,&number); 
                         if(final_base == 2) 
                         { 
                                 Any2Bin(number,initial_base); 
                         } 
                         if(final_base == 8) 
                         { 
                                 printf("THE NUMBER IN BASE %d IS : %o" ,final_base ,number); 
                         } 
                         if(final_base == 16) 
                         { 
                                 printf("THE NUMBER IN BASE %d IS : %x" ,final_base ,number); 
                         } 
                         if(final_base != 16 && final_base != 8 && final_base != 2) 
                         { 
                                 printf("\n WRONG CHOICE \n ENTER DATA CORRECTLY"); 
                         }         
                 } 
  
  
                 if(initial_base == 16) 
                 { 
                 printf("ENTER THE NUMBER TO BE CONVERTED : \t"); 
                 scanf("%x" ,&number); 
                         if(final_base == 2) 
                         { 
                                 Any2Bin(number,initial_base); 
                         } 
                         if(final_base == 8) 
                         { 
                                 printf("THE NUMBER IN BASE %d IS : %o" ,final_base ,number); 
                         } 
                         if(final_base == 10) 
                         { 
                                 printf("THE NUMBER IN BASE %d IS : %d" ,final_base ,number); 
                         } 
                         if(final_base != 10 && final_base != 8 && final_base != 2) 
                         { 
                                 printf("\n WRONG CHOICE \n ENTER DATA CORRECTLY"); 
                         }         
                 } 
  
 }