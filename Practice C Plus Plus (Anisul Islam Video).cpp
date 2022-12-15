#include<iostream>
#include<conio.h>
using namespace std;

//

class myclass
{
public:
    void display();

};

void myclass :: display()
{
    cout<<"Demo."<<endl;
}

int main()
{
    myclass rhythm;
    rhythm.display();

    getch();
}



/*#include<iostream>
#include<conio.h>
using namespace std;

//constant object

class myclass
{
public:
    void display1() const;       //constant method/function
    void display2();             //non constant method/function
};


//description of constant method
void myclass :: display1() const
{
    cout<<"Constant function is called."<<endl;
}

//description of non constant method
void myclass :: display2()
{
    cout<<"Non constant function is called."<<endl;
}

int main()
{
    const myclass rhythm;   //constant object
    rhythm.display1();      //only a constant object can display a constant method
    //rhythm.display2();    //shows error, can't call the display2 method since that's not under a constant method

    myclass nishat;         //non constant object
    nishat.display2();      //only a non constant object can display a non constant method

    getch();
}*/



/*#include<iostream>
#include<conio.h>
using namespace std;

//selection operator ->

class MyFirstClass
{
public:

    void display();

};


void MyFirstClass :: display()
{
    cout<<"Inside the display method."<<endl;
}


int main()
{
    MyFirstClass rhythm;
    //rhythm.display();

    MyFirstClass *ptr = &rhythm;        //pointer declaration and storing the object address

    ptr -> display();                   //display method (member of class) called by selection operator

    getch();
}*/


/*#include<iostream>
#include<conio.h>
using namespace std;

//~(tilt) destructor, called at the end of the task of an object
//destructor can't use overloading

class MyFirstClass
{
public :
    MyFirstClass();        //calls the constructor description

    ~MyFirstClass();       //calls the destructor description

    void display();        //calls the display method

};

//constructor description
MyFirstClass :: MyFirstClass()
{
    cout<<"Constructor is called."<<endl;
}


//destructor description
MyFirstClass :: ~MyFirstClass()
{
    cout<<"Destructor is called."<<endl;
}


void MyFirstClass :: display()
{
    cout<<"Inside the display method."<<endl;
}


int main()
{
    MyFirstClass rhythm;
    rhythm.display();

    return 0;
}*/



/*#include<iostream>
#include<conio.h>
using namespace std;

//constructor with constructor description

class MyFirstClass
{
public :
    MyFirstClass();         //finds the constructor description

    void display();         //a method, has a return type

};

//constructor description
MyFirstClass :: MyFirstClass()   //:: SRO is used to direct the member of class which has been declared in class MyFirstClass
{
    cout<<"Inside the constructor."<<endl;
}

//'display' method description
void MyFirstClass :: display()
{
    cout<<"Inside the display function/method."<<endl;
}


int main()
{
    MyFirstClass Alim;        //calls the default constructor from MyFirstClass class
    Alim.display();           //display can be called using object since

    getch();
}*/

/*#include<iostream>
#include<conio.h>
using namespace std;

//type of constructor

class Student
{
public :
    int ID;
    double GPA;

    void display()
    {
        cout<<ID<<"    "<<GPA<<endl;
    }

    //constructor overloading like function overloading
    Student(int x, double y)    //parameterized constructor
    {
        ID=x;
        GPA=y;
    }

    Student()                   //default constructor
    {
        cout<<"Default constructor."<<endl;
    }

};

int main()
{
    Student Maria;                  //calls the default constructor, passes no parameter

    Student Alim(101, 3.32);        //calls the parameterized constructor
    Alim.display();

    Student Rizwan(102, 5.00);      //calls the parameterized constructor
    Rizwan.display();

    getch();
}*/




