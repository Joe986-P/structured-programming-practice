# CSC1101 Structured Programming Practice Assignment

**Student Name:** Paul Sidenya Joe Joe  
**Institution:** Uganda Christian University (UCU)  

---

## 📂 Project Structure & Exercise Summaries

### Exercise 1 – Basic Output (`basic text input`)
* **Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 2.
* **What it does:** The program prints a short biography of SIDENYA PAUL.
* **Concepts used:** `printf()`, escape sequences (`\n`).
* **How it works:** It executes sequential printf statements to output characters line-by-line into the console.

### Exercise 2 – Arithmetic operation (`arithmetic operation`)
* **Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.16.
* **What it does:** Prompts the user for two integers and calculates their sum, product, and difference.
* **Concepts used:** variables, `scanf()`, arithmetic operators (`+`, `-`, `*`).
* **How it works:** It reads two integer variables via user input, processes the math, and displays the outcomes.

### Exercise 3 – Comparison (`comparing integers`)
* **Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.17.
* **What it does:** Takes two integers from the user and uses conditional structures to print which number is larger.
* **Concepts used:** `if` statement, relational operators (`>`, `<`, `==`).
* **How it works:** It compares two stored numbers using relational logic and executes the matching output block.

### Exercise 4 – Basic Loop (`basic loop`)
* **Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 4.
* **What it does:** This program prints a simple horizontal sequence of numbers from 1 to 59, with each number being on its own line.
* **Concepts used:** `for` loop, loop counter variable, `printf()`.
* **How it works:** A `for` loop initializes a counter at 1, checks that it is less than or equal to 59, increments it by 1 each iteration, and displays the value.

### Exercise 5 – Loop with Calculation (`A loop with calculations`)
* **Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.11.
* **What it does:** The program automatically calculates and displays the total sum of all even integers ranging from 2 up to 30.
* **Concepts used:** `for` loop, compound assignment operators (`+=`), and math calculations.
* **How it works:** The loop steps through numbers by adding 2 each time to accumulate calculations within the sequence.

### Exercise 6 – Loop with User Input (`loop with user input`)
* **Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 3.
* **What it does:** This program repeatedly requests numbers from a user exactly 5 times and summarizes their final net total value.
* **Concepts used:** counter-controlled loop, nested `scanf()`, arithmetic expressions.
* **How it works:** Evaluates a state condition index to ensure it loops 5 times, stopping on each iteration to intercept keyboard input.

### Exercise 7 – Loop with Decision (`Loop with decision`)
* **Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 3.
* **What it does:** The program requests 5 numbers from the user and counts how many of those entries are negative numbers.
* **Concepts used:** `for` loop, `if` statement nested in a loop, counters.
* **How it works:** A loop runs 5 times. Each time a number is entered, an `if` statement evaluates if the number is less than 0. If true, a counter is incremented.

### Exercise 8 – Interactive Program (`interactive program`)
* **Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 4.
* **What it does:** Runs an ongoing menu system allowing users to check area calculations until choosing to exit using a sentinel value.
* **Concepts used:** `while` loop, `switch-case` decision, menu/sentinel control.
* **How it works:** The loop displays choices and evaluates the user option via a `switch` statement. The application repeats until selection 3 is triggered.
