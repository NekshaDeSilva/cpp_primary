## What is the output of the following code?
```cpp
int a = 3;


int main() {
  int a = 20;
  cout << "a = " << a << endl;
}

```
### will it be 20 or 3? 

### The answer is 20. Because when a varible is redeclared or recreated inside a local scope such as a inside a function, It'll start treating it as the top-priority. Even when a global variable exist.

# So the answer is 20.
### That's the method.