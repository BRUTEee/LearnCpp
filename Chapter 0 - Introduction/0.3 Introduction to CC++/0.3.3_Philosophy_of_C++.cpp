#include <iostream>

/*
================ THE PHILOSOPHY OF C++ =================

The design philosophy of

C

and

C++

can be summarized as

"Trust the Programmer."

----------------------------------------------------

Meaning

C++ gives programmers

a high degree of freedom.

You have a lot of control over

✔ Memory

✔ Performance

✔ Resources

✔ Program behavior

----------------------------------------------------

C++ assumes

"If you wrote it,

you probably meant it."

Therefore,

the language often
does NOT stop you
from writing dangerous code.

----------------------------------------------------

Advantages

✔ High Performance.

✔ Maximum Flexibility.

✔ Fine control over hardware.

✔ Can build very efficient software.

----------------------------------------------------

Disadvantages

More freedom

↓

More responsibility.

The programmer must avoid
common mistakes.

C++ trusts YOU
to write correct code.

----------------------------------------------------

Example

int x;

std::cout << x;

Program compiles.

But

x

was never initialized.

C++ does not stop you.

This may result in

Undefined Behavior.

----------------------------------------------------

Another Example

int* ptr = nullptr;

*ptr = 10;

Program compiles.

But

Dereferencing a null pointer

is invalid.

C++ trusts that
you know what you're doing.

----------------------------------------------------

Pitfalls

↓

Common mistakes that
new programmers often make.

Examples

✔ Uninitialized variables.

✔ Invalid pointers.

✔ Memory errors.

✔ Undefined Behavior.

----------------------------------------------------

Because C++ gives
so much freedom,

knowing

"What NOT to do"

is almost as important
as knowing

"What TO do."

----------------------------------------------------

LearnCpp Goal

Teach

✔ Correct Programming.

✔ Common Mistakes.

✔ Best Practices.

So you avoid
these pitfalls.

----------------------------------------------------

Key Idea

Freedom

↓

Responsibility.

More control

↓

More chances to make mistakes.

----------------------------------------------------

Easiest Analogy

Imagine someone gives you a sports bike.
The company says:
Here are the keys.
Drive responsibly.
They don't stop you from driving at 180 km/h.
They trust that you will use it correctly.
That's exactly C++.


Python (Conceptually)
Python is more like a bicycle with safety wheels.
It prevents many beginner mistakes.

C++
C++ hands you the keys and says:
Good luck.

Don't crash.

Real Example
int x;
std::cout << x;

C++ doesn't say:
You forgot to initialize x.

Instead it says:
Okay...
You wrote it.
I'll trust you.


If something goes wrong later,
that's your responsibility.

----------------------------------------------------

Quick Recap

C++ Philosophy

↓

Trust the Programmer.

----------------------------

Advantages

↓

High Performance.

↓

Flexibility.

↓

Control.

----------------------------

Disadvantages

↓

More Responsibility.

↓

Easy to make mistakes.

----------------------------

Learn

What TO do

AND

What NOT to do.

C++ gives you great freedom and control, 
but expects you to use that freedom responsibly.
*/