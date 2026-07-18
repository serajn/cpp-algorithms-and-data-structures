# C++ Data Structures & Algorithms

A modern C++ repository for revisiting fundamental data structures and algorithms while practicing professional software development workflows.

The primary goal of this repository is not to create a production-ready library, but to reinforce core computer science concepts and build good engineering habits that are applicable to real-world C++ development.

## Objectives

This repository is used to:

* Refresh knowledge of fundamental data structures and algorithms.
* Practice writing clean, modern C++.
* Gain experience organizing multi-file C++ projects.
* Learn and apply professional development tools and workflows.
* Build a maintainable codebase using automated builds and testing.

## Technologies

This project uses a modern C++ development workflow:

* **C++20**
* **CMake** for project configuration and builds
* **GoogleTest** for unit testing *(planned)*
* **GitHub Actions** for continuous integration *(planned)*
* **Git** for version control

## Repository Structure

```text
.
├── include/        # Header files
├── src/            # Implementations
├── tests/          # Unit tests
├── leetcode/       # Algorithm practice and problem solutions
├── CMakeLists.txt
└── README.md
```

## Implemented Data Structures

* [ ] Dynamic Array
* [x] Singly Linked List
* [ ] Doubly Linked List
* [ ] Stack
* [ ] Queue
* [ ] Binary Search Tree
* [ ] AVL Tree
* [ ] Hash Table
* [ ] Heap
* [ ] Graph
* [ ] Trie

*(This list will be updated as the repository grows.)*

## Build

```bash
cmake -S . -B build
cmake --build build
```

## Running Tests

After configuring and building:

```bash
ctest --test-dir build
```

*(Available once the test suite has been added.)*

## Why This Repository?

Many data structure repositories focus only on implementing algorithms.

This repository also emphasizes the engineering practices that accompany professional C++ development, including:

* Organizing source code into logical modules
* Managing builds with CMake
* Writing automated unit tests
* Using continuous integration to verify every change
* Maintaining a clean Git history

The workflow and project organization are intentionally treated as first-class learning objectives alongside the data structures themselves.

## Notes

The `leetcode/` directory contains solutions to algorithmic practice problems. These are included as a record of problem-solving practice and are kept separate from the reusable data structure implementations.

## Future Improvements

* Complete unit test coverage for all data structures
* Integrate GitHub Actions CI
* Add benchmarks for selected data structures
* Expand documentation
* Add complexity analysis and implementation notes for each data structure
