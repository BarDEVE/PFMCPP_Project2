#include <iostream>

template <typename... T> void ignoreUnused(T &&...) {}

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free
functions. This will be the first project where the code you write will be
compiled and you will be responsible for making sure it compiles before
submitting it for review.


 1) Write down the names of the 6 major primitive types available in C++  here:

Int
Float
Double
Bool
wchar_t
Void








2) for each primitive type, write out 3 variable declarations inside the
variableDeclaration() function on line 59. a) give each variable declaration an
initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type
'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of
type 'void'. b) at the end of the function, call ignoreUnused once and pass all
of your variables to it. see line 71 for an example

3) Declare 10 free functions
    each declaration should have a random number of parameters in the function
parameter list. When naming your parameters, choose names that are relevant to
the task implied by the function's name. remember: Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing
semicolon 5) pass each of your function parameters to the ignoreUnused function
like you did in b) 6) if your function returns something other than void, add
'return { };' at the end of it. 7) provide default values for an arbitrary
number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the
formatting of your 10 functions.  At this point, you might have something that
looks like this: float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar );
return { }; } This does not conform with the coding standard for this course
(check the Readme.MD) and needs to be corrected

9) in the main function at the end:
    for each of those functions declared,
        a) write out how the function would look if called with correct
arguments b) if the function returned anything, store it in a local variable via
the 'auto' keyword. c) pass the local variables to ignoreUnused() as you did in
2b) see main() for an example of this.

10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

// 2)
void variableDeclarations() 
{
  // example:
    int number = 2; // declaration of a variable named "number", that uses the primitive
         // type 'int', and the variable's initial value is '2'

    // Integer type
    int myInt = 42;
    int anotherInt = -10;
    int thirdInt = 0;

    // Float type
    float myFloat = 3.14f;
    float anotherFloat = 2.718f;
    float thirdFloat = 1.0f;

    // Double type
    double myDouble = 2.71828;
    double anotherDouble = 3.14159265359;
    double thirdDouble = 1.61803398875;
    
    // Boolean type
    bool isTrue = true;
    bool isFalse = false;
    bool isFlag = true;



    ignoreUnused(number, myInt, anotherInt, thirdInt, myFloat, anotherFloat, thirdFloat, myDouble, anotherDouble, thirdDouble, isTrue, isFalse, isFlag);
    
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0) // function declaration with random number of arguments,
                     // arbitrary number of arguments have default value

{
    ignoreUnused(rentalDuration, carType); // passing each function parameter to
                                         // the ignoreUnused() function
    return {}; // if your function returns something other than void, add 'return
             // {};' at the end of it.
}

// 1) Function to calculate the area of a rectangle 
double calculateRectangleArea(double length, double width) 
{ 
    ignoreUnused(length, width); 
    return {}; 
}  

// 2) Function to calculate the volume of a box 
double calculateBoxVolume(double length, double width, double height) 
{ 
    ignoreUnused(length, width, height); 
    return {}; 
} 

// 3) Function declaration to take a dog for a walk
bool takeDogForWalk(int distanceInYards, bool isLeashed)
{ 
    ignoreUnused(distanceInYards, isLeashed); 
    return {}; 

}  

// 4) Function declaration to calculate total sales tax
float calculateTotalSalesTax(float subtotal, float taxRate, float numItems)
{ 
    ignoreUnused(subtotal, taxRate, numItems); 
    return {};  
}  

// 5) Function to check if a number is even 
bool isEven(int number) 
{ 
    ignoreUnused(number); 
    return {};  
}  

// 6) Function to check if a number is prime 
bool isPrime(int number) 
{ 
    ignoreUnused(number); 
    return {}; 

}  

// 7) Function to find the maximum of three numbers 
int findMaximum(int num1, int num2, int num3) 
{ 
    ignoreUnused(num1, num2, num3); 
     return {}; 

}  

// 8) Function to calculate the factorial of a number 
int calculateFactorial(int number) 
{ 
    ignoreUnused(number); 
    return {}; 

}  

// 9) Function to convert miles per hour to kilometers per hour 
float mphToKph(float mph) 
{ 
    ignoreUnused(mph); 
    return {}; 
 
}  

// 10) Function to find the minimum of two numbers 
float findMinimum(float num1, float num2) 
{ 
    ignoreUnused(num1, num2); 
    return {}; 

}



/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main() 
{
  // example of calling that function, storing the value, and passing it to
  // ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2);

    // 1)
    auto rectangleArea = calculateRectangleArea(4.2, 7.8);

    // 2)
    auto boxVolume = calculateBoxVolume(3.5, 2.0, 6.3);

    // 3)
    bool walkWithTheDog = takeDogForWalk(100, true);

    // 4)
    auto totalSalesTax = calculateTotalSalesTax(500.0f, 0.1f, 5.0f);

    // 5)
    auto isNumberEven = isEven(15);

    // 6)
    auto isNumberPrime = isPrime(23);

    // 7)
    auto maximumNumber = findMaximum(10, 25, 18);

    // 8)
    auto factorialValue = calculateFactorial(5);

    // 9)
    auto kphSpeed = mphToKph(65.0);

    // 10)
    auto minimumNumber = findMinimum(3.7f, 8.9f);

    ignoreUnused(carRented, rectangleArea, boxVolume, walkWithTheDog, totalSalesTax, isNumberEven, isNumberPrime, maximumNumber, factorialValue, kphSpeed, minimumNumber);

    
  std::cout << "good to go!" << std::endl;
  return 0;
}
