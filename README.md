# LIBFT

The project aims to create a library called `libft` in C programming language as a 42 student. This library will contain a collection of custom functions that replicate and extend the functionality of existing standard C library functions. The purpose of this project is to gain a deeper understanding of fundamental programming concepts, improve coding skills in C, and become familiar with common data structures and algorithms.

The `libft` library will consist of various modules covering different aspects of programming, such as memory management, string manipulation, character handling, and linked list operations. Each module will contain a set of functions designed to perform specific tasks efficiently and reliably.

The library will be organized into separate source files, each containing the implementation of one or more related functions. Additionally, header files will be provided to declare function prototypes and any necessary data structures or constants.

## Key features of the `libft` library include

- Comprehensive error handling with the inclusion of `-Wall`, `-Wextra`, and `-Werror` compiler flags to enforce strict adherence to coding standards and detect potential issues at compile-time.

- Modular design to promote code reusability and maintainability, with well-defined interfaces between different components.

- Implementation of linked lists with some useful methods.

## Functions of the library

1. **ft_isalpha:** Checks if a character is an alphabetic character (A-Z or a-z).
2. **ft_isdigit:** Checks if a character is a digit (0-9).
3. **ft_isascii:** Checks if a character is a 7-bit ASCII character.
4. **ft_isprint:** Checks if a character is a printable character (including space).
5. **ft_strlen:** Computes the length of a string.
6. **ft_memset:** Fills a block of memory with a specified value.
7. **ft_bzero:** Sets the first n bytes of a block of memory to zero.
8. **ft_memcpy:** Copies a block of memory from one location to another.
9. **ft_memmove:** Copies a block of memory, handling overlapping memory regions.
10. **ft_strlcpy:** Copies a string to a destination buffer with size restriction.
11. **ft_strlcat:** Concatenates a string to a destination buffer with size restriction.
12. **ft_toupper:** Converts a lowercase letter to uppercase.
13. **ft_tolower:** Converts an uppercase letter to lowercase.
14. **ft_strchr:** Locates the first occurrence of a character in a string.
15. **ft_strrchr:** Locates the last occurrence of a character in a string.
16. **ft_strncmp:** Compares two strings up to a specified number of characters.
17. **ft_memchr:** Locates the first occurrence of a byte in a block of memory.
18. **ft_memcmp:** Compares two blocks of memory.
19. **ft_strnstr:** Locates a substring within a string, with a length limit.
20. **ft_atoi:** Converts a string to an integer.
21. **ft_calloc:** Allocates memory for an array and initializes it with zero.
22. **ft_strdup:** Duplicates a string.
23. **ft_substr:** Extracts a substring from a string.
24. **ft_strjoin:** Concatenates two strings.
25. **ft_strtrim:** Trims leading and trailing whitespace characters from a string.
26. **ft_split:** Splits a string into an array of substrings based on a delimiter.
27. **ft_itoa:** Converts an integer to a string.
28. **ft_strmapi:** Applies a function to each character of a string, with its index as an argument.
29. **ft_striteri:** Applies a function to each character of a string, with its index as an argument.
30. **ft_putchar_fd:** Writes a character to a file descriptor.
31. **ft_putstr_fd:** Writes a string to a file descriptor.
32. **ft_putendl_fd:** Writes a string followed by a newline to a file descriptor.

## Implementation of liked lists

The linked list implementation is based on the following structure:

```C
typedef struct s_list
{
    void    *content;
    struct s_list   *next;
}   t_list;
```

Each node in the linked list consists of a `content` field, which holds the data, and a next pointer, which points to the `next` node in the list.

### Methods of the linked lists implementation

The following functions are provided to manipulate linked lists:

- **ft_lstnew:** Creates a new node with the specified content.
- **ft_lstadd_front:** Adds a new node at the beginning of the list.
- **ft_lstadd_back:** Adds a new node at the end of the list.
- **ft_lstsize:** Counts the number of elements in the list.
- **ft_lstclear:** Deletes and frees all the nodes in the list.
- **ft_lstdelone:** Deletes a single node from the list.
- **ft_lstiter:** Applies a function to each element of the list.
- **ft_lstmap:** Applies a function to each element of the list and creates a new list with the results.

## Summary

The library provides a wide range of functions, including those for checking character properties, manipulating strings, memory operations, type conversion, and more. Additionally, it offers a versatile linked list implementation with methods for creating, adding, deleting, iterating, and mapping elements.
