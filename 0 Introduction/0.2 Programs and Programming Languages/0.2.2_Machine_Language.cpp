#include <iostream>

/*
================ MACHINE LANGUAGE & ASSEMBLY =================

CPU

↓

Can ONLY understand

Machine Language.

It CANNOT understand

C++

Python

Java

etc.

----------------------------------------------------

Machine Language

↓

Instructions written in

0s and 1s.

Example

10110000 01100001

Every instruction tells
the CPU to perform
one specific task.

----------------------------------------------------

Instruction Set

↓

The complete set of
machine language instructions

a CPU can understand.

Each CPU family has its own
Instruction Set.

----------------------------------------------------

Different CPUs

↓

Different Machine Languages.

Example

Intel (x86)

↓

One Machine Language

ARM

↓

Different Machine Language

Programs written for one
machine language generally
cannot run directly
on another CPU family.

----------------------------------------------------

Bit

↓

Binary Digit.

Only two values

0

or

1

Machine language consists
of many bits.

----------------------------------------------------

Problem with Machine Language

Very difficult for humans.
Hard to read.
Hard to write.
Hard to debug.

----------------------------------------------------

Assembly Language

↓

Human-readable version
of Machine Language.

Example

Machine

10110000 01100001

↓

Assembly

mov al, 0x61

Much easier for humans
to understand.

----------------------------------------------------

Assembler

↓

Program that converts

Assembly Language

↓

Machine Language.

CPU still executes
only Machine Language.

----------------------------------------------------

Machine Language

↓

CPU understands directly.

----------------------------

Assembly Language

↓

Humans understand better.

↓

Assembler translates it.

↓

CPU executes it.

----------------------------------------------------

Easiest Analogy

Imagine your dog.

Your dog understands only commands like:

Sit

Stand

Come

It doesn't understand:

Hey buddy, could you please have a seat?


Exactly like a CPU.

CPU

Understands only:

10110000 01100001

Not:

int x = 5;

So we need a translator.

You

↓

English

↓

Translator

↓

Dog Language

↓

Dog Understands

Exactly the same:

Programmer

↓

C++

↓

Compiler

↓

Machine Language

↓

CPU Executes

----------------------------------------------------

Quick Recap

CPU

↓

Understands only
Machine Language.

Machine Language

↓

0s and 1s.

Instruction Set

↓

All instructions a CPU knows.

Bit

↓

Binary Digit (0 or 1).

Assembly Language

↓

Human-readable Machine Language.

Assembler

↓

Assembly → Machine Language.
*/