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

C++

C

Rust

----------------------------------------------------

Interpreted Languages

Python

JavaScript

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

Imagine you have a book written in Japanese, but you only understand English.

Compiler

You hire a translator.

The translator translates the entire book.

Japanese Book

↓

Translator

↓

English Book

Now you can read it again and again without needing the translator.

Exactly like a compiler.

Interpreter

Instead, imagine the translator sits beside you.

You read:

Sentence 1

Translator translates it.

You read:

Sentence 2

Translator translates it.

You read:

Sentence 3

Translator translates it.

This happens every time you read the book.


That's an interpreter.

----------------------------------------------------

Quick Recap

Compiler

↓

Entire Program

↓

Executable Created

↓

Fast Execution

----------------------------

Interpreter

↓

One Statement at a Time

↓

No Executable

↓

Slower Execution

----------------------------

C++

↓

Compiled Language.
*/