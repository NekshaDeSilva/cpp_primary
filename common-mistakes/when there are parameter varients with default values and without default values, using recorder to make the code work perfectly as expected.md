# Common Mistake: Function Parameter Ordering with Default Values in C++

## 📝 Problem Statement

When defining functions in C++, you may want to provide default values for some parameters. However, if you do not order your parameters correctly—placing parameters with default values before those without—you will get a compilation error.

---

## 🚩 The Mistake

**Incorrect:** Placing a parameter with a default value before a parameter without a default value.

```cpp
// ❌ This will cause a compilation error!
void example(int a = 5, int b) {
    // ...
}
```

**Error message:**
```
error: a parameter with a default argument cannot appear before a parameter without a default argument
```

---

## ✅ The Correct Way

**Correct:** Always place parameters with default values **after** those without default values.

```cpp
// ✅ This is valid
void example(int a, int b = 5) {
    // ...
}
```

---

## 💡 Why Does This Happen?

C++ needs to know which arguments are being omitted when you call a function. If a parameter with a default value comes before one without, the compiler cannot determine which value to use for the omitted argument.

---

## 📝 Coding Exercise

Try to define a function with parameters in the wrong order and observe the error. Then, fix the order and see the code compile successfully.

---

## 🛠️ Example

```cpp
// ❌ Incorrect
void printNumbers(int start = 1, int end) {
    // ...
}

// ✅ Correct
void printNumbers(int start, int end = 10) {
    // ...
}
```

---

## 📌 Summary

- Always put parameters with default values **after** those without default values in your function declarations.
- This helps the compiler understand which arguments are being omitted and prevents errors.

---

**Remember:**  
> In C++, parameters with default values must come last in the parameter