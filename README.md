# Sudoku Solver

A simple C++ program to solve Sudoku puzzles using backtracking. This program allows users to input their own Sudoku puzzles and finds the solution.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Sudoku Solver is a C++ application that provides an interactive way for users to solve Sudoku puzzles. The program uses a backtracking algorithm to find the solution for a given Sudoku puzzle. Users can input their Sudoku puzzles row by row, and the program will solve it.

## Features

- **User-Friendly Input**: Input Sudoku puzzles row by row.
- **Backtracking Algorithm**: Uses backtracking to find the solution for Sudoku puzzles.
- **Interactive Console Interface**: Displays the solved Sudoku puzzle in the console.

## Usage

1. Clone the repository to your local machine:

    ```bash
    git clone https://github.com/your-username/sudoku-solver.git
    ```

2. Navigate to the repository directory:

    ```bash
    cd sudoku-solver
    ```

3. Compile the C++ code:

    ```bash
    g++ sudoku_solver.cpp -o sudoku_solver
    ```

4. Run the program:

    ```bash
    ./sudoku_solver
    ```

5. Enter the Sudoku puzzle row by row, using `0` to represent empty cells.

## Example

Here's an example of solving a Sudoku puzzle:

Enter the Sudoku puzzle (Enter 0 for empty cells):
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9

![image](https://github.com/ybigsur5/Sudoku/assets/115338956/2f51e8ea-f6ad-4106-a35d-0fdf720d6faa)

5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
