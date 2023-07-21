## Overview:
In this project you will develop three common linked data structures: a sorted doubly-linked list, a simple queue,
and a simple stack. This is one half of the final project, and project 5 will fully utilize the data structures developed
in this project. Therefore, you’ll need to make sure your implementations are complete and bug-free so that you
can focus on project 5-specific functionality during that time rather than debugging project 4 functionality.


This project is an “infrastructure”-type project again (i.e. the classes you’re developing are the point of the project),
so you will not be responsible for developing a specific main function of your own that performs some interesting
functionality. However, you will want to write a main function to run tests on your implementation, and you will
need to submit a main function for build purposes. Write your main function in the placeholder main function
provided along with these specs. Do NOT remove or modify any of the preprocessor directives in the provided code
(the lines that start with ‘#’). You may freely modify the main function in there to perform your own tests. When
you submit, while the actual contents of your main function are not important, they must be syntactically correct to
allow the project to build, and they must be styled consistently with the rest of your project implementation. When
we run your program, we will be using our own main function.

## Detailed Description:
The classes being developed in project 4 will be completely specified – please be sure to follow these specs exactly -
do not deviate from them in any way, including, but not limited to: changing the class name, method names,
attribute names, types or orders of method parameters, etc.; adding functionality; neglecting functionality;
changing the purpose or functionality of the methods, etc… We *will* be testing your implementation using ourown main function, which will assume everything was developed exactly as specified, so it is absolutely critical that
your implementation be written exactly according to these specs.
All functions must be fully implemented "from scratch" – that is, you may not use any libraries (standard or nonstandard) to accomplish the required functionality of the specified data structures, with the one exception of using
<iostream> in order to print the required output.



The primary data structure will be a doubly-linked list that is always maintained in a sorted order, along with a
simple node class that will be able to be used by the sorted list. Keep in mind that, while the list will fully utilize the
node class, the node class really shouldn’t know anything about a list – it is just a node, and it might be used in
other data structures (like the others being developed for this project!).

## "Specific Specifications"
These "specific specifications" are meant to state whether or not something is allowed. A "no" means you
definitely may NOT use that item. We have not necessarily covered all the topics listed, so if you don’t know
what each of these is, it’s not likely you would “accidentally” use them in your solution. Those types of
restrictions are put in place mainly for students who know some of the more advanced topics and might try to
use them when they’re not expected or allowed. In general, you can assume that you should not be using
anything that has not yet been covered in lecture (as of the first posting of the project).
- Use of Goto: No
- Global Variables / Objects: No
- Global Functions: No
- Use of Friend Functions / Classes: No
- Use of Structs: No
- Use of Classes: Yes – required!
- Public Data In Classes: No (all data members must be private)
- Use of Inheritance / Polymorphism: No
- Use of Arrays: No
- Use of C++ "string" Type: No
- Use of C-Strings: No
- Use of Pointers: Yes – required!
- Use of STL Containers: No
- Use of Makefile / User-Defined Header Files / Multiple Source Code Files: Yes – required!
- Use of exit(): No
- Use of overloaded operators: No
- Use of float type: No
