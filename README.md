# Libft

## Introduction
This is the first project of the 42 curriculum. It consists of implementing a custom C library, libft.a, that replicates and extends a subset of the standard C library functionalities. The goal is to build a solid foundation in C programming, memory management, and data structures without relying on external libraries.

## Table of Contents
- [Features](#features)
- [Learning Highlights](#learning-highlights)
- [Project Structure](#project-structure)
- [Mandatory Functions](#mandatory-functions)
- [Additional Functions](#additional-functions)
- [Bonus: Linked List Functions](#bonus-linked-list-functions)
- [Compilation](#compilation)
- [Usage](#usage)
- [Conclusion](#conclusion)
- [License](#license)

## Features

- Custom implementation of standard C functions (e.g., ft_strlen, ft_memcpy, ft_atoi)
- Advanced string handling (ft_substr, ft_split, ft_strtrim, etc.)
- Linked list utility functions (ft_lstadd_back, ft_lstmap, etc.)
- Written in compliance with the 42 Norm
- Completed mandatory and bonus parts

## Learning Highlights
- Gained strong fundamentals in string manipulation and manual memory management
- Learned to implement and use singly linked lists using generic data pointers
- Developed clean, modular C code with static helper functions
- Built experience with Makefiles, modular design, and header files

## Project Structure
```cpp
├── Makefile
├── libft.h
├── ft_*.c
├── assets/
│   └── libft.jpeg
```

## Mandatory Functions
Reimplementations of libc functions with a ft_ prefix:
- Character checks: ft_isalpha, ft_isdigit, ft_isalnum, etc.
- Memory operations: ft_memset, ft_memcpy, ft_bzero, etc.
- String ops: ft_strlen, ft_strchr, ft_strrchr, ft_strncmp, etc.
- Conversions: ft_atoi, ft_toupper, ft_tolower
- Memory allocation: ft_calloc, ft_strdup

## Additional Functions
Higher-level utility functions:
- String manipulation: ft_substr, ft_strjoin, ft_strtrim, ft_split
- Conversion: ft_itoa
- Functional: ft_strmapi, ft_striteri
- File descriptor output: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

## Bonus: Linked List Functions
Implemented using the following struct:

```c
typedef struct s_list {
    void            *content;
    struct s_list   *next;
} t_list;
```

## Bonus functions:
- Creation & inspection: ft_lstnew, ft_lstsize, ft_lstlast
- Insertion: ft_lstadd_front, ft_lstadd_back
- Deletion: ft_lstdelone, ft_lstclear
- Iteration & mapping: ft_lstiter, ft_lstmap

## Compilation
Run:

```bash
make            # compiles mandatory part
make bonus      # compiles bonus functions into libft.a
make clean      # removes object files
make fclean     # removes object files and library
make re         # rebuilds everything
```

## Usage
You can include and link this library in your C projects:

```c
#include "libft.h"

int main(void)
{
    char *joined = ft_strjoin("Hello, ", "world!");
    printf("%s\n", joined);
    free(joined);
    return 0;
}
```

## Conclusion
This project was an excellent opportunity to dive into the C language by rebuilding commonly used standard functions. Completing all bonuses gave me hands-on experience with data structures and helped solidify my understanding of memory management and abstraction in C.

## License
This project is licensed under the [MIT License]().