/*#include<iostream>
#include<conio.h>
using namespace std;

//constructor, used to initialize the object

class Student
{
public :
    int ID;
    double GPA;

    void display()       //called method
    {
        cout<<ID<<"    "<<GPA<<endl;
    }

    Student(int x, double y)       //parameterized constructor, receives the value from object
    //constructor's name will be exactly same as class name and have no return type even void
    //no need to call the constructor from the main function
    {
        ID=x;
        GPA=y;
    }

};

int main()
{
    Student Alim(101, 3.32);
    Alim.display();

    Student Rizwan(102, 5.00);
    Rizwan.display();

    getch();
}*/


/*#include<iostream>
#include<conio.h>
using namespace std;

//adding parametetrized function to the class

class Student
{
public :
    int ID;
    double GPA;

    void display()       //called method
    {
        cout<<ID<<"    "<<GPA<<endl;
    }

    void setValue(int x, double y)      //receives the value of ID and GPA, parameterized funtion
    {
        ID=x;
        GPA=y;
    }
};

int main()
{
    Student Alim, Rizwan;

    Alim.setValue(101, 3.32);
    Alim.display();

    Rizwan.setValue(102, 5.00);
    Rizwan.display();

    getch();
}*/


/*#include<iostream>
#include<conio.h>
using namespace std;

//adding the function to the class

class Student
{
public :
    int ID;
    double GPA;
    void display()       //called method
    {
        cout<<ID<<"    "<<GPA<<endl;
    }
};

int main()
{
    Student Alim, Rizwan;

    Alim.ID = 101;
    Alim.GPA = 3.32;
    Alim.display();

    Rizwan.ID = 102;
    Rizwan.GPA = 5.00;
    Rizwan.display();

    getch();
}*/



/*#include<iostream>
#include<conio.h>
using namespace std;

//introduction to OOP cum class and object

class Student
{
public :                 //used to access the Student class member from any function
    //class member
    int ID;
    double GPA;
};

int main()
{
    Student Alim, Rizwan;     //Alim is an object of Student class, Alim receives all the properties of Student class

    Alim.ID = 786;            //we used the dot operator to access the class member
    Alim.GPA = 3.32;

    cout<<"Alim"<<endl<<"ID: "<<Alim.ID<<endl<<"GPA: "<<Alim.GPA<<endl<<endl;

    //Student Rizwan;
    Rizwan.ID = 123;
    Rizwan.GPA = 5.00;

    cout<<"Rizwan"<<endl<<"ID: "<<Rizwan.ID<<endl<<"GPA: "<<Rizwan.GPA<<endl;

    getch();
}*/

/*#include<iostream>
#include<conio.h>
using namespace std;

//scope resolution operator ::

int x=10;   //global variable


int main()
{
    int x=50;   //local variable

    ::x=20;     //changes the value of global variable

    cout<<"X = "<<x<<endl;  //normally prints the local variable, because a local variable has higher priority than global variable.
    cout<<"X = "<<::x<<endl;  //prints the global variable when we use the SRO

    getch();
}*/


/*#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

//local and global variable

int x=10;       //global variable

void display()
{
    cout<<"Inside the display function x = "<<x<<endl;
    //ERROR! Because x is a local variable inside main function, it can't be used outside of main function.
}

int main()
{
    //int x=10; //local variable
    cout<<"Inside the main function x = "<<x<<endl;

    display();


    getch();
}*/




/*#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

//string input from user

int main()
{
    char name[20];

    cout<<"Enter your name: ";
    gets(name);     //can receive the full sentence, 'gets' from C
    //cin>>name;    //can receive only one word


    cout<<"Welcome "<<name<<"!"<<endl;


    getch();
}*/



/*#include<iostream>
#include<conio.h>
using namespace std;

//pass by value
void display(int num)   //num = formal parameter, receives the value of x
{
    num=20;
}


//pass by reference
void display(int *num)  //*num = formal parameter, receives the address of x
{
    *num=20;            //changes the address of x, so the value of x also changes
}


int main()
{
    int x = 10;
    cout << "Before calling the function, x = " << x <<endl;

    display(x);     //x = actual parameter
    cout << "After calling the function, x = " << x <<endl;     //no change

    display(&x);    //x = actual parameter
    cout << "After calling the function, x = " << x <<endl;     //prints the value of num

    getch();
}*/




