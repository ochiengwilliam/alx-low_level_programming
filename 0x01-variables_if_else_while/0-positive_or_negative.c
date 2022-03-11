
 

#include <stdlib.h> 

#include <time.h> 

#include <stdio.h> 

 

/** 

* main - Prints if number is positive, zero or negative 

* 

* Return: Always (Success) 

*/ 

int main(void) 

{ 

nt n; 

 

srand(time(0)); 

n = rand() - RAND_MAX / 2; 

 

if (n > 0) 

{ 

printf(%d is positiven, n); 

} 

else if (n == 0) 

{ 

printf(%d is zeron, n); 

} 

else 

{ 

printf(%d is negativen, n); 

} 

 

return (0); 

} 


