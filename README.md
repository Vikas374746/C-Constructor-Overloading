## Experiment 12: Function Overloading in C++

**Title of the Experiment:**
To study and implement **function overloading** in C++.

---

### **Objective / Aim:**

* To understand the concept of function overloading in C++.
* To implement multiple functions with the same name but different parameter lists.
* To demonstrate how overloading improves code readability and reusability.

---

### **Tools Used:**

* Code::Blocks IDE or Visual Studio Code
* GCC Compiler (MinGW or g++)
* Operating System: Windows or Linux

---

### **Theory:**

* **Function Overloading** in C++ allows multiple functions to have the same name with different parameters (number or type).
* The compiler determines which function to call by checking the **arguments passed** at compile time (compile-time polymorphism).
* Benefits:

  1. Improves readability of code.
  2. Reduces redundancy.
  3. Enhances reusability of function names.

---

### **Programs Covered:**

#### 1. Function Overloading with Different Number of Parameters

**Algorithm:**

1. Start
2. Define a class `Calc` with overloaded functions `add`.
3. First `add(int, int)` returns the sum of two integers.
4. Second `add(int, int, int)` returns the sum of three integers.
5. In `main()`, call both versions and display results.
6. Stop

---

#### 2. Function Overloading with Different Data Types

**Algorithm:**

1. Start
2. Define overloaded functions `area`.
3. `area(int)` calculates the area of a square.
4. `area(double)` calculates the area of a circle.
5. Call both functions in `main()`.
6. Stop

---

### **Flowchart (Text Description):**

Start → Function Call → Compiler checks parameters → Selects correct overloaded function → Executes → Returns result → End

---

### **Conclusion:**

In this experiment, we studied and implemented **function overloading** in C++.

* We learned that the same function name can perform multiple tasks based on the parameter list.
* Overloading makes code more readable, avoids duplication, and provides flexibility in programming.

---
