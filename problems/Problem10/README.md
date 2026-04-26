# 🔢 Identity Matrix Checker — C++

A simple C++ program that checks whether a given 3×3 matrix is an **Identity Matrix**.

---

## 📌 What is an Identity Matrix?

An Identity Matrix is a square matrix where:
- All **diagonal elements** (where row index == column index) equal **1**
- All **other elements** equal **0**

**Example:**
```
1  0  0
0  1  0
0  0  1
```

---

## 🚀 Features

- Prints a formatted matrix to the console
- Checks if the matrix is an identity matrix
- Returns a clear Yes/No result

---

## 🛠️ How It Works

The program uses two functions:

### `PrintMatrix`
Prints the 3×3 matrix in a clean, aligned format using `setw()`.

### `IsIdentityMatrix`
Loops through every element of the matrix:
- If `i == j` (diagonal) → element must be `1`
- If `i != j` (off-diagonal) → element must be `0`
- Returns `true` only if all conditions pass

---

## 💻 How to Run

### Prerequisites
- A C++ compiler (e.g., `g++`, MSVC, or Clang)

### Compile & Run (Linux / macOS / Windows with g++)
```bash
g++ -o identity_matrix main.cpp
./identity_matrix
```

### Expected Output
```
Matrix1:
  1   0   0
  0   1   0
  0   0   1

YES: Matrix is identity.
```

---

## 📁 Project Structure

```
📦 identity-matrix
 ┗ 📜 main.cpp       # Main source file with all logic
 ┗ 📜 README.md      # Project documentation
```

---

## 🧠 Concepts Used

| Concept | Description |
|---|---|
| 2D Arrays | Storing the matrix data |
| Nested Loops | Iterating over rows and columns |
| Conditional Logic | Checking diagonal vs off-diagonal |
| Functions | Separating print and check logic |

---

## 👤 Author

> Feel free to add your name and GitHub profile link here.

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).