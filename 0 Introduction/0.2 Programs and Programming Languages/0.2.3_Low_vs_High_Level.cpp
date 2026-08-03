#include <iostream>

/*
================ COMPILER vs INTERPRETER =================

Computers understand only

Machine Language.

They do NOT understand

C++

Python

Java

etc.

High-level languages must be
translated before execution.

----------------------------------------------------

Two Translation Methods

1.

Compiler

2.

Interpreter

----------------------------------------------------

Compiler

↓

Reads the ENTIRE source code.

↓

Translates it into

Machine Language.

↓

Creates an Executable File.

----------------------------------------------------

Flow

Source Code (.cpp)

↓

Compiler

↓

Machine Code

↓

Executable (.exe)

↓

Run Program

----------------------------------------------------

Characteristics

✔ Fast execution.

✔ Executable can be run
multiple times.

✔ Errors found before execution.

----------------------------------------------------

Disadvantage

Must recompile every time
the source code changes.

----------------------------------------------------

Interpreter

↓

Reads the source code

ONE statement at a time.

↓

Translates

↓

Immediately Executes.

----------------------------------------------------

Flow

Source Code

↓

Interpreter

↓

Execute Line 1

↓

Execute Line 2

↓

Execute Line 3

(No executable file created.)

----------------------------------------------------

Characteristics

✔ Easy to test small changes.

✔ No separate compilation step.

----------------------------------------------------

Disadvantages

Slower execution.

Because translation happens
every time the program runs.

----------------------------------------------------

Examples

Compiled Languages

✔ C++

✔ C

✔ Rust

----------------------------------------------------

Interpreted Languages

✔ Python

✔ JavaScript

(Generally interpreted or
run through an interpreter.)

----------------------------------------------------

Comparison

Compiler

↓

Translate Once

↓

Run Many Times

----------------------------

Interpreter

↓

Translate Every Time

↓

Execute Immediately

----------------------------------------------------

Important

C++ is a

Compiled Language.

The compiler creates an

Executable File

that the operating system
can run directly.

----------------------------------------------------

Easiest Analogy

Imagine you're using a TV remote.

You press:

Volume +

The TV becomes louder.

Do you know:

Which electrical circuit changed?
Which transistor switched?
How the speaker voltage increased?

No.

You don't need to.

The remote hides all the complexity.

That's abstraction.

Programming works exactly the same.

You write:

int sum = a + b;

You don't worry about:

CPU Registers

↓

Memory Addresses

↓

Binary Addition

↓

Machine Instructions

The compiler handles all of that for you.

----------------------------------------------------

Quick Recap

Low-Level

↓

Close to CPU

↓

Hard for Humans

↓

Fast

-------------------------

High-Level

↓

Close to Humans

↓

Easy to Read

↓

Needs Translation

↓

CPU Executes

-------------------------

Abstraction

↓

Hide Complexity

↓

Focus on Problem
*/