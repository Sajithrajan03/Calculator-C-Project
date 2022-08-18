#include<stdio.h>
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
/*1*/     
int addition();  
int subtract();  
int multi();  
int divi();  
int sqr();  
int sqrt1(); 
double sin_v();
double cos_v();
void exit();  
/*2*/
void DOTPRODUCT(  int x1,int x2,int y1,int y2,int z1,int z2);
void CROSSPRODUCT( int x1,int x2,int y1,int y2,int z1,int z2);
void ADDVECTOR( int x1,int x2,int y1,int y2,int z1,int z2);
void SUBVECTOR( int x1,int x2,int y1,int y2,int z1,int z2);
/*3*/
void complex();
void operations(int ,float , float ,float ,float );
/*4*/
int matrixaddition();
int  matrixsubtraction();
int matrixmultiplication();
int transpose();
int Matrix();
/*5*/
void add(float a,float b,float c,float d);
void sub(float a,float b,float c,float d);
void multiply(float a,float b,float c,float d);
void divide(float a,float b,float c,float d);


int main()
{
    printf("\n\n\t\tCALCULATOR \n");
    int choice,flag=1;
    int vx1,vx2,vy1,vy2,vz1,vz2,op;
    float p,q,r,s;
    
    while(flag)
    {   printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
        printf("\n\n1. Arithmetic Operations\n");  
        printf("2. Vector Operations\n");
        printf("3. Fraction Operations\n");
        printf("4. Matrix Operations\n");
        printf("5. Complex Operations \n");
        printf("6. Exit\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
               do  
    {  
    printf("----ARITHMETIC CALCULATOR----\n\n");
    printf("Please choose your option:"
          "\n1 = Addition"
          "\n2 = Subtraction"
          "\n3 = Multiplication"
          "\n4 = Division"
          "\n5 = Square"
          "\n6 = Square Root "
          "\n7 = Sine function "
          "\n8 = Cosine Function "
          "\n9 = Exit "
          "\n\nEnter Your Choice: ");
        scanf ("%d", &op);  
    switch (op)  
    {  
        case 1:  
            addition(); 
            break;  
              
        case 2:  
            subtract();   
            break;  
              
        case 3:  
            multi();  
              
              
        case 4:  
            divi();   
            break;   
              
        case 5:  
            sqr();   
            break;  
              
        case 6:  
            sqrt1();  
            break; 
        case 7:  
            sin_v();   
            break;  
        case 8:  
            cos_v();   
            break;  
              
        case 9:  
            printf (" Thanks for using ARITHMETIC CALCULATOR"); 
            exit(0); 
            break;  
              
        default: printf("\nInvalid Input ");
    }  
    printf (" \n \n ____________________________________ \n ");  
    } while (op != 9);
      
              break; 
        
            case 2:
                    
                    printf("\nEnter the VECTOR 1 (X1,Y1,Z1):\n");
                    scanf("%d %d %d",&vx1,&vy1,&vz1);
                    printf("Enter the VECTOR 2 (X2,Y2,Z2):\n");
                    scanf("%d %d %d",&vx2,&vy2,&vz2);
                    printf("\nThe Vectors are:\n");
                    printf("\t[A]. %d i + %d j + %d k\n",vx1,vy1,vz1);
                    printf("\t[B]. %d i + %d j + %d k\n",vx2,vy2,vz2);
                    printf("\n\tOperations:\n");
                    printf("\t\n\t\t1.Dot Product:");
                    printf("\t\n\t\t2.Cross Product:");
                    printf("\t\n\t\t3.Vector Addition:");
                    printf("\t\n\t\t4.Vector Subtraction:");
                    printf("\t\n\t\t5.Exit\n\n"); /* only for user didnt want to open vector*/
                    printf("\t\tEnter your choice :  ");
                    scanf("%d",&op);
                            switch(op)
                            {
                            case 1:
                                    DOTPRODUCT( vx1, vx2, vy1,vy2, vz1, vz2);
                                    break;
                            case 2:
                                    CROSSPRODUCT(vx1, vx2, vy1,vy2, vz1, vz2);
                                    break;
                            case 3:
                                    ADDVECTOR(vx1, vx2, vy1,vy2, vz1, vz2);
                                    break;
                            case 4:
                                    SUBVECTOR(vx1, vx2, vy1,vy2, vz1, vz2);
                                    break;
                            case 5:
                                    break;

                            }
                    


                    break; 
            case 3:
                        
                        
                        printf("Enter the numerator and denominator of the 1st fraction : \n");
                        scanf("%f %f",&p,&q);
                        printf("Enter\n 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division :\n");
                        scanf("%d",&op);
                        printf("\nEnter the numerator and denominator of the 2nd fraction : \n");
                        scanf("%f %f",&r,&s);
                        switch(op)
                        {
                        case 1:
                        add(p,q,r,s);
                        break;
                        case 2:
                        sub(p,q,r,s);
                        break;
                        case 3:
                        multiply(p,q,r,s);
                        break;
                        case 4:
                        divide(p,q,r,s);
                        break;
                        }
                        
                        break;
            
            case 4:
             Matrix();
                    break; 
            case 5:
            complex();
                    break; 
        
            case 6:
                    printf("\n\t\t\tCoding is Fun !\n");
                    flag=0;
                    break;
            default:
                    printf("\n\t\tPlease Enter a Number between (1 to 6)");
                
        }
    }
    
    return 0;
}



