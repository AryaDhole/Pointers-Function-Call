### Arya Dhole  ENTC-A2  22070123027

# 1. Pointer Explained
## Aim:
The program demonstrates the use of pointers to access and manipulate variables. 
## Theory:
A pointer is a variable that stores the memory address as its value. A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator.


## Explanation:
* We declare an integer variable var and initializes it with the value 10.

* We declare an integer pointer ptr and assigns it the address of the var variable using the address-of operator &.  
* ### var : Stores value of var
* ### *ptr : Stores value at the address pointed to by ptr
* ### &var : Stores address of var
* ### ptr  : Stores value of ptr (address stored in ptr)
* ### &ptr : Stores address of the ptr variable

# 2. Pointer Operation

## Aim:
The program allows the user to enter a position and then retrieves the value at that position in an array using a pointer.


## Explanation:
* We declare an array var of unsigned integers with a size of 10 and initializes it with values.


* We declare an unsigned integer pointer ptr and initializes it with the address of the first element of the var array using the address-of operator &.


* It checks if the value of m (the user's input) is less than 11. This is to ensure that the user's input corresponds to a valid position in the array.

* If m is within the valid range, it calculates the address of the element at position m in the array using pointer arithmetic (subtracting 1 from m since C++ uses 0-based indexing) and retrieves the value using the '*' operator.

# 3. Pointers
## Aim:
The program uses a pointer to iterate through an array of double values and print both the value and the memory address of each element.

## Explanation:
* We  set up a for loop to iterate three times (for the three elements in the array).

* Inside the loop, it uses cout to print the following:

### *ptr: This prints the value pointed to by ptr, which is the current element of the array.
### ptr: This prints the memory address stored in ptr, which is the address of the current element in the array.
* After printing, it increments the pointer ptr using ptr++, causing it to point to the next element in the array.

# 4. Pointers Printing Character from String
## Aim:
The program allows the user to input a string (name) and then extracts and prints the first letter of each word in the name.

## Explanation:
* We  use cout to prompt the user to enter a name and then uses cin.get to read the input string into the str array.
* We declare a character pointer ptr and initializes it with the address of the first character of the str array using the address-of operator &.
* It prints the first character of the input name using cout<< *ptr.
* It sets up a while loop that iterates through the characters of the input string using the pointer ptr. Inside the loop, it checks if the current character pointed to by ptr is a space (' '). If it's a space, it prints the next character in the string (the first character of the next word).

The program effectively extracts and prints the first letter of each word in the input name. For example, if you enter "Arya Dhole," it will output A D."

# 5. Pointers Number of Elements in String
## Aim:
The program allows the user to input a name and then counts the number of non-space characters in the name.

## Explanation:
* It sets up a while loop that iterates through the characters of the input string using the pointer ptr.

* Inside the loop, it checks if the current character pointed to by ptr is not a space (' '). If it's not a space, it increments the count variable.

* It increments the pointer ptr to move to the next character in the string.
* Finally, it prints the value of the count variable, which represents the number of non-space characters in the name.

* For example, if you enter "Arya Dhole" it will output "9" because there are seven non-space characters in the name.

# 6. Pointer Swap 
## Aim:
The program demonstrates swapping the values of two integers using a function.
## Theory:
A function is a block of code which only runs when it is called.

### A C++ function consist of two parts:

#### 1. Declaration: the return type, the name of the function, and parameters (if any)
#### 2. Definition: the body of the function (code to be executed)

void myFunction()   // Declaration Function  
{  
    // Body of the function (Definition Function)  
}

myFunction(); // Calling Function
## Explanation:
* #### void change(int *p, int *q):  This is the function declaration for a function named change that takes two integer pointers as parameters. It's declared before the main function so that it can be called from main.

* It declares two integer variables a and b and initializes them with values 10 and 0, respectively.

* It declares two integer pointers p and q and initializes them with the addresses of a and b, respectively.

* It uses cout to print the values of a and b before swapping.

* It calls the change function, passing the pointers p and q as arguments to swap the values.

* It uses cout again to print the values of a and b after swapping.

* #### void change(int *p, int *q): This is the function definition for the change function. It takes two integer pointers as parameters.

* Inside the function, it uses a temporary variable temp to store the value pointed to by p.

* It then updates the value pointed to by p with the value pointed to by q.

* Finally, it updates the value pointed to by q with the value stored in the temp variable, effectively swapping the values of the two integers.

It swaps the values of a and b using the change function and then prints the values before and after the swap. As a result, you'll see "Before Swap" and "After Swap" with the values of a and b switched in the output.




# 7. Class Operations with Pointers
## Aim:
This program calculates the volume of a cube using a class.

## Theory:
A Class is a user-defined data type that has data members and member functions.  

Data members are the data variables and member functions are the functions used to manipulate these variables together, these data members and member functions define the properties and behavior of the objects in a Class.  

* #### A class is defined in C++ using the keyword class followed by the name of the class. 
* #### ClassName ObjectName;
## Explanation:
* ### class cube :  
1. This line defines a class named cube.

2. Inside the class, there are private member variables length, height, and side to store the dimensions of the cube.

3. There are also private integer pointers p, q, and r initialized with the addresses of length, height, and side, respectively. These pointers will be used to access and modify the private member variables within the class.

* ### void value():  
1. Is a private member function of the cube class.

2. Inside this function, it prompts the user to enter the length, height, and side of the cube using cin, and stores the values in the private member variables length, height, and side.

* ### public::  
1. This keyword indicates the start of the public section of the cube class, which allows access to the public members of the class from outside.

* ### float calculate():  
1. Is a public member function of the cube class  
2. Inside this function, it calls the private value() function to get input from the user for the cube's dimensions.

3. It calculates the volume of the cube using the values stored in length, height, and side, and returns the result.

* ### int main :
1. An instance of the cube class named c1 is created.

2. It then calls the calculate() method of the c1 object to calculate the volume of the cube and stores the result in the result variable.

3. Finally, it uses cout to print the calculated volume to the console.





