# 42piscine_rush01

# Rush01 - Skyscraper Puzzle Solver

A 42 School Piscine Rush01 project. Solves the Skyscraper puzzle on a 4x4 grid using a backtracking algorithm written in C.

## The Puzzle

Given a 4x4 grid, place buildings of heights 1 to 4 in every cell such that:
- Each row contains exactly one of each height (1, 2, 3, 4)
- Each column contains exactly one of each height (1, 2, 3, 4)
- The number of visible buildings from each edge matches the given clues

A taller building hides all shorter buildings behind it. For example:
```
Looking left at: 3 1 2 4
Visible: 3 (hides 1 and 2), then 4 → 2 visible buildings
```

## Usage

```bash
cc -Wall -Wextra -Werror -o rush01 *.c
./rush01 "<16 clues>"
```

### Input Format

16 space-separated numbers (each between 1-4) in this order:
```
col1top col2top col3top col4top
col1bottom col2bottom col3bottom col4bottom
row1left row2left row3left row4left
row1right row2right row3right row4right
```

### Example

```bash
./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
```

Output:
```
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3
```

## How It Works

### Algorithm — Backtracking

The solver fills the grid cell by cell from left to right, top to bottom:

1. Try placing numbers 1-4 in the current cell
2. Check for duplicates in the current row and column
3. If a row is complete, verify its left/right visibility clues
4. If a column is complete, verify its top/bottom visibility clues
5. If valid, recurse to the next cell
6. If no number works, reset the cell and backtrack to the previous one

### Functions

| Function | Description |
|----------|-------------|
| `input_arr` | Parses and validates the 16 clues from argv |
| `init_grid` | Initializes the 4x4 grid to zero |
| `duplicate` | Checks if a number already exists in a row or column |
| `visible_count` | Counts visible buildings in a line from a given direction |
| `check_visibility` | Compares visible count against a clue value |
| `check_all_vis` | Checks all relevant clues when a row/column is complete |
| `convert_col` | Extracts a column from the 2D grid into a 1D array |
| `solve` | Recursive backtracking solver |
| `print_result` | Prints the completed grid |

## Error Handling

Prints `Error` followed by a newline for:
- Wrong number of arguments
- Invalid characters in input
- Numbers out of range (not 1-4)
- Incorrect number of clues (not exactly 16)
- No valid solution exists for the given clues

## Compilation

```bash
cc -Wall -Wextra -Werror -o rush01 *.c
```

## Author

42 School Piscine — Rush01 (Weekend Team Project)
WS LIM