# 🧮 Matrix Random Generator (C++)

This project is a simple C++ program that demonstrates working with 2D arrays (matrices), random number generation, and basic operations like summation.

## 📌 Features

* Generate a 3x3 matrix with random numbers (from 1 to 100)
* Display the matrix in a formatted way
* Calculate and display the sum of all elements

## 🛠️ Technologies Used

* C++
* Standard Libraries:

  * `<iostream>`
  * `<iomanip>`
  * `<cstdlib>`
  * `<ctime>`

## 🚀 How It Works

1. The program generates random numbers using `rand()`
2. Fills a 3x3 matrix with these numbers
3. Prints the matrix in a clean format
4. Calculates the total sum of all elements

## ▶️ Example Output

```
The following is a 3x3 random matrix:

  23  45  67
  12  89  34
  56  78  10

Sum of Matrix1 is: 414
```

## ⚙️ How to Run

### 1. Compile

```
g++ main.cpp -o matrix
```

### 2. Run

```
./matrix
```

## 📁 Project Structure

```
.
├── main.cpp
└── README.md
```

## 💡 Notes

* Random seed is initialized using current time
* Matrix size is fixed (3x3), but can be modified easily

## 👨‍💻 Author

Your Name