/*#include<iostream>
#include<conio.h>
using namespace std;

//function, a process where a function can call itself

int fact(int n)
{
    //base class, used for to stop the recursion process
    if(n==1)
        return 1;
    else
        return n*fact(n-1);

}

int main()
{
    int factorial = fact(5);
    cout<<"Factorial: "<<factorial<<endl;

    getch();
}*/



/*#include<iostream>
#include<conio.h>
using namespace std;

//passing arrays to function

void displayArray(int num[], int arraySize)
//void displayArray(int num[])
{
    cout<<"Array elements are: ";

    for(int i=0; i<arraySize; i++)
    //for(int i=0; i<5; i++)
    {
        cout<<num[i]<<" ";
    }
}

int main()
{
    int number[5]={10, 20, 30, 40, 50};

    displayArray(number, 5);                //functionName(arrayName, arraySize)

    //displayArray(number);


    getch();
}*/



/*#include<iostream>
#include<conio.h>
using namespace std;

//function overloading; multiple functions with the same name but different parameters

/*void sum(int a, int b)
{
    int add = a+b;
    cout<<"Summation: "<<add<<endl;
}

void sum(int a, int b, int c) //same function name but different parameters
{
    int add = a+b+c;
    cout<<"Summation: "<<add<<endl;
}

int main()
{
    sum(20, 30);       //calls the function with 2 parameters
    sum(30, 40, 60);   //calls the function with 3 parameters

    getch();
}*/

/*void sum(int a)
{
    cout<<"Integer: "<<a<<endl;
}

void sum(double a) //same function name but different data types
{
    cout<<"Double: "<<a<<endl;
}

int main()
{
    sum(10);        //calls the function with integer type data
    sum(10.54);     //calls the function with double type data

    getch();
}*/




/*#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

//guessing game with random numbers
int main()
{
    while(1)   //the loop will continuously run until the user closes the program
    {
        int guessNumber, randomNumber;
        cout<<"Enter your guess between 1 to 10: ";
        cin>>guessNumber;

        randomNumber=rand()%10+1;

        if(guessNumber==randomNumber)
        {
            cout<<"You've won!"<<endl<<endl;
        }
        else
        {
            cout<<"You've lost!"<<endl<<"The random number was "<<randomNumber<<". Try again..."<<endl<<endl;
        }
    }

    getch();
}*/







/*#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

//random number program

int main()
{
    /*for(int i=1; i<=5; i++)
    {
        int randomNumber=rand();                 //creates randomly Random Numbers from 0 to +infinity
        cout<<"Random Number: "<<randomNumber<<endl;
    }

    for(int i=1; i<=5; i++)
    {
        int randomNumber=rand()%10;              //creates randomly Random Numbers from 0 to 9
        cout<<"Random Number: "<<randomNumber<<endl;
    }*/

/*for(int i=1; i<=5; i++)
{
    int randomNumber=rand()%10+1;            //creates randomly Random Numbers from 1 to 10
    cout<<"Random Number: "<<randomNumber<<endl;
}


getch();
}*/







/*#include<iostream>
#include<conio.h>
using namespace std;

//advantages of parameters

/*void square()  //no parameters used
{
    cout<<"Square of "<<5<<": "<<5*5<<endl;
}

int main()
{
    square(); //we can call the function only one time because we've directly used the values in 'square' function

    getch();
}*/

/*void square(int n) //parameters used
{
    cout<<"Square of "<<n<<": "<<n*n<<endl;
}

int main()
{
    square(5);  //now we can call the function for multiple times with different values
    square(6);  //this is the one of the most powerful advantage
    square(7);

    getch();
}*/








