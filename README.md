# Building C++ files with Bazel

## Introduction

Bazel is a build system opensourced by Google. Bazel is scalable, fast and can build multiple languages, not to mention a lot of Google's other projects use Bazel. 
Learning this definitely has its advantages. A good place to get started is [here](https://bazel.build/).

You can install Bazel through [this](https://docs.bazel.build/versions/master/install-ubuntu.html) link.

There are plenty of tutorials to get started with Bazel. Here is a [link to the C++ tutorial](https://docs.bazel.build/versions/master/tutorial/cpp.html) for Bazel.

## Build this project
This project is just a sample to display inheritance property in C++. The code can be much cleaner and efficient if polymorphism is used here, but the purpose of this repository is to work with Bazel.

Once Bazel is installed, you can build this project using the following steps:

**1. Clone the repository:**
```
$ git clone https://github.com/mithun-bharadwaj/bazel_build_example.git
```

**2. Steps to build and run using Bazel:**

This creates a directory called bezel_build_example which is the workspace for Bazel. Next step is to build and run.
```
$ cd bazel_build_example
$ bazel build //src:account-main
$ ./bazel-bin/src/account-main
```

This should display the output as generated by the code.

**3. Build dependency graph:**

To view the dependency graph of the file, you'll need graphviz and xdot (as mentioned in the tutorial).
```
$  xdot <(bazel query --notool_deps --noimplicit_deps "deps(//src:account-main)" --output graph)
```

The above command should display the builddependency graph as follows:
![alt text](https://github.com/mithun-bharadwaj/bazel_build_example/blob/master/bazel_build_dependency_graph.jpg)

**Note:** This is just the basics of the build process. The build process becomes more involved as the complexity of the project increases, however, Bazel seems to be more intuitive than some of the other build systems such as CMake.