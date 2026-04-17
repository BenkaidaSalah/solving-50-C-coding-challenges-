# 🧮 Matrix Equality Checker (C++)

## 📌 Overview

This project is a simple C++ program that works with **3x3 matrices**.
It generates two random matrices, prints them, and checks if they are equal based on the **sum of their elements**.

---

## ⚙️ Features

* Generate random numbers inside a matrix
* Print matrices in a formatted way
* Calculate the sum of matrix elements
* Compare two matrices using their total sum

---

## 🧠 How It Works

1. Two 3x3 matrices are created
2. Each matrix is filled with random numbers (from 1 to 10)
3. Both matrices are printed
4. The program calculates the sum of each matrix
5. If the sums are equal → matrices are considered equal

---

## 🚀 Example Output

```
Matrix1:
 01  05  03
 02  07  04
 06  01  09

Matrix2:
 03  04  02
 01  08  06
 05  02  07

NO: matrices are NOT equal.
```

---

## 📂 Functions Used

### 🔹 RandomNumber

Generates a random number between a given range.

### 🔹 FillMatrixWithRandomNumbers

Fills a matrix with random values.

### 🔹 PrintMatrix

Displays the matrix in a clean format.

### 🔹 SumOfMatrix

Calculates the total sum of all elements in a matrix.

### 🔹 AreEqualMatrices

Compares two matrices based on their sum.

---

## ⚠️ Note

This program checks equality based on the **sum of elements only**, not element-by-element comparison.
Two different matrices can have the same sum.

---

## 🛠️ Requirements

* C++ Compiler (GCC, MSVC, etc.)
* Basic understanding of arrays and loops

---

## ▶️ How to Run

```bash
g++ main.cpp -o matrix
./matrix
```

---

## 📌 Future Improvements

* Compare matrices element by element
* Support dynamic matrix sizes (NxN)
* Add user input instead of random generation

---

## 👨‍💻 Author

Your Name Here