/*#include<iostream>
#include<conio.h>
using namespace std;

//default values for parameters

//we will call the display function before the main function
void display(int a=20, int b=30)   //set default value, if we do not declare any argument for 'display' from main function by default it will be executed with a=20, b=30
//void display(int a, int b=30)      //default value set for only 'b'
{
    cout<<a<<endl;
    cout<<b<<endl;
}

int main()
{
    //display();  //no argument passes, so by default a=20, b=30

    display(25); //only set for first value, 25 overwrites a=20 but b remains same b=30

    //display(25, 40 ); //25 and 40 overwrite the a=20, b=30


    getch();
}*/




/*#include<iostream>
#include<conio.h>
using namespace std;

//returning a double value from a function

double addition(double, double);

int main()
{
    cout<<"Result: "<<addition(10.5, 20.2)<<endl;


    getch();
}

double addition(double a, double b)
{
    double sum = a + b;
    return sum;

}*/








/*#include<iostream>
#include<conio.h>
using namespace std;

//returning a integer value from a function

int addition(int, int);

int main()
{

    //here we called the 'addition' function, got the value of 'sum', and stored it in a variable 'result' to use it later
    int result = addition(10, 20);
    cout<<"Result: "<<result<<endl;

    //or
    //cout<<"Result: "<<addition(10, 20)<<endl;


    getch();
}

int addition(int a, int b)   // integer return type because 'sum' is an integer type data
{
    int sum = a + b;
    return sum;     //this user defined function returns the value of 'sum' to the main function where this function was called
}*/



/*#include<iostream>
#include<conio.h>
using namespace std;

//same program like previous, only change in function declaration before main function

void addition(int a, int b)
{
    int result = a + b;
    cout<<"Addition: "<<result<<endl;
}

void subtraction(int a, int b)
{
    int result = a - b;
    cout<<"Subtraction: "<<result<<endl;
}

void multiplication(int a, int b)
{
    int result = a * b;
    cout<<"Multiplication: "<<result<<endl;
}

void division(int a, int b)
{
    float result = (float)a / b;
    cout<<"Division: "<<result<<endl;
}


int main()
{
    addition(10, 5);
    subtraction(20, 10);
    multiplication(5, 4);
    division(30, 4);

    cout<<"All functions have been called."<<endl;

    getch();
}*/



/*#include<iostream>
#include<conio.h>
using namespace std;

//addition, subtraction, division, multiplication using function

void addition(int, int);
void subtraction(int, int);
void multiplication(int, int);
void division(int, int);

int main()
{
    addition(10, 5);
    subtraction(20, 10);
    multiplication(5, 4);
    division(30, 4);

    cout<<"All functions have been called."<<endl;

    getch();
}

void addition(int a, int b)
{
    int result = a + b;
    cout<<"Addition: "<<result<<endl;
}

void subtraction(int a, int b)
{
    int result = a - b;
    cout<<"Subtraction: "<<result<<endl;
}

void multiplication(int a, int b)
{
    int result = a * b;
    cout<<"Multiplication: "<<result<<endl;
}

void division(int a, int b)
{
    float result = (float)a / b;
    cout<<"Division: "<<result<<endl;
}*/













/*#include<iostream>
#include<conio.h>
using namespace std;

//creating function after main function

void addition(int, int);   //prototype of user defined function which means the function name and parameters' data type declaration
//semicolon must after prototype declaration

int main()
{
    addition(10, 20);
    addition(20, 30);
    addition(30, 40);

    getch();
}

void addition(int a, int b)
{
    int sum = a + b;
    cout<<"Sum: "<<sum<<endl;
}*/


