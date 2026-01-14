========================================
Name: Jiustin Anak Kanadie
Question 2 C++

C++ Name Sorting Program - README
========================================

File Name: sortNames.cpp

Description:
------------
This program reads a list of names from the user, stores them in a 
std::vector<string>, and sorts them alphabetically. The user can choose 
between ascending (A to Z) or descending (Z to A) order.

Features Implemented:
---------------------
1. User Input
   - Prompts the user to enter the number of names.
   - Allows full names with spaces using getline().

2. Input Validation
   - Prevents empty input.
   - If the user presses Enter without typing a name, 
     the program asks again.

3. Display Before Sorting
   - Shows the original list of names as entered by the user.

4. Sorting Options
   - Option 1: Ascending order (A to Z)
   - Option 2: Descending order (Z to A)

5. Display After Sorting
   - Prints the sorted list clearly to the console.

How to Compile and Run:
-----------------------
Compile using:
g++ sortNames.cpp -o sortNames

Run using:
./sortNames

Example Run:
------------
Enter number of names: 3
Enter name 1: Danial Jiustin
Enter name 2: Giselle Claudia
Enter name 3: Jennie Kathy

Original Names:
Danial Jiustin
Giselle Claudia
Jennie Kathy

Choose sorting order:
1 = Ascending
2 = Descending
Enter your choice: 2

Sorted Names:
Jennie Kathy
Giselle Claudia
Danial Jiustin

========================================
