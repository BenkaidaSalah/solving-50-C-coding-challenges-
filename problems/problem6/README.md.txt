# Matrix Middle Row & Column (C++)

## 📌 Description

This project demonstrates how to:

* Generate a 3x3 matrix with random numbers.
* Print the matrix in a formatted way.
* Extract and display:

  * The middle row
  * The middle column

## ⚙️ Features

* Uses `rand()` to generate random numbers between 1 and 100.
* Clean matrix formatting using `setw`.
* Identifies middle row and column dynamically.
* Simple and easy-to-understand structure.

## 🧠 How It Works

1. A 3x3 matrix is filled with random values.
2. The matrix is printed.
3. The middle row is calculated using:

   ```cpp
   Rows / 2
   ```
4. The middle column is calculated using:

   ```cpp
   Cols / 2
   ```

## ▶️ Example Output

```
Matrix 1:

 12   45   78
 34   56   90
 11   22   33

Middle Row of Matrix1 is:
34   56   90

Middle Col of Matrix1 is:
45   56   22
```

## 🚀 How to Run

1. Compile the program:

   ```
   g++ main.cpp -o matrix
   ```
2. Run:

   ```
   ./matrix
   ```

## 🛠 Requirements

* C++ Compiler (G++, MinGW, etc.)

## 📚 Concepts Used

* Arrays (2D)
* Functions
* Random number generation
* Matrix traversal