/*#include<iostream>
#include<conio.h>
using namespace std;

//introduction to function

//function creation
void addition(int a, int b)   //int a and b are called parameters which receive value from main function
{
    int sum = a + b;          //void means the function does not return any value to the main function
    cout<<"Sum: "<<sum<<endl;
}


int main()
{
    addition(10, 20);   //calling the 'addition' function where a=10, b=20, here 10 and 20 are parameters
    addition(20, 30);   //again calling the 'addition' function where a=20, b=30
    addition(30, 40);   //again calling the 'addition' function where a=30, b=40
    //parameters are used to pass the value from 'main' function to called function, called function receive the value and execute the code with that value(s)

    getch();
}*/




/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //adding 2 number using pointer
    int num1=5, num2=10;
    int *p1, *p2;

    p1 = &num1;
    p2 = &num2;

    int sum = *p1 + *p2;

    cout<<"Sum: "<<sum<<endl;



    getch();
}*/




/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //pointer
    int x=10;
    int *p;
    p = &x;          //assigned the memory address of 'x' to pointer 'p'

    cout<<x<<endl;   //prints the value of x
    cout<<&x<<endl;  //prints the memory location of x
    cout<<p<<endl;   //prints the memory location of x as we assign the address to pointer 'p'
    cout<<*p<<endl;  //prints the value of &x address which is assigned to pointer 'p'
    getch();
}*/









/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int a[2][3];

    //input of 2D array from user
    cout<<"Enter the elements for the matrix: "<<endl;
    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<"a["<<row<<"]["<<col<<"] = ";
            cin>>a[row][col];
        }
    }


    //output of 2D array
    cout<<endl;
    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }


    //2 dimensional array, input, output
    /*int a[2][3];

    a[0][0]=1;
    a[0][1]=2;
    a[0][2]=3;

    a[1][0]=4;
    a[1][1]=5;
    a[1][2]=6;

    cout<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<endl;
    cout<<a[1][0]<<" "<<a[1][1]<<" "<<a[1][2]<<endl;*/

/*getch();
}*/









/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //students marks input with array, average, finding max and min marks

    int n, sum=0;
    cout<<"Enter number of students: ";
    cin>>n;

    //input
    int marks[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Marks for student "<<i+1<<": ";
        cin >> marks[i];
        sum = sum + marks[i];
    }

    cout<<"Total marks: "<<sum<<endl;

    float avg = (float)sum/n;
    cout<<"Average marks: "<<avg<<endl;


    //maximum and minimum
    int max=marks[0];
    int min=marks[0];

    for(int i=1; i<n; i++)    //i not equal 0 because we do not need to compare the first index, we already declared that first index is max
    {
        //maximum
        if(max<marks[i])
        {
            max=marks[i];
        }
        //minimum
        if(min>marks[i])
        {
            min=marks[i];
        }
    }

    cout<<"Maximum marks: "<<max<<endl;
    cout<<"Minimum marks: "<<min<<endl;


    getch();
}*/
















/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //array
    //int marks[]={85, 65, 25, 89, 75};

    //input with array
    int marks[5], i;

    for(int i=0; i<=4; i++)
    {
        cout<<"Enter marks for student "<<i+1<<": ";
        cin>>marks[i];
    }

    cout<<endl<<endl;


    //output with array
    for(i=0; i<=4; i++)
    {
        cout<<"Marks for student "<<i+1<<": "<<marks[i]<<endl;
    }

    getch();
}*/










/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //pattern
    int n, row, col;

    cout<<"Enter any integer: ";
    cin>>n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout<<row%2<<" ";
        }
        cout<<endl;
    }

    getch();
}*/





/*#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
    //series related

    //sum
    /*int sum=0, n;
    cout<<"Enter the last number: ";
    cin>>n;

    for(int i=2; i<=n; i+=3)  // 2 5 8 11 14 ... ...
    {
        sum=sum+i;
    }

    cout<<"Sum: "<<sum;*/


//multiplication

