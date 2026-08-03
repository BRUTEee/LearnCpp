#include <iostream>

/*
================ PORTABILITY & CROSS-PLATFORM =================

Different computers may have

✔ Different CPUs

✔ Different Operating Systems

Each combination forms
a different Platform.

----------------------------------------------------

Platform

↓

Hardware

+

Operating System

Examples

✔ Windows + Intel CPU

✔ Linux + Intel CPU

✔ macOS + Apple Silicon

✔ Android + ARM CPU

----------------------------------------------------

Problem

Machine Language depends
on the CPU.

A program compiled for

Windows

↓

Usually won't run directly on

Linux

or

macOS.

----------------------------------------------------

Portable Program

↓

A program that can run on
different platforms

with little or no modification.

High-level languages like C++

make portability much easier.

----------------------------------------------------

Porting

↓

The process of modifying
a program

so it can run on
another platform.

Sometimes no changes are needed.

Sometimes only a few changes.

Sometimes many changes,
especially if platform-specific
features are used.

----------------------------------------------------

Platform-Specific Code

↓

Code written specifically
for one operating system
or one CPU.

Example

Windows API

↓

Works on Windows.

May NOT work on Linux
or macOS.

----------------------------------------------------

Cross-Platform

↓

A program designed to work
on multiple platforms.

Examples

Same C++ source code

↓

Compile for Windows

↓

Compile for Linux

↓

Compile for macOS

Each platform gets its own
executable.

----------------------------------------------------

Why High-Level Languages Help

You write

↓

One C++ Program

↓

Compile separately
for each platform

↓

Native executable
for that platform.

The source code stays
mostly the same.

----------------------------------------------------

Advantages of Portable Programs

✔ Reach more users.

✔ Easier maintenance.

✔ Less code duplication.

✔ Easier to move
between operating systems.

----------------------------------------------------

Easiest Analogy

Imagine you write a recipe.

Portable Recipe 
Make Tea

↓

Boil Water

↓

Add Tea

↓

Add Sugar

Anyone can follow it.

Whether they live in:

India 🇮🇳
USA 🇺🇸
Japan 🇯🇵

The recipe still works.

That's a portable program.

Platform-Specific Recipe 
Use an Indian pressure cooker.

Now someone in another country may not have one.

The recipe only works in certain places.

That's platform-specific code.

Real Programming Example

Suppose you write:

#include <iostream>

int main()
{
    std::cout << "Hello\n";
}

This same source code can be:

Compile on Windows

↓

Hello.exe

or

Compile on Linux

↓

hello

or

Compile on macOS

↓

hello

The source code is almost identical.

Only the compiler creates a different executable for each platform.

----------------------------------------------------

Quick Recap

Platform

↓

Hardware + Operating System.

----------------------------

Portable Program

↓

Runs on multiple platforms
with little or no changes.

----------------------------

Porting

↓

Modify a program
to run on another platform.

----------------------------

Platform-Specific Code

↓

Works only on
certain platforms.

----------------------------

Cross-Platform

↓

Designed to work on
multiple platforms.
*/