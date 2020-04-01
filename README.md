To clone:
===
```bash
git clone git@github.com:backdround/fuzzywuzzy_include_problem.git
git submodule update --init --recursive
```

To reproduce:
===
```bash
# Going to project.
cd fuzzywuzzy_include_problem

# Going to build directory.
mkdir build && cd build

# Build.
cmake .. && cmake --build .
```

To fix:
===
```bash
# Going to submodule fuzzywuzzy.
cd ../fuzzywuzzy

# Going to fixed commit.
git checkout master

# Build.
cd ../build
cmake .. && cmake --build .
```