/*Function - 1*/
int addition()  
{  
    int i, sum = 0, num, f_num;    
    printf (" How many numbers you want to add: ");  
    scanf ("%d", &num);  
    printf (" Enter the numbers: \n ");  
    for (i = 1; i <= num; i++)  
    {  
        scanf(" %d", &f_num);  
        sum +=  f_num;  
    }  
    printf (" Total Sum of the numbers = %d", sum);  
    return 0;  
}  
  
int subtract()  
{  
    int a, b, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &a);  
    printf (" The second number is: ");  
    scanf ("  %d", &b);  
    result = a - b;    
    printf (" The subtraction of %d - %d is: %d", a, b, result);  
}  
  
int multi()  
{  
    int a, b, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &a);  
    printf (" The second number is: ");  
    scanf ("  %d", &b);  
    result = a * b;    
    printf (" The multiplication of %d * %d is: %d", a, b, result);  
}  
  
 
int divi()  
{  
    int a, b, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &a);  
    printf (" The second number is: ");  
    scanf ("  %d", &b);  
      
    if (b == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value for divisor ");  
        scanf ("%d", &b);        
    }  
    result = a / b;    
    printf (" \n The division of %d / %d is: %d", a, b, result);  
}  
 
int sqr()  
{  
    int a, result;  
    printf (" Enter a number to get the Square: ");  
    scanf ("  %d", &a);  
      
    result = a * a;    
    printf (" \n The Square of %d is: %d", a, result);  
}  
  
int sqrt1()  
{  
    float result;  
    int a;  
    printf (" Enter a number to get the Square Root: ");  
    scanf (" %d", &a);  
  
    result = sqrt(a);   
    printf (" \n The Square Root of %d is: %f", a, result);  
}  

double sin_v()
{
    double a,result;
    printf("Enter the value for which u need Sine : ");
    scanf("%lf", &a);
     result = a;

    a = ((a* (3.1415926535897 / 180.0)));

    printf("sin(%0.2lf) = %lf", result, sin(a));
}

double cos_v()
{
    double a,result;
    printf("Enter the value for which you need Cosine : ");
    scanf("%lf", &a);
     result = a;

    a = ((a* (3.1415926535897 / 180.0)));

    printf("cos(%0.2lf) = %lf", result, cos(a));
}

