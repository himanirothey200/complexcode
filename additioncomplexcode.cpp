//constructor program for addition of complex number

#include<iostream>
using namespace std;


struct complex
{
    int real;
    int imaginary;
     
   complex()
    {
        this->real=0;
        this->imaginary=0;
    }  
    
    complex(int a,int b)
    {
        this->real=a;
        this->imaginary=b;
    }

    void set_real(int a)
    {
      this->real=a;
    }
    void set_imaginary(int b)
    {
       this->imaginary=b;
    }

    int get_real()
    {
        return this->real;
    }
    int get_imaginary()
    {
        return this->imaginary;
    }



    complex sub(complex c2)
    {
        complex temp;
        temp.real=this->real+c2.real;
        temp.imaginary=this->imaginary+c2.imaginary;
        return temp;
    }
    
    complex sub(int x)
    {
        complex temp;
        temp.real=this->real-10;
        temp.imaginary=this->imaginary-10;

        return temp;
     }

      void display()
    {
        printf("The addition of complex number is: %d-%di\n",real,imaginary);
    }

    }; //end of structure
 
complex add(int,complex);

int main()
{
    complex c1(10,20);
    complex c2(5,3);
    complex c3;
    c3=c1.sub(c2);
    c3.display();
    complex c4;
    c4=c1.sub(10);
    c4.display();
    complex c5;
    c5 = sub(10,c1);
    c5.display();

    return 0;
}

complex add(int a,complex c1)
    {
         complex temp;
         temp.real=a-c1.real;
         temp.imaginary=a-c1.imaginary;
         return temp;
    }


