# ft_printf

**42 Project**: `ft_printf` - A custom implementation of the standard `printf` function that handles basic format specifiers and output types.

## Project Overview

The goal of the **`ft_printf`** project is to re-implement the functionality of the standard `printf` function found in the C standard library. This implementation should handle a limited set of format specifiers, supporting printing strings, integers, characters, and hexadecimal values. 

In this project, you will:
- Implement basic parsing of format specifiers.
- Handle variadic arguments using `stdarg.h`.
- Mimic the functionality of `printf` without implementing advanced features or bonus options (e.g., precision, width flags, etc.).
- Ensure correct memory management during output formatting.

## Features

- **Support for basic format specifiers**:
  - `%s`: String
  - `%d`: Integer
  - `%i`: Integer (same as `%d`)
  - `%c`: Character
  - `%x`: Hexadecimal (lowercase)
  - `%X`: Hexadecimal (uppercase)
  - `%%`: Prints a literal percent sign
  
- **Uses `stdarg.h`** to handle variable argument lists.
- Outputs formatted data to `stdout` (standard output).
- Returns the number of characters printed (as in the original `printf`).

## Format Specifiers Supported

### 1. **%s** - String:
   Prints the string argument.

   Example:
   ```c
   ft_printf("%s", "Hello, World!");
Hello, World!
