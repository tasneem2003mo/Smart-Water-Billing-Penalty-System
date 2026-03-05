<img width="1898" height="687" alt="image" src="https://github.com/user-attachments/assets/98d49413-758c-4b6f-a0a9-7a282f6c8c6d" /># Smart-Water-Billing-Penalty-System
A C++ console application designed to manage water utility billing. The system monitors consumption levels and automatically triggers a penalty mechanism if the bill exceeds a specific threshold ($500$).
# Smart Water Billing & Penalty System 💧

A C++ console application designed to manage water utility billing. The system monitors consumption levels and automatically triggers a penalty mechanism if the bill exceeds a specific threshold ($500).

## Key Features
* **Consumption Monitoring:** Checks if usage is within safe limits (≤ 500).
* **Penalty Management:** Automatically applies a $200 fine for high consumption.
* **Interactive Payment Logic:** Uses loops to allow users up to 3 warnings/attempts to complete partial payments.
* **Dynamic Billing Summary:** Displays a final bill using arrays to organize data.

---

## Program Scenarios & Screenshots 📸

Below are the different cases the program handles, as shown in the output:

### 1. High Consumption with Partial Payment
When the bill is high (e.g., $800), the system asks for a fine. If the user pays partially, it calculates the remaining balance and provides warnings.
![Partial Payment](High%20Consumption%20-%20Partial%20Payment%20&%20Warning%20Logic.jpeg)

### 2. High Consumption with Immediate Full Payment
If the user pays the $200 fine immediately, the system confirms the payment and proceeds to the final bill.
![Full Payment](High%20Consumption%20-%20Immediate%20Full%20Payment.jpeg)

### 3. Normal Consumption (No Fine Required)
When the bill is within the limit (e.g., $400), no fine is triggered, and the system informs the user that their consumption is fine.
![Normal Consumption](No%20Fine%20Required.jpeg)

---

## Technical Details
* **Language:** C++
* **Concepts Used:** * `if-else` statements for threshold logic.
    * `while` loops for the warning system.
    * `Arrays` and `String` for the final billing table display.
