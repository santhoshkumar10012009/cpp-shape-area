# C++ Shape Area Calculator

A simple C++ program that uses an abstract `Shape` class and calculates the
areas of a circle, rectangle, and triangle.

## Build and run

```sh
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o shape-area
./shape-area
```

The program prompts for the circle's radius, the rectangle's length and
breadth, and the triangle's base and height.

## Sample run

Example interaction (the values after each prompt are entered by the user):

```text
Enter radius: 5
Enter length: 4
Enter breadth: 6
Enter base: 10
Enter height: 8

--- Area Results ---
Area of Circle: 78.5
Area of Rectangle: 24
Area of Triangle: 40
```
