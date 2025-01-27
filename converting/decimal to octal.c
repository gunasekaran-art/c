#include <iostream> 
using namespace std; 
  
// function to convert decimal to octal 
void decToOctal(int n) 
{ 
      
    // array to store octal number 
    int octalNum[100]; 
  
    // counter for octal number array 
    int i = 0; 
    while (n != 0) { 
  
        // storing remainder in octal array 
        octalNum[i] = n % 8; 
        n = n / 8; 
        i++; 
    } 
  
    // printing octal number array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        cout << octalNum[j]; 
} 
  
// Driver program to test above function 
int main() 
{ 
    int n = 33; 
  
    decToOctal(n); 
  
    return 0; 
} 
