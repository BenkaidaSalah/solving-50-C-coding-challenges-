# Fill Matrix with Ordered Numbers (C++)

## 📌 Description

This project demonstrates how to:

* Fill a 3x3 matrix with sequential (ordered) numbers.
* Print the matrix in a formatted layout.

## ⚙️ Features

* Automatically fills the matrix starting from 1.
* Uses a counter to generate ordered values.
* Displays matrix in a clean format using `setw`.

## 🧠 How It Works

1. A counter starts from 1.
2. The matrix is filled row by row.
3. Each element gets the next number in sequence.

Example filling:

```
1  2  3
4  5  6
7  8  9
```

## ▶️ Example Output

```
Matrix 1:

   1    2    3
   4    5    6
   7    8    9
```

## 🚀 How to Run

1. Compile:

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

* 2D Arrays
* Nested Loops
* Counters
* Matrix Traversal
