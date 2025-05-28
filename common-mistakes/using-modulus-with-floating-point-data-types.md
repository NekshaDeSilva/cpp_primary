# 💡 Common Mistake: Using the Modulus Operator with Floating-Point Data Types

## 🚩 The Mistake

Many C++ beginners try to use the modulus operator `%` with floating-point numbers (`float`, `double`).  
**This is not allowed in C++ and will result in a compilation error!**

---

## ❌ Example of Incorrect Usage

```cpp
double a = 5.5, b = 2.0;
double result = a % b; // ❌ Error: invalid operands to binary expression
```
# Error Messsage
```error: invalid operands of types 'double' and 'double' to binary 'operator%'```

## ✅ The Correct Way

If you need the remainder of floating-point division, use the standard library function ```fmod()``` from ```<cmath>```:
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 5.5, b = 2.0;
    double result = fmod(a, b); // ✅ Correct
    cout << "Remainder: " << result << endl; // Output: 1.5
    return 0;
}
```


## 📝 Tip
Use ``%`` only with ```integers```.
Use ```fmod()``` for ```floating-point``` remainders.
# Remember:

The modulus operator ```%``` does not work with ```float``` or ```double``` types in C++.
Use ```fmod()``` from ```<cmath>``` for floating-point numbers!

# By OpenRockets

[![OpenRockets](https://img.shields.io/badge/OpenRockets-Verified%20Contributor-white?labelColor=black&style=for-the-badge&logo=Rocket&logoColor=white&link=https://www.github.com/openrockets)](https://www.github.com/openrockets)