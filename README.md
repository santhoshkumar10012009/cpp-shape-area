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

Using radius `5`, length `4`, breadth `6`, base `10`, and height `8`, the
calculated output is:

```text
--- Area Results ---
Area of Circle: 78.5
Area of Rectangle: 24
Area of Triangle: 40
```