/*int mul=1, n;
cout<<"Enter the last number: ";
cin>>n;

for(int i=1; i<=n; i++)
{
    mul=mul*i;
}

cout<<"Multiplication: "<<mul;*/

//special
/*int sum=0, n;
cout<<"Enter the last number: ";
cin>>n;

for(int i=1; i<=n; i++)
{
    sum = sum + pow(i, 3);    //1^3 + 2^3 + 3^3 + ... ... + n^3
}

cout<<"Sum of the series: "<<sum;

getch();
}*/








/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter any integer to show its multiplication table: ";
    cin>>num;

    for(int i=1; i<=10; i++)
    {
        cout<<endl<<num<<" x "<<i<<" = "<<(num*i);
    }

    getch();

}*/



/*#include<iostream>
#include<conio.h>
using namespace std;

int main()

//break and continue

{

    //break
    /*for(int i=1; i<=10; i++)
    {
        if(i==5)
        {
            break;
        }
        cout<<i<<endl;
    }*/



//continue
/*for(int i=1; i<=10; i+=2)
{
    if(i==5)
    {
        continue;
    }
    cout<<i<<endl;
}*/

//break continue
/*for(int i=1; i<=20; i+=3)
{
    if(i==10)
    {
        continue;
    }

    if(i>13)
    {
        break;
    }

    cout<<i<<endl;
}


getch();
}*/







/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // do while vs while loop
    //Main difference: The do while loop will execute at least one time even if the condition is false.
    //here is a same program built with do while & while loop

    //do while, condition false but enters the body part for one time and then check condition and stops execution

    /*int x=10;
    do
    {
        cout<<"Hello!"<<endl;
        x++;

    }while(x<5);*/


//while, condition false, therefore it doesn't enter the body part and doesn't execute cout

/*int x=10;
while(x<5)
{
    cout<<"Hello!"<<endl;
    x++;

}*/


/*getch();

}*/







/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // do while loop

    int i=5;
    do
    {

        cout<<"Bangladesh: "<<i<<endl;
        i--;

    }while(i>=1);

    cout<<endl<<"End of do while loop.";

    getch();

}*/










/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // while loop

    int i=1;
    while(i<=10)
    {
        cout<<"Bangladesh: "<<i<<endl;
        i++;
    }

    cout<<endl<<"End of while loop.";

    getch();

}*/










/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // for loop

    for(int i=1; i<=10; i++)
    {
        cout<<"Bangladesh: "<<i<<endl;
    }

    cout<<endl<<"End of for loop.";




    getch();

}*/

















/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //switch statement

    char ch;
    cout<<"Enter any letter: ";
    cin>>ch;

    ch=tolower(ch);

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"Vowel";     // multiple case, same output, like logical OR operation
        break;

    default:
        cout<<"Consonant";

    }



    /*int digit;
    cout<<"Enter a digit: ";
    cin>>digit;

    switch(digit)
    {
    case 0:
        cout<<"Zero";
        break;
    case 1:
        cout<<"One";
        break;
    case 2:
        cout<<"Two";
        break;
    case 3:
        cout<<"Three";
        break;
    case 4:
        cout<<"Four";
        break;
    case 5:
        cout<<"Five";
        break;
    case 6:
        cout<<"Six";
        break;
    case 7:
        cout<<"Seven";
        break;
    case 8:
        cout<<"Eight";
        break;
    case 9:
        cout<<"Nine";
        break;
    default:
        cout<<"Not a digit!";
        // no need break keyword, because it's the last expression


    }*/



/*getch();
}*/
















/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter any integer: ";
    cin>>num;

    (num%2==0) ? cout<<num<<" is even." : cout<<num<<" is odd.";




    /*int num1=30, num2=20;

    int max = (num1>num2) ? num1 : num2;
    cout<<max;*/


/*getch();
}*/













