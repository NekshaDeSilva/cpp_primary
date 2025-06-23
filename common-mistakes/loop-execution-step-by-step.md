# How the loops actually work? Not the way you think.
### by @NekshaDeSilva

#### example:
```cpp
int main() {
  int number = 1;
  for (number; number < 10; number += 6) {
    cout << number << endl;
  }
}
```
#### In this provided code above, do you think how it's gonna be executed? 

### Here are some possible ways of execution.

## Possible way #1
#### 1. initializing number 
#### 2. loop starts.
#### 3. the value of number gets first assigned to 1.
#### 4. checks whether the number is less than 100.
#### 5. if true, add 20 to the existing value and run the statement ``` cout << "hey my age is " << number << endl;```

## Possible way #2
#### 1. initializing number 
#### 2. loop starts.
#### 3. the value of number gets first assigned to 1.
#### 4. checks whether the number is less than 100.
#### 5. if true, run the statement ``` cout << "hey my age is " << number << endl;``` and add the 20 to the number.

## Possible way #3
#### 1. initializing number 
#### 2. loop starts.
#### 3. the value of number gets assigned to 1.
#### 4. checks whether the number is less than 100.
#### 5. if true, the value again gets assined into 1 and run the statement ``` cout << "hey my age is " << number << endl;```


#### > The way #3 can be directly thrown away becuase it makes the loop infinite, which is the total opposite what we want to do.

### Now, what about other #1 and #2 methods? let's figure out.

# How the for loop works:
### The general form is:
```cpp
for (initialization; condition; increment) {
    // loop body
}
```
#### Initialization runs once at the start.
#### Condition is checked before every loop iteration. If it’s true, the loop body runs.
#### If false, the loop ends.
#### Increment runs after each loop body execution.
###### ---------------------------------------------------
##### First iteration:

##### number = 1 (initialization)
##### number < 10 → 1 < 10 → true
##### Prints 1
##### number += 6 → number = 7
##### Second iteration:
##### 
##### number < 10 → 7 < 10 → true
##### Prints 7
##### number += 6 → number = 13
##### Third iteration:
##### 
##### number < 10 → 13 < 10 → false
##### Loop ends, so 13 is not printed.

##### The condition is checked before each iteration.
##### If the condition is false, the loop body does not execute.
##### That’s why when number becomes 13, the condition number < 10 is false, so the loop stops before printing 13.


