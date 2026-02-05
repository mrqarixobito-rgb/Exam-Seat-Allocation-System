# Smart Exam Seat System

## Prerequisites

- **C++ Compiler**: GCC (g++), Clang, or Visual Studio.
- **Git**: To clone the repository.

## Installation & Running

### 1. Clone the Repository

Open your terminal (Command Prompt, PowerShell, or Terminal) and run:

```bash
git clone <your-repo-url>
cd seat
```

### 2. Compile the Project

Run the following command to compile the project. This links `main.cpp` with all source files in the `src` directory.

```bash
g++ -std=c++11 main.cpp src/*.cpp -o seat_system
```

### 3. Run the Application

**On Windows:**
```bash
seat_system.exe
```

**On Linux / macOS:**
```bash
./seat_system
```