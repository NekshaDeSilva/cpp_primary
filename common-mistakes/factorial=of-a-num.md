# Factorial of a Number in Programming

## 🧮 What is a Factorial?

The **factorial** of a non-negative integer `n` (written as `n!`) is the product of all positive integers less than or equal to `n`.

**Mathematically:**
- `n! = n × (n-1) × (n-2) × ... × 2 × 1`
- By definition, `0! = 1`

**Examples:**
- `5! = 5 × 4 × 3 × 2 × 1 = 120`
- `3! = 3 × 2 × 1 = 6`
- `1! = 1`
- `0! = 1`

---

## 💻 Factorial in Programming

Factorials are used in many areas of programming, including:
- **Combinatorics:** Calculating permutations and combinations
- **Mathematics:** Series expansions, probability, and statistics
- **Algorithms:** Recursion practice, dynamic programming, and more

---

## 🚀 Factorial in C++

You can calculate the factorial of a number in C++ using either a loop or recursion.

### Iterative Approach
```cpp
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
```

### Recursive Approach
```cpp
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
```

---

## 🛠️ Use Cases
- Calculating the number of ways to arrange or select items (permutations and combinations)
- Solving mathematical problems involving series and probability
- Practicing recursion and algorithmic thinking

---

## 📌 Summary
- The factorial is a fundamental mathematical operation with many uses in programming.
- In C++, you can implement it using loops or recursion.
- Always remember: `0! = 1` by definition.