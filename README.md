# copro-plus

C++ solutions to several Competitive Programming problems

## Environment

### Installation

Install the following Python packages:

```bash
pip install termcolor
pip install simplejson
```

Install [Competitive Companion](https://github.com/jmerle/competitive-companion) browser extension.

### Execution

In one terminal, run `watch` to listen to all requests from the browser.

## Command-line

For Codeforces, options of C++23 are: ([reference](https://codeforces.com/blog/entry/121114))

```bash
g++ -Wall -Wextra -Wconversion -static -DONLINE_JUDGE -Wl,--stack=268435456 -O2 -std=c++23 -lstdc++exp A.cpp
```
