# ZeroJudge Solutions

My C++ solutions to problems on [ZeroJudge](https://zerojudge.tw/).

## Layout

One `.cpp` file per problem, flat in the repository root — no subdirectories:

```
a001_sum_two_numbers.cpp
a038_reverse_integer.cpp
b532_string_processing.cpp
```

Naming: `<problem id>_<short english description>.cpp`, lowercase, underscore-separated.

The id is the official ZeroJudge problem id — look the original statement up at
`https://zerojudge.tw/ShowProblem?problemid=<id>`. The description is my own
summary, not the official title.

## Solved

| ID | File | Technique |
|----|------|-----------|
| a001 | `a001_sum_two_numbers.cpp` | Basic input/output |
| a038 | `a038_reverse_integer.cpp` | Digit extraction with `%10` and `/10`, split into its own function |
| a244 | `a244_simple_calculator.cpp` | Multiple test cases per run, branching on the operation code |
| b532 | `b532_string_processing.cpp` | String scanning, digit filtering, `switch`, the `cin >>` then `getline` pitfall |
| b993 | `b993_find_maximum.cpp` | Running maximum over a stream, `while (cin >> n)` until EOF |

## Environment

- C++17
- g++ (TDM-GCC 9.2) / Dev-C++

Build any single solution:

```
g++ -O2 -std=c++17 a038_reverse_integer.cpp -o a038
```

Compiled `.exe` files are not tracked (see `.gitignore`) — rebuild them as needed.
