# MICROCONTROLLER - MICROPROCESSOR  
## LABORATORY 1: LED ANIMATION

This project is the first lab designed to get familiar with **GPIO (General Purpose Input/Output)** using the STM32F103C6 microcontroller.  
The main focus is implementing **LED Animations** through multiple exercises.

## 1. Schematic
The code was simulated in **Proteus 8** using STM32F103C6.

## 2. How to Run the Code
Each exercise is implemented in separate `.c` and `.h` files under `./Core/Src/` and `./Core/Inc/`. There are 2 ways to run the Code
### 2.1. Clone this Project and Run:
If you clone this project to your local device, you only need to change `RUN_EXERCISE` in `./Core/Src/main.c` to the exercise number you want to run (from `1` to `10`).
```c
#define RUN_EXERCISE 10
```
### 2.2. Run Specific Exercise
1. Ensure that all hardware connections are correct as the Proteus schematic images.
2. Download the header and source files for the specific exercise you want to run, place them in the appropriate directories, and include the header in `./Core/Src/main.c` as follows:
```c
#include "exercise-.h"
```
Each exercises has two main functions: `exercise-_init()` ensure all necessary pins are available; and `exercise-_run()` to execute the exercise requirements.
4. Run the code. You should palce `exercise-_init()` in between:
```c
/* USER CODE BEGIN 2 */
// TODO
/* USER CODE END 2 */
```
You should place `exercise-_run()` functions within the `while` loop in the `main()` function.

## 3. Simulation on Proteus
You can find Proteus project files under `./Proteus:
```
STM32F103C6_LAB1_EX1.pdsprj
STM32F103C6_LAB1_EX2.pdsprj
...
```
## 4. Note
Ensure correct clock configuration in CubeMX before building.
If running on hardware, connect LEDs and resistors exactly as per schematic.
The .gitignore is set up to exclude build outputs and temporary files, so only source code and important project files remain in the repository.
