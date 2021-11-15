# Elevator

Create a solution using the tech stack you want.

The exercice consist on 3 iterations over the same problem, you would need to create 3 diferent version to show incremental changes on them.

## Valuable things:
Open/Close.
Testing.
Code clarity.

## Exercice version 1
Create a class (or function) that returns the elevator current floor after sending a simple string input like "+-+-", the initial floor will be always 0.

Some test cases:
"++" -> 2
"--" -> -2
"-+-+-+" -> 0

## Exercice version 2
Same as before but the elevator can't never go to a basement level (negative floor), so every time the user inputs - and the elevator is at base floor (0) the input is ignored.

Some test cases:
"+----+" -> 1
"+--" -> 0

## Exercice version 3
Same as before but the input will be always prefixed by a number "2+2-" this numbers acts as a multiplier for the action, so the action will be executed X times, this needs to respect the previous rules from part 2.

"2-" -> 0
"1+2-1+" -> 1
"3+2+-2" -> 3
