
# Fibonacci Sequence

The **Fibonacci sequence** is a series of numbers where each number is the sum of the two preceding ones, starting from 1 and 1.

## Mathematical Definition

For `n >= 3`:
  
    F(n) = F(n-1) + F(n-2)

With initial values:
  
    F(1) = 1
    F(2) = 1

## The Fibonacci Sequence

    1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...

## Properties
- Appears in nature (e.g., flower petals, pinecones, shells)
- Used in computer algorithms, mathematics, and art
- The ratio of consecutive Fibonacci numbers approaches the **golden ratio** (≈ 1.618)

## Fibonacci in C++ (Iterative Example)
```cpp
void printFibonacci(int n) {
    int a = 1, b = 1;
    cout << a << ", " << b;
    for (int i = 3; i <= n; ++i) {
        int next = a + b;
        cout << ", " << next;
        a = b;
        b = next;
    }
    cout << endl;
}
```

## Use Cases
- Algorithm practice (recursion, dynamic programming)
- Modeling population growth
- Generating patterns in art and music

---

**Summary:**
The Fibonacci sequence is a fundamental concept in mathematics and programming, with many real-world applications and beautiful properties.
