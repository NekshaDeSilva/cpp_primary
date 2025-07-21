# C++ String Methods: Usage and Examples

This document showcases the most useful C++ string methods with clear explanations and at least 3 code examples for each.

---

| Method                           | Description                                   |
| -------------------------------- | --------------------------------------------- |
| `s.size()` / `s.length()`        | Length of the string                          |
| `s.empty()`                      | Check if the string is empty                  |
| `s[i]`                           | Access i-th character                         |
| `s.at(i)`                        | Safe access with bounds checking              |
| `s.back()` / `s.front()`         | Last / First character                        |
| `s += "abc"` / `s.append("abc")` | Append string                                 |
| `s.substr(pos, len)`             | Substring from position `pos` of length `len` |
| `s.find("abc")`                  | Find first occurrence of substring            |
| `s.rfind("abc")`                 | Find last occurrence                          |
| `s.erase(pos, len)`              | Remove part of string                         |
| `s.insert(pos, "abc")`           | Insert at a position                          |
| `s.replace(pos, len, "abc")`     | Replace part with new string                  |
| `s.compare("xyz")`               | Lexicographic comparison                      |
| `reverse(s.begin(), s.end())`    | Reverse string (from `<algorithm>`)           |
| `sort(s.begin(), s.end())`       | Sort characters                               |
| `stoi(s)` / `to_string(n)`       | String ↔ Number                               |

---

## `s.size()` / `s.length()`
```cpp
string s = "hello";
cout << s.size() << endl;      // 5
cout << s.length() << endl;    // 5
cout << string("OpenAI").size(); // 6
```

## `s.empty()`
```cpp
string s = "";
cout << s.empty() << endl;     // 1 (true)
cout << string("abc").empty(); // 0 (false)
string t;
cout << t.empty() << endl;     // 1 (true)
```

## `s[i]`
```cpp
string s = "world";
cout << s[0] << endl;          // w
s[1] = 'a';
cout << s << endl;             // warld
cout << s[s.size()-1] << endl; // d
```

## `s.at(i)`
```cpp
string s = "rocket";
cout << s.at(2) << endl;       // c
s.at(0) = 'p';
cout << s << endl;             // pocket
try { cout << s.at(100); } catch(...) { cout << "Out of range!"; }
```

## `s.back()` / `s.front()`
```cpp
string s = "cpp";
cout << s.front() << endl;     // c
cout << s.back() << endl;      // p
s.back() = 'x';
cout << s << endl;             // cpx
```

## `s += "abc"` / `s.append("abc")`
```cpp
string s = "cat";
s += "fish";
cout << s << endl;             // catfish
s.append("es");
cout << s << endl;             // catfishes
string t = "hi";
t += '!';
cout << t << endl;             // hi!
```

## `s.substr(pos, len)`
```cpp
string s = "OpenRockets";
cout << s.substr(0, 4) << endl;    // Open
cout << s.substr(4, 7) << endl;    // Rockets
cout << s.substr(2, 3) << endl;    // enR
```

## `s.find("abc")`
```cpp
string s = "abracadabra";
cout << s.find("bra") << endl;     // 1
cout << s.find("cad") << endl;     // 4
cout << s.find("xyz") << endl;     // string::npos (usually a big number)
```

## `s.erase(pos, len)`
```cpp
string s = "OpenRockets";
s.erase(s.size()-1);
cout << s << endl;                 // Rocets
s.erase(3, 2);
cout << s << endl;                 // Rocetss
s.erase(0, 4);
cout << s << endl;                 // Rocketss
```

## `s.rfind("abc")`
```cpp
string s = "abracadabra";
cout << s.rfind("bra") << endl;    // 8
cout << s.rfind("a") << endl;      // 10
cout << s.rfind("xyz") << endl;    // string::npos
```

## `s.insert(pos, "abc")`
```cpp
string s = "Open";
s.insert(4, "Rockets");
cout << s << endl;                 // OpenRockets
s.insert(0, "Go ");
cout << s << endl;                 // Go OpenRockets
s.insert(3, "--");
cout << s << endl;                 // Go --OpenRockets
```

## `s.replace(pos, len, "abc")`
```cpp
string s = "I like cats";
s.replace(7, 4, "dogs");
cout << s << endl;                 // I like dogs
s.replace(0, 1, "You");
cout << s << endl;                 // You like dogs
s.replace(4, 5, "love");
cout << s << endl;                 // You love dogs
```

## `s.compare("xyz")`
```cpp
string s = "abc";
cout << s.compare("abc") << endl;  // 0 (equal)
cout << s.compare("abd") << endl;  // negative (less)
cout << s.compare("abb") << endl;  // positive (greater)
```

## `reverse(s.begin(), s.end())`
```cpp
#include <algorithm>
string s = "OpenRockets";
reverse(s.begin(), s.end());
cout << s << endl;                 // steckoRnepO
string t = "12345";
reverse(t.begin(), t.end());
cout << t << endl;                 // 54321
string u = "racecar";
reverse(u.begin(), u.end());
cout << u << endl;                 // racecar
```

## `sort(s.begin(), s.end())`
```cpp
#include <algorithm>
string s = "dcba";
sort(s.begin(), s.end());
cout << s << endl;                 // abcd
string t = "OpenRockets";
sort(t.begin(), t.end());
cout << t << endl;                 // ORceeknoptS
string u = "banana";
sort(u.begin(), u.end());
cout << u << endl;                 // aaabnn
```

## `stoi(s)` / `to_string(n)`
```cpp
string s = "12345";
int n = stoi(s);
cout << n + 5 << endl;             // 12350
int x = 678;
string t = to_string(x);
cout << t + "9" << endl;         // 6789
string u = "42";
cout << stoi(u) * 2 << endl;       // 84
```


