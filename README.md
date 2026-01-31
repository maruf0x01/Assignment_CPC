# Programming Club Assignment - C++ Problems

## Question 1: The "Namespace" Trap
**File:** `Namespace.cpp`

Write a C++ program where you create a variable named `cout` (integer) inside the main function.

1. Assign it the value 100.
2. Try to print this variable using the standard `std::cout`.
3. **Constraint:** You cannot delete the line `using namespace std;` at the top. You must solve the name collision (conflict) locally.

---

## Question 2: The "Greedy Input"
**File:** `Greedy_Input.cpp`

Write a program that asks the user to enter their First Name and Last Name.

- **Input Scenario:** The user is "lazy" and types deeply weird spacing.
  - Example Input: `Sakibul` (then hits Enter 5 times) `Islam`
- **Code Requirement:** You must use only one `cin` statement to capture both names into two separate string variables.
- **Output:** Print them together on one line like: `Name: Sakibul Islam` (single space in between).

**Question is:** Does your program crash or wait during the 5 "Enters"? Write one sentence explaining what `cin` ignores that makes this work (or fail).

---

## Question 3: The "Namespace" Locked Room
**File:** `Locked_Room.cpp`

**Problem:** You represent "PUB Computer & Programming Club" that has banned the standard namespace.

**Task:** Write a working "Hello World" program with the following strict rules:

1. You are FORBIDDEN from writing `using namespace std;` anywhere in the code.
2. You are FORBIDDEN from writing `std::` inside the `main()` function.
3. **The Twist:** You must use the `using` keyword only for the specific tools you need (like `cout` and `endl`), placed before `main()`.

**Code Structure to fill in:**
```cpp
#include <iostream>
// ??? YOUR CODE HERE ???
int main() {
    cout << "We are the best club!" << endl; // This line must work exactly as it is.
    return 0;
}
```

---

## Question 4: The "Ambiguous" Recruiter
**File:** `Ambigious.cpp`

Look at this code snippet. Do not run it yet.

```cpp
void registerMember(int id) {
    cout << "Member ID: " << id << endl;
}
void registerMember(int &id) {
    cout << "Reference ID: " << id << endl;
}
int main() {
    int x = 10;
    registerMember(x); // Line A
    registerMember(20); // Line B
    return 0;
}
```

**Tasks:**
1. Which line (A or B) will generate an error?
2. **Explain why:** Write 2-3 sentences explaining the "Ambiguity" here.
3. **Fix it:** Rewrite the functions so that `registerMember` can handle both a direct number (like 20) and a variable (like x) without conflict, using Function Overloading.

---

## Question 5: The "Immortal Player" Bug
**File:** `Immortal_Player.cpp`

**Story:** You are a Game Developer. You wrote a function for your character to take damage when an enemy attacks.

**The Problem:** There is a bug! When the enemy hits the player, the function subtracts health, but back in the main game loop, the player's health goes right back to 100. The player is accidentally "immortal."

**Your Job:** Fix the code by using a Reference Variable (`&`).

**Requirements:**
1. Create a variable in `main()` called `playerHP` and set it to 100.
2. Write a function called `takeDamage`. It should accept two inputs:
   - `health` (This must be a Reference to the real variable).
   - `damage` (An integer).
3. Inside the function, subtract `damage` from `health`.
4. In `main()`, call the function to deal 30 damage, then call it again to deal 20 damage.
5. Print the final HP.
   - **Fail:** If it prints 100 or 80.
   - **Pass:** If it prints 50 (because 100 - 30 - 20 = 50).

---

## Question 6: The "Budget Manager"
**File:** `Budget_Manager.cpp`

You are building a small tool to manage Club Funds. Write a function called `processTransaction` that takes three parameters:

1. `current_balance` (must act as a Reference—changes inside function must update the original variable).
2. `amount` (integer).
3. `is_fee` (boolean, default value = `false`).

**Logic:**
- If `is_fee` is true, deduct `amount` from balance.
- If `is_fee` is false, add `amount` to balance.
- **Twist:** If the `current_balance` becomes negative, do NOT update the balance. Instead, print "Insufficient Funds".

**Task:** In `main()`, start with `balance = 500`. Call the function 3 times with different values to demonstrate all scenarios (Add money, Pay fee, Fail to pay fee). Print the balance inside `main()` after every call to prove the reference is working.