/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    //nested if

    int marks;
    cout<<"Enter marks: ";
    cin>>marks;

    if(marks>32)
    {
        if(marks>79 && marks<101)
        {
            cout<<"A+";
        }

        else if(marks>59 && marks<80)
        {
            cout<<"B+";
        }

        else if(marks>32 && marks<60)
        {
            cout<<"C";
        }

    }

    else
    {
        cout<<"Failed!";
    }



    getch();
}*/



















/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //leap year

    int year;
    cout<<"Enter a year: ";
    cin>>year;

    if(year%4==0 && year%100!=0)
    {
        cout<<year<<" is a leap year"<<endl;
    }

    else if(year%400==0)
    {
        cout<<year<<" is a leap year.";
    }

    else
    {
        cout<<year<<" is not a leap year.";
    }

    getch();
}*/













/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //large and small among three integers

    int num1, num2, num3, large;
    cout<<"Enter three integer number: ";
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3)
    {
        large=num1;
    }
    else if(num2>num1 && num2>num3)
    {
        large=num2;
    }
    else
    {
        large=num3;
    }

    cout<<"Large number: "<<large;


    /*small number
    if(num1<num2 && num1<num3)
    {
        small=num1;
    }
    else if(num2<num1 && num2<num3)
    {
        small=num2;
    }
    else
    {
        small=num3;
    }

    cout<<"Small number: "<<small;*/


/*getch();
}*/














/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    //vowel, consonant, toupper(), tolower()

    char ch;
    cout<<"Enter a charecter: ";
    cin>>ch;

    ch = tolower(ch); //converting user input to lowercase as we are matching with lowercase

    //ch = toupper(ch);
    //if our condition would if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"Vowel";
    }


    else
    {
        cout<<"Consonant.";
    }



    getch();
}*/










/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    //pass fail

    int marks;
    cout<<"Enter marks: ";
    cin>>marks;

    if(marks<0 || marks>100)
    {
        cout<<"Invalid marks!";
    }

    else if(marks>79 && marks<101)
    {
        cout<<"A+";
    }

    else if(marks>59 && marks<80)
    {
        cout<<"B+";
    }

    else if(marks>32 && marks<60)
    {
        cout<<"C";
    }

    else
    {
        cout<<"Failed!";
    }



    getch();
}*/
















/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //absolute value

    int num;
    cout<<"Enter an integer: ";
    cin>>num;

    if(num<0)
    {
        cout<<"Absolute value: "<<(-num);
    }

    else
    {
        cout<<"Absolute value: "<<num;
    }

    getch();
}*/















/*#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    //special operator, sizeof() and Comma

    //sizeof()

    int x, y, sum;
    int a;
    float f;
    double d;
    char ch;
    char name[20];

    //comma operator
    sum = (x=20, y=30, sum = x+y);
    cout<<"Sum is: "<<sum<<endl;

    //sizeof()
    /*cout<<setw(23)<<"Size of int a: "<<sizeof(a)<<" Byte"<<endl;
    cout<<setw(23)<<"Size of float f: "<<sizeof(f)<<" Byte"<<endl;
    cout<<setw(23)<<"Size of double d: "<<sizeof(d)<<" Byte"<<endl;
    cout<<setw(23)<<"Size of char ch: "<<sizeof(ch)<<" Byte"<<endl;
    cout<<setw(23)<<"Size of char name[20]: "<<sizeof(name)<<" Byte"<<endl;*/



/*

    getch();
}*/























/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //right shift (>>), left shift (<<)
    int x=32, c;

                             /*           1024 512 256 128 64 32 16 8 4 2 1

                               binary x=     0   0   0   0  0  1  0 0 0 0 0     =32

                 first right shift c>>1=     0   0   0   0  0  0  1 0 0 0 0     =16
                second right shift c>>2=     0   0   0   0  0  0  0 1 0 0 0     =8
                 third right shift c>>3=     0   0   0   0  0  0  0 0 1 0 0     =4




                                          1024 512 256 128 64 32 16 8 4 2 1

                               binary x=     0   0   0   0  0  1  0 0 0 0 0     =32

                  first left shift c>>1=     0   0   0   0  1  0  0 0 0 0 0     =64
                 second left shift c>>2=     0   0   0   1  0  0  0 0 0 0 0     =128
                  third left shift c>>3=     0   0   1   0  0  0  0 0 0 0 0     =256

                               */



