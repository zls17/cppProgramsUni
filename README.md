# Before You Read
> **This is not a comprehensive guide。**
>
> Topics Covered：[Basic IO operations, Conditionals and Loops, Opertors, Array, Strings, Pointers and Classes]
>
> Prepared By : [Ashish Balsure (22070123030)]

### Section 1: Basic IO Operations
> How to get User Input in C++
>
> 1. istream is used for inputs, to access it use iostream header.
> 2. istream has overloaded the right bit shift operator, so to do inputs right operand of ">>" operator must be an istream object. 
> 3. std::cin >> age (This code will store whatever is entered in input stream to age variable assuming the input entered is appropriate for the type of the variable)
>
> How to print things to output stream
>
> 1. ostream is used for outputs, to access it use iostream header.
> 2. ostream has overloaded the left bit shift operator, so to do outputs right operand of "<<" operator must be an ostream object.
> 3. std::cout << age (This code will print whatever age variable is storing to the output stream)
>
> ![](Images/1.IO/io.png)
>
> Both the istream and ostream objects return their left operand cin and cout respectively, therefore we can chain together multiple input and output expressions.
> eg. std::cin >> age >> gender >> height
>
### Section 2: Conditionals and Loops
> Loops
> To run a block of code multiple times, we use a loop.
> c++ offers three types of loops: for, while and do while.
> A simple program that demonstrates the use of all three loops:
>
> ![](Images/2.LOOP/loop.png)
>
> for loop has three parts to it.
> The first part is used to create a counter variable
> The second part is to test some condition for executing the loop.
> The third part is to increment or decrement the counter variable.
> In contrast while loop contain just the condition part.
> do while are similar to while except that they'll will execute the code block atleast once.
> loops can be nested, although it is generally a good idea to avoid nesting of loop if it is possible to make code more efficient.
>
> Conditionals are statements that allow a block of code to execute based off some condition.
> let say you want some piece of code to execute only on certain scenarios, you can do that using if statements.
> if statment will execute the code in it's block if the conditon evaluates to a true value.
> ![](Images/2.LOOP/if.png)!
>
> if statements can be coupled with two additionals statements called "else if" and "else"
> To test more than one conditions, we can use else if statments and else statments.
>
### Section 3: Operators
>
> There are following Types of opeartors in C++:
> 1. Arithmetic Opertors: +, -, *, /. (note: '/' when used with integer will not keep any decimal part eg/ 2/3: will evauluate to 0)
> 2. Relational Opertors: >, <, >=, <=.
> 3. Bitwise operators: Perform Bitwise operations such as << (left shift), >> (right shift), | (bitwise or), & (bitwise and), ^ (XOR opertor) ~(not operator)
> 4. Logical Operator: logical AND (&&), logical NOT(!), logical OR (||)
> 5. Increment And Decrement Operators: There are two types of those, prefix increment/decrement and postfix increment/decrement, prefix increment (++x), will increase the value of x and the expression evaluates to new value of x whereas postfix(x++), will make a copy of x, increment x and then return the copy (the old x).
>
> ![](Images/3.Operators/operator.png)
>
### Section 4: Array
>
> 1. Array is a contiguous block of memory allocated to store data in sequential order.
> 2. Array in C++ can be initialized as follows:
> 3. int numbers[5] = {1, 2, 3, 4, 5}
> 4. Arrays are indexed from 0.
> 5. Elements in an array can be accessed as follows:
>    std::cout << numbers[1]; will print the element at index 1 in the array.
> ![](Images/4.Array/array.png)
### Section 5: Pointers
>
> 1. Pointers are variables that memory address.
> 2. Usually we use pointers to store the address of other variables for indirect access of the variable.
> 3. & : this address of operator is used to get the memory address of any variable.
> 4. (*) : dereference operator: this operator is used to get the value at a given address
> 5. int *x = &y (this line of code will declare a pointer variable x, which points to the address of the y)
> 6. std::cout << *x; will print the value stored at the address of y.
> 7. we can use pointers to access elements of an array.
> 8. each element can be accessed iteratively by incrementing the pointer by 1 in each iteration.
>
> ![](Images/5.Pointers/pointer.png)
>
### Section 6: Strings
>
#### C-Style String
> 1. These are a bit tricky to work with as compared to std::string, they are basically an array of character in which last element of array is a null terminator ('\0')
> 2. C-Style strings can be declared as follows: char str[10] = "ashish"
> 3. Here we need to declare the size of the string+1 for the null terminator character.
> 4. They're fixed in size, they cannot be allocated more memory once created.(simply they cannot be modified)
#### std::string 
> 1. These are specific to c++, and are much more convenient way to handle strings.
> 2. They are dynamically allocated, so we don't need to specify the size of string prior to it's declaration.
> 3. They can be modified once created.
> 4. passing std::string as function argument, makes a copy of that string, so it is usually expensive memory wise to pass copies of std::string so it should be avoided.
#### std::string_view
> 1. string_view are similar to std::string but they are read-only
> 2. when we pass these by value to function parameters, they do not make copies.
#### Example of std::string and std::string_view objects
> 1. std::string x {"ashish"};
> 2. std::string_view x {"ashish"};
>
### Section 7: Classes