/*Functions*/
/* 2 */
    void DOTPRODUCT(int x1,int x2,int y1,int y2,int z1,int z2)
        {
                int dotpro;
                dotpro= (x1*x2)+(y1*y2)+(z1*z2);
                printf("\nThe Dotproduct of the vectors is: %d\n\n",dotpro);
                
                
        }
    void CROSSPRODUCT(int x1,int x2,int y1,int y2,int z1,int z2)
        {
                int p1,p2,p3;
                p1= (y1*z2)-(z1*y2);
                p2= (z1*x2)-(x1*z2);
                p3= (x1*y2)-(y1*x2);
                printf("\nThe Crossproduct of the vectors is: %d i + %d j + %d k\n\n",p1,p2,p3);
                
        }
    void ADDVECTOR(int x1,int x2,int y1,int y2,int z1,int z2)
        {
                int p1,p2,p3;
                p1= x1+x2;
                p2= y1+y2;
                p3= z1+z2;
                printf("\nThe Addition of the vectors is: %d i + %d j + %d k\n\n",p1,p2,p3);
            
        }
    void SUBVECTOR(int x1,int x2,int y1,int y2,int z1,int z2)
        {
                int p1,p2,p3;
                p1= x1-x2;
                p2= y1-y2;
                p3= z1-z2;
                printf("\nThe Subtraction of the vectors is: %d i + %d j + %d k\n\n",p1,p2,p3);
            
        }
/*3*/
void add(float a,float b,float c,float d)
{
    float sum;
    sum=(d*a+b*c)/(b+d);
    printf("\nThe sum is : %.2f",sum);
}
void sub(float a,float b,float c,float d)
{
    float sub;
    sub=(a*d-b*c)/(b-d);
    printf("\nThe subtraction is : %.2f",sub);
}
void multiply(float a,float b,float c,float d)
{
    float multi;
    multi=(a*c)/(b*d);
    printf("\nThe multiplication is : %.2f",multi);
}
void divide(float a,float b,float c,float d)
{
    float divi;
    divi=(a*d)/(b*c);
    printf("\nThe division is : %.2f",divi);
}

/*4*/
int Matrix()
{
    int op;
    printf("\n\tOperations:\n");
                    printf("\t\n\t\t1.Matrix Addition:");
                    printf("\t\n\t\t2.Matrix Subtraction:");
                    printf("\t\n\t\t3.Matrix Multiplication:");
                    printf("\t\n\t\t4.Transpose and determinant:");
                    printf("\t\n\t\t5.Exit\n\n"); /* only for user didnt want to open vector*/
                    printf("\t\tEnter your choice :  ");
                    scanf("%d",&op);
                            switch(op)
                            {
                            case 1: matrixaddition();
                                   
                                    break;
                            case 2:
                                   matrixsubtraction();
                                    break;
                            case 3:matrixmultiplication();
                                    
                                    break;
                            case 4:
                                   transpose();
                                    break;
                            case 5:
                                    break;

                            }

    return 0;
    
    
}

