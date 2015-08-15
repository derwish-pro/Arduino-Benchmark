**Arduino Benchmark**

This is a simple program to compare the performance of different Arduino boards.

The Arduino performs a simple mathematical operation on different data types to visually see how it handles 8-bit data and 32-bit floating point data.

I got the following results:

**Arduino Mega:**

* float 621 ms
* int 51 ms
* byte 20 ms

**Arduino Due:**

* float 168 ms
* int 4 ms
* byte 6 ms

**Intel i7 2600k** for comparison (one thread):

* float 0.075 ms
* int 0.006 ms