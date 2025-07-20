# Common Mistake: Incorrect Use of Arrow Operators in C++ Input/Output

## 📝 Problem Statement

In C++, the `<<` and `>>` operators are used for output (`cout`) and input (`cin`) respectively. A common mistake is to use a single `<` or `>` or to mix up the direction, which leads to compilation errors.

---

## 🚩 The Mistake

**Incorrect usage:**

```cpp
int value;
cout < "Enter a value: "; // ❌ Error: should be <<
cin < value;              // ❌ Error: should be >>
```

**Error message:**
```
error: no match for 'operator<' (operand types are 'std::ostream' and 'const char [16]')
error: no match for 'operator<' (operand types are 'std::istream' and 'int')
```

---

## ✅ The Correct Way

**Correct usage:**

```cpp
int value;
cout << "Enter a value: "; // ✅ Correct
cin >> value;              // ✅ Correct
```

---

## 💡 Why Does This Happen?

- `cout <<` sends data to the output stream (console).
- `cin >>` reads data from the input stream (console).
- Using a single `<` or `>` is a syntax error because those are comparison operators, not stream operators.

---

## 📝 Coding Exercise

Try to use a single `<` or `>` with `cin` or `cout` and observe the error. Then, fix it by using the correct `<<` or `>>` operator.

---

## 🛠️ Example

```cpp
// ❌ Incorrect
cout < "Hello, World!";
cin < value;

// ✅ Correct
cout << "Hello, World!";
cin >> value;
```

---

## 📌 Summary

- Always use `<<` with `cout` and `>>` with `cin`.
- Using a single `<` or `>` will cause a compilation error.

---

**Remember:**  
> In C++, `<<` is for output and `>>` is for input. Never use a single