int matrixaddition(){
int  a[100][100], b[100][100], sum[100][100], i, j, n, m;
  printf("Enter the number of rows\n");
  scanf("%d", &n);
  printf("Enter the number of columns\n");
  scanf("%d", &m);

  printf("Enter elements of 1st matrix\n");
  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < n; i++)
    for (j = 0; j < m;j++) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
    printf("sum of the two matrices is:\n");
 for (i = 0; i < n; i++)  
    {  
        for (j = 0;j < m; j++)  
        {  
            sum[i][j] = a[i][j] + b[i][j];  
            
            printf("%d\t", sum[i][j]);  
        }  
        printf("\n");  
    }  
}
int matrixsubtraction() {
  int  a[100][100], b[100][100], diff[100][100], i, j, n, m;
  printf("Enter the number of rows\n");
  scanf("%d", &n);
  printf("Enter the number of columns\n");
  scanf("%d", &m);

  printf("Enter elements of 1st matrix\n");
  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < n; i++)
    for (j = 0; j < m;j++) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
    printf("Difference of the two matrices is:\n");
 for (i = 0; i < n; i++)  
    {  
        for (j = 0;j < m; j++)  
        {  
            diff[i][j] = a[i][j] - b[i][j];  
            
            printf("%d\t", diff[i][j]);  
        }  
        printf("\n");  
    }  
  
  

  return 0;
}
int matrixmultiplication()
{
    int i,j,choice,a[100],b[100],c[100];
printf("Enter the order of matrix\n");
printf("Enter 1 for 2*2 matrix\n");
printf("Enter 2 for 3*3 matrix\n");
scanf("%d",&choice);
if(choice==1){
    printf("Enter the elements of the matrix 1 in the order a11,a12,a21,a22\n");
for(i=0;i<=3;i++)
{
    scanf("%d",&a[i]);
}
 printf("Enter the elements of the matrix 2  in the order b11,b12,b21,b22\n");
for(i=0;i<=3;i++)
{
    scanf("%d",&b[i]);
}
printf("The first matrix is\n");
printf("%d    %d \n",a[0],a[1]);
printf("%d    %d \n",a[2],a[3]);
printf("The second  matrix is\n");
printf("%d    %d \n",b[0],b[1]);
printf("%d    %d \n",b[2],b[3]);
c[0]=a[0]*b[0]+a[1]*b[2];
c[1]=a[0]*b[1]+a[1]*b[3];
c[2]=a[2]*b[0]+a[3]*b[2];
c[3]=a[2]*b[1]+a[3]*b[3];
printf("THE product of the matrices is\n");
printf("%d    %d \n",c[0],c[1]);
printf("%d    %d \n",c[2],c[3]);
    
    
}
if(choice==2){
    printf("Enter the elements of the matrix 1 in the order a11,a12,a13,a21,a22,a23,a31,a32,a33\n");
for(i=0;i<=8;i++)
{
    scanf("%d",&a[i]);
}
 printf("Enter the elements of the matrix 2  in the order b11,b12,b13,b21,b22,b23,b31,b32,b33\n");
for(i=0;i<=8;i++)
{
    scanf("%d",&b[i]);
}
printf("The first matrix is\n");
printf("%d    %d   %d\n",a[0],a[1],a[2]);
printf("%d    %d   %d\n",a[3],a[4],a[5]);
printf("%d    %d   %d\n",a[6],a[7],a[8]);
printf("The second  matrix is\n");
printf("%d    %d   %d\n",b[0],b[1],b[2]);
printf("%d    %d   %d\n",b[3],b[4],b[5]);
printf("%d    %d   %d\n",b[6],b[7],b[8]);
c[0]=a[0]*b[0]+a[1]*b[3]+a[2]*b[6];
c[1]=a[0]*b[1]+a[1]*b[4]+a[2]*b[7];
c[2]=a[0]*b[2]+a[1]*b[5]+a[2]*b[8];
c[3]=a[3]*b[0]+a[4]*b[3]+a[5]*b[6];
c[4]=a[3]*b[1]+a[4]*b[4]+a[5]*b[7];
c[5]=a[3]*b[2]+a[4]*b[5]+a[5]*b[8];
c[6]=a[6]*b[0]+a[7]*b[3]+a[8]*b[6];
c[7]=a[6]*b[1]+a[7]*b[4]+a[8]*b[7];
c[8]=a[6]*b[2]+a[7]*b[5]+a[8]*b[8];
printf("THE product of the matrices is\n");
printf("%d    %d   %d\n",c[0],c[1],c[2]);
printf("%d    %d   %d\n",c[3],c[4],c[5]);
printf("%d    %d   %d\n",c[6],c[7],c[8]);
    
    
}

    return 0;
}
int transpose()
{
     int m, n, i, j, matrix[10][10], transpose[10][10],operation;
  printf("Enter the operation to be performed\n");
  printf("Enter 1 for transpose\n");
  printf("Enter 2 for determinant\n");
  scanf("%d",&operation);
 if(operation==1){
   printf("Enter rows and columns :\n");
   scanf("%d%d", &m, &n);
   printf("Enter elements of the matrix\n");
   for (i= 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &matrix[i][j]);
   for (i = 0;i < m;i++)
      for (j = 0; j < n; j++)
         transpose[j][i] = matrix[i][j];
          printf("entered matrix:\n");
   for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++)
         printf("%d\t", matrix[i][j]);
      printf("\n");
   }
   printf("Transpose of the matrix:\n");
   for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++){
         printf("%d\t", transpose[i][j]);}
         printf("\n");
   }
      
 }
      if(operation==2)
      {
          int a[3][3], i, j;
 
 int determinant;
  printf("Enter the 9 elements of matrix: \n");
  for(i = 0 ;i < 3;i++)
      for(j = 0;j < 3;j++)
           scanf("%d", &a[i][j]);
 
  printf("The matrix is\n");
  for(i = 0;i < 3; i++){
      printf("\n");
      for(j = 0;j < 3; j++)
           printf("%d\t", a[i][j]);
  }
 
  determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
 
  printf("Determinant of 3X3 matrix: %d\n", determinant);
      }
   return 0;
}