/*cout<<"Main value: "<<x<<endl;

c=x>>1;
cout<<"Right Shift 1: "<<c<<endl;

c=x>>2;
cout<<"Right Shift 2: "<<c<<endl;

c=x>>3;
cout<<"Right Shift 3: "<<c<<endl<<endl;



cout<<"Main value: "<<x<<endl;

c=x<<1;
cout<<"Left Shift 1: "<<c<<endl;

c=x<<2;
cout<<"Left Shift 2: "<<c<<endl;

c=x<<3;
cout<<"Left Shift 3: "<<c<<endl;



getch();
}*/























/*#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    //bitwise and (&) or (|) xor (^)
    int x=36, y=22;

      /*          32 16 8 4 2 1
        binary x=  1  0 0 1 0 0
        binary y=  0  1 0 1 1 0
        ________________________
       bitwise &=  0  0 0 1 0 0  = 4

       bitwise |=  1  1 0 1 1 0  = 54

       bitwise ^=  1  1 0 0 1 0  = 50

     */


/*int AND = x&y;
cout<<setw(13)<<"Bitwise AND: "<<AND<<endl;   //4

int OR = x|y;
cout<<setw(13)<<"Bitwise OR: "<<OR<<endl;     //54

int XOR = x^y;
cout<<setw(13)<<"Bitwise XOR: "<<XOR<<endl;   //50

getch();
}*/















/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x=4, y;

    //increment decrement

    /*y=x++;                               //increments x by 1 after it is used
    cout<< "Y value: "<< y<<endl;
    cout<< "X value: "<< x;*/

/*y=x--;                               //decrements x by 1 after it is used
cout<< "Y value: "<< y<<endl;
cout<< "X value: "<< x;*/

/*y=++x;                                 //increments x by 1 before it is used
cout<< "Y value: "<< y<<endl;
cout<< "X value: "<< x;

y=--x;                               //decrements x by 1 before it is used
cout<< "Y value: "<< y<<endl;
cout<< "X value: "<< x;


getch();

}*/















/*#include<iostream>
#include<conio.h>
using namespace std;



int main()

{
    //unary opertor
    int x=6, y=5;

    int plus_unary= +x; //+6

    int minus_unary= -y;  //-5

    cout<<"Result Plus Unary: "<<plus_unary <<endl<< "Result Minus Unary: " << minus_unary;



    getch();
}*/

















/*#include<iostream>
#include<conio.h>
using namespace std;



int main()

{
    int p=3, q=2, r=3, s=2, t=3, u=2, x=3, y=2;

    //assignment operator
    p+=q; //means p = p+q = 5
    cout<<p<<endl;

    r-=s; //means r = r-s = 1
    cout<<r<<endl;

    t*=u; //means t = t*u = 6
    cout<<t<<endl;

    x/=y; //means x = x/y = 1
    cout<<x;


    getch();
}*/



























/*#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{

    float num1=25, num2=6;

    cout<<showpoint;         //output will show precision value
    //cout<noshowpoint;      //output won't show precision value i.e will show only integer value
    cout<<fixed;             //shows fixed value after precision
    cout<<setprecision(2);   //counts how much value will show after precision

    cout<<setw(20)<<"Summation is: "<<num1+num2<<endl;

    cout<<setw(20)<<"Subtraction is: "<<num1-num2<<endl;

    cout<<setw(20)<<"Multiplication is: "<<num1*num2<<endl;

    cout<<setw(20)<<"Division is: "<<num1/num2;

    getch();
}*/
