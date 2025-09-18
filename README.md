# MICROCONTROLLER - MICROPROCESSOR  
## LABORATORY 1: LED ANIMATION

This project is the first lab designed to get familiar with **GPIO (General Purpose Input/Output)** using the STM32F103C6 microcontroller.  
The main focus is implementing **LED Animations** through multiple exercises.

## 1. Schematic
The code was simulated in **Proteus 8** using STM32F103C6.
```markdown
## 2. Project Structure
```
LAB1_LED_Animation/
├── Core/
│   ├── Inc/        # Header files (.h)
│   └── Src/        # Source files (.c)
├── Drivers/        
├── Debug/          
├── Proteus/        # Proteus simulation files
└── README.md
|--- Images          # Images of Proteus schematics
```
# 3. How to Run the Code
Each exercise is implemented in separate `.c` and `.h` files under `./Core/Src/` and `./Core/Inc/`. There are 2 ways to run the Code
### 3.1. Clone this Project and Run:
If you clone this project to your local device, you only need to change `RUN_EXERCISE` in `./Core/Src/main.c` to the exercise number you want to run (from `1` to `10`).
```c
#define RUN_EXERCISE 10
```
### 3.2. Run Specific Exercise
1. Ensure that all hardware connections are correct as the Proteus schematic images.
2.  Download the header and source files for the specific exercise you want to run, place them in the appropriate directories, and include the header in `./Core/Src/main.c` as follows:
```c
#include "exercise-.h"
```
3. Run the code. Each exercises has two main functions: `exercise-_init()` ensure all necessary pins are available; and `exercise-_run()` to execute the exercise requirements.
You should palce `exercise-_init()` in between:
```c
/* USER CODE BEGIN 2 */
// TODO
/* USER CODE END 2 */
```
You should place `exercise-_run()` functions within the `while` loop in the `main()` function.


