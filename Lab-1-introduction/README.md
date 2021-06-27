
### Lab 1 - Introduction

---

<ol>
  <li>
    <a href="./p01.c">Type the following program, run, and see the output.</a>
        
    #include <stdio.h> 
    #include <conio.h> 

    void main(void)
    {
        printf("This is my first C program.");

        getch();
    }
    
  </li>
    
  <li>
    <a href="./p02.c">Type the following program and run with different input.</a>
        
    #include <stdio.h>
    #include <conio.h>

    void main()
    {
        int s, a, b, c = 20;

        printf("C program to demonstrate basic Input, Processing, Output operation.\n");

        printf("Enter the value of a: ");
        scanf("%d", &a);                 

        printf("Enter the value of b: ");
        scanf("%d", &b);

        s = b + c;

        printf("b + c = %d", s);
        printf("\nwhere, c = 20");

        getch();
    }
    
  </li>
     
  <li>
    <a href="./p03.c">Type the following program, run, and see the output.</a>
        
    #include <stdio.h> 
    #include <conio.h> 

    void main()
    {
        int s, a, b; 
        float p;     

        printf("C program to demonstrate the use of & and sizeof unary operators.\n");

        printf("Address of s is %x", &s);
        printf("\nAddress of a is %x", &a);

        printf("\n\nSize occupied by variable s in bytes is %d", sizeof(s));
        printf("\nSize of a = %d", sizeof(a));

        printf("\nSize of 1.5 = %d", sizeof(1.5));
        printf("\nSize of float data type = %d", sizeof(float));

        getch();
    }
    
  </li>
    
  <li>
    <a href="./p04.c">Write a program to calculate the area, circumference of a circle of radius r.</a>
  </li>
    
  <li>
    <a href="./p05.c">Write a program to calculate the volume of sphere of radius r.</a>
  </li>
    
  <li>
    <a href="./p06.c">Write a program to calculate the simple interest. Read the values of principal, time, and rate of interest from the user.</a>
  </li>
  
  <li>
    <a href="./p07.c">
      Write a program to read the values of x and y from the user and evaluate the expression<br>
      v = x^3 + y^2 - 100 / x
    </a>
  </li>
    
  <li>
    <a href="./p08.c">Write a program to read four integers from the user and display the mean of the numbers.</a>
  </li>
    
  <li>
    <a href="./p09.c">Write a program to read length, breadth, and height of a cuboid and display its volume.</a>
  </li>
    
  <li>
    <a href="./p10.c">Write a program to read price of two pens and five copies and calculate the price after discounting 10%.</a>
  </li>
    
  <li>
    <a href="./p11.c">Write a program to read the time given for C programming in a day in hours and display the total time in seconds in 30 days.</a>
  </li>
    
  <li>
    <a href="./p12.c">Write a program to read name and age of the user and display them.</a>
  </li>
    
  <li>
    <a href="./p13.c">Write a program to read a character and display it.</a>
  </li>
    
</ol>
