# Prefix Sums Lab - Week 1

## Description
This lab involves implementing two functions to check prefix sums in an array containing only `+1` and `-1` values:
1. `non_neg_prefix_sum()`: Ensures prefix sums never go below zero.
2. `non_pos_prefix_sum()`: Ensures prefix sums never go above zero.

Unit tests are included to verify the correctness of these functions.

## How to Compile and Run

### Compile the main program
```sh
g++ -o prefix_sums prefix_sums.cpp
./prefix_sums
```

### Compile and Run Unit Tests
```sh
g++ -o test_prefix_sums test_prefix_sums.cpp -lgtest -lgtest_main -pthread
./test_prefix_sums
```

## Expected Output
```
Test 1 (non-negative prefix sum): true
Test 2 (non-negative prefix sum): false
Test 3 (non-positive prefix sum): true
```