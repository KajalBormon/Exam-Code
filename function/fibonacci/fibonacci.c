#include<stdio.h>

int fibonacci(int n){
    if(n == 0) {
        return 0; 
    } else if(n == 1){
        return 1; 
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n; 
    
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("%d", fibonacci(i));
    }

    return 0; 
}

/* 
Explanation: 
-----------------
fib(5)
├── fib(4)
│   ├── fib(3)
│   │   ├── fib(2)
│   │   │   ├── fib(1) = 1
│   │   │   └── fib(0) = 0
│   │   └── fib(1) = 1
│   └── fib(2)
│       ├── fib(1) = 1
│       └── fib(0) = 0
└── fib(3)
    ├── fib(2)
    │   ├── fib(1) = 1
    │   └── fib(0) = 0
    └── fib(1) = 1


এখন result আসা শুরু করে (stack unwind)
fib(1)=1
fib(0)=0

তাহলে:

fib(2) = 1 + 0 = 1
fib(3) = 2
fib(4) = 3
fib(5) = 5
*/