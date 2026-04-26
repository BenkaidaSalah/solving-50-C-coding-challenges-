# Scalar Matrix Checker — C++

A C++ program that checks whether a 3×3 matrix is a **Scalar Matrix**.

---

## What is a Scalar Matrix?

A matrix where diagonal elements are all **equal to each other** and everything else = **0**

```
5  0  0
0  5  0
0  0  5
```

> Note: An Identity Matrix is a special case of a Scalar Matrix where the diagonal value = 1.

---

## How to Run

```bash
g++ -o scalar_matrix main.cpp
./scalar_matrix
```

## Output

```
Matrix1:
  5   0   0
  0   5   0
  0   0   5

YES: Matrix is Scalar.
```

---

## How It Works

- `i == j` → diagonal element → must equal **first diagonal element** `Matrix[0][0]`
- `i != j` → off-diagonal element → must be **0**
