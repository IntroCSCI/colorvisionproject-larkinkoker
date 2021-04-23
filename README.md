Promblamatic Eyes

## Description

Identifies whether or not a set of colors to a degree is problamatic for thos with color blindness

### v0.2 Updates

Added detection capabilities for red green colorblindness
README.md updated
Added bitmap.cppfile

### v1.0 Updates

*Coming soon*


## Developer

Larkin Koker

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
What file do you want to open (or 'no' to quit)?

Red and green have been detected. Red/Green colorblindness is a common form of colorblindness meaning this image is dangerous to colorblind humans.

What file do you want to open (or 'no' to quit)?
```

## C++ Guide

### Variables and Data Types

string, bitmap, pixel, char and vector data types and variables are used to collect and store the data of the bitmaps and user input. Bools are also used to dictate the way the program will function.
### Console Input and Output

User inputs a bitmap file that they want to use and the program outputs wheter the bitmap is safe for or not to colorblind people

### Decisions

The program will make decisions using if statements containing bools to decide if a images color combination is safe or not.

### Iteration

The program uses a do while loop to make the program functions repeatable as well as decision making with if and else if statements.

### File Input and Output

User inputs a bitmap file that they want to use and after analyzing the pixels in the file, the program outputs statements wheter the bitmap is safe for or not to colorblind people.

### Arrays/Vectors

There is a vector for the individual Pixel which contains an red, green and blue value as well as a vector of the Pixel vector that contains number of Pixels in a bitmap file.

### Functions

There are 2 bool functions, one for  detecting shades of red and one for shades of green with bool as the return type and variables defined in int main. There is alse a void function that takes the bools and if both return as true, puts out a statement declaring that red and green have been detected and could be problamatic to those that suffer from red green colorblindness. 

### Classes

*Coming in version 1.0*
