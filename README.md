# C++ std::vector Out-of-Bounds Access

This repository demonstrates a common error in C++: accessing elements outside the bounds of a `std::vector`. Accessing an element beyond the vector's size leads to undefined behavior, meaning the program's outcome is unpredictable.  It might crash, produce incorrect results, or seemingly work correctly, only to fail later. 

**The Problem:**
The `bug.cpp` file shows a simple example where accessing `vec[2]` causes undefined behavior because the vector only has two elements (indices 0 and 1).

**The Solution:**
The `bugSolution.cpp` file provides a corrected version.  It uses `at()` which throws an exception if an out-of-bounds access is attempted, providing a more controlled way to handle such errors, and also `size()` to check the bounds before accessing elements.  Alternatively, range-based for loops are safer and avoid index-based errors entirely.

**Key takeaway:** Always check the size of the vector before accessing elements to prevent potential crashes and unexpected results.  Prefer safer methods like `at()` or range-based for loops whenever possible.