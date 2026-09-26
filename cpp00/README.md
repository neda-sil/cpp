*This project has been made as part of the 42 curriculum by neda-sil*

# Summary

[TOC]

# Description

This project is an introduction to c++. We have 3 exercices (2 mandatories). They are made to begin with c++ notions and syntax.

# Global

## Libraries

<iostream> : input/output library.
<string> : standard library in which most string related functions are.
<cstdlib> : provides miscellaneous utilities.
<iomanip> : Stream manipulator library: formatting, width, alignment, precision control.
<sstream> : String stream library: convert between strings and other data types

## Other

static_cast<[type_to_cast_to]>(var) : basically an equivalent to "([type_to_cast_to])var" in c.
this : "this" is a pointer that is used to point to the current instance, that means that we have to use it like "this->...".
stream operators : "<<" insert data to a stream (e.g. "std::cout << .." inserts data in the standard output), when ">>" extract data from a stream (e.g. "std::cin >> .." extracts data from the standard input)
private / public : keywords used inside a class to control who can access what. Everything declared as "private" can only be used inside the class itself, everything declared as "public" can also be used from outside of it.
namespace : a way to group functions or variables under a common name, mostly to avoid naming conflicts and to keep related code together (e.g. "verifs::verif_eof()").

# C vs C++

There's obviously a lot of differencies between C and C++, but i will discribe the biggest ones I saw while coding this.

## New ways

In C, we used "*printf" or "write" to prompt on the standard input, but in C++, we have a new way to do it :
"std::cout" points to the "stdout" stream, that's why you can just insert data into the standard output with "<<".
Same for the "scanf", we use the same logic with "stdout".

To convert a int to a char, we can use "std::ostringstream": [implements output operations on string based streams](https://cppreference.com/cpp/io/basic_ostringstream). And when you call the associated "var.str()", it returns a string from what you gave to it.

We could not do it in C (or at least did not do it), but we can format the standard output with "std::setw(int)". We tell him how much caracters we want for a portion of the line to be, and the function complets it with spaces if we dont exceed it.

## Reading input

"std::cin >> var" reads until it finds a space, a tab or a newline, so it stops as soon as it meets one of them. That's a problem when we want to read something that can contain several words, like a first name or a darkest secret.

"std::getline(std::cin, var)" reads a whole line instead, spaces included, and stops only at the newline. That's the one we use every time we ask the user for a contact field.

But when using "getline()" right after a "std::cin >> ...", a newline character ('\n') can be left in the buffer. As a result, the next call to "getline()" will immediately read this leftover '\n' as an empty line, instead of waiting for the user to actually type something. To avoid this, we use "std::cin.ignore()", which removes that character from the buffer before continuing. "std::cin.clear()" is only useful in a different case: when "std::cin >> ..." fails completely (for example if the user types letters instead of a number), the stream goes into an error state, and "clear()" is used to reset that state before we can read anything else.

## Classes

C did not have classes, C++ does. A class regroups variables (called attributes) and the functions that work on them (called member functions), like our "Contact" and "PhoneBook" classes here. Attributes are usually kept "private" and only reachable through public functions (getters and setters), so nothing outside the class can change them without going through the logic we wrote for it.

# Ressources

I use [cppreference.com](https://cppreference.com/) a lot for my researches, i recommand it to you.

## Libraries references

<iostream> : https://cppreference.com/cpp/header/iostream
<string> : https://cppreference.com/cpp/header/string
<cstdlib> : https://cppreference.com/cpp/header/cstdlib
<iomanip> : https://cppreference.com/cpp/header/iomanip
<sstream> : https://cppreference.com/cpp/header/sstream

## Other references

private / public : https://cppreference.com/cpp/language/access
namespace : https://cppreference.com/cpp/language/namespace