/*5*/
void complex(){
    
    int optioncn;
    float a,b,c,d;
    
    printf("      COMPLEX NUMBER CALCULATOR\n\n\n");
    printf("Please enter 1 for addition of complex numbers\n");
    printf("Please enter 2 for subtraction of complex numbers\n");
    printf("Please enter 3 for multiplication of complex numbers\n");
    printf("Please enter 4 for division of complex numbers\n\n");
    printf("Choice :");
    
    scanf("%d",&optioncn);
    
    printf("\n");
    if(optioncn==1 || optioncn==2 || optioncn==3 || optioncn==4){
        printf("Standard form of 2 complex numbers z1 and z2 is given below\n\n");
        printf("z1 = a + i b\nz2 = c + i d\n\n");
        
        printf("Enter the real part of z1 :");
        scanf("%f",&a);
        
        printf("Enter the imaginary part of z1 :");
        scanf("%f",&b);
        
        printf("Enter the real part of z2 :");
        scanf("%f",&c);
        
        printf("Enter the imaginary part of z2 :");
        scanf("%f",&d);
        printf("\n");
        
        operations( optioncn, a,  b, c, d);
    }
    
    else{
        printf("Not a valid option");
        printf("\n\n");
    }
}
void operations(int optioncn,float a, float b,float c,float d){
    
    float rpart,ipart;
    
    printf("________________________________\n\n");
    
    if (optioncn==1){
        printf("Addition of complex numbers z1 + z2 =\n\n");
        printf("(%.2f + i (%.2f) ) + (%.2f + i (%.2f) ) =\n\n",a,b,c,d);
        rpart=a+c;
        ipart=b+d;
        printf("%.2f + i (%.2f)\n",rpart,ipart);

    }
    else if (optioncn==2){
        printf("subtraction of complex numbers z1 - z2 =\n\n");
        printf("(%.2f + i (%.2f) ) - (%.2f + i (%.2f) ) =\n\n",a,b,c,d);
        rpart=a-c;
        ipart=b-d;
        printf("%.2f + i (%.2f)\n",rpart,ipart);

    }
    else if (optioncn==3){
        printf("Multiplication of complex numbers z1 * z2 =\n\n");
        printf("(%.2f + i (%.2f) ) * (%.2f + i (%.2f) ) =\n\n",a,b,c,d);
        rpart= (a*c) - (b*d);
        ipart= (a*d) + (b*c);
        printf("%.2f + i (%.2f)\n",rpart,ipart);

    }
    
    else{
        
        if(c==0 && d==0){
            printf("Undefined\n");
            
        }
        
        else{
            
            printf("Division of complex numbers z1 / z2 =\n\n");
            printf("(%.2f + i (%.2f) ) / (%.2f + i (%.2f) ) =\n\n",a,b,c,d);
            rpart= ((a*c)+(b*d))/((c*c)+(d*d));
            ipart= ((b*c)-(a*d))/((c*c)+(d*d));
            printf("%.2f + i (%.2f)\n",rpart,ipart);
        }
    }
    printf("\n________________________________");
    printf("\n");
    
    
    
    
}
