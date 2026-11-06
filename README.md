*This activity has been created as part of the 42 curriculum by mabbar.*

# Libft

## Description

Libft is a static C library (`libft.a`) that re-implements a set of standard
libc functions and adds general-purpose helpers for strings, memory, output on
file descriptors and singly linked lists. It is meant to be reused in the
following projects of the 42 curriculum.

## Instructions

```sh
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + all
```

Use it in a project:

```sh
cc -Wall -Wextra -Werror main.c -I path/to/libft -L path/to/libft -lft
```

## Library content

### Part 1 - Libc functions

| Function | Description |
| --- | --- |
| `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Character classification, return `1` or `0` |
| `ft_toupper`, `ft_tolower` | Character case conversion |
| `ft_strlen` | Length of a string |
| `ft_memset`, `ft_bzero` | Fill a memory area |
| `ft_memcpy`, `ft_memmove` | Copy a memory area (`memmove` handles overlap) |
| `ft_memchr`, `ft_memcmp` | Search / compare a memory area |
| `ft_strlcpy`, `ft_strlcat` | Size-bounded string copy / concatenation (BSD) |
| `ft_strchr`, `ft_strrchr` | First / last occurrence of a character |
| `ft_strncmp` | Compare at most `n` characters |
| `ft_strnstr` | Locate a substring in the first `len` characters |
| `ft_atoi` | Convert a string to an `int` |
| `ft_calloc` | Allocate zeroed memory (returns a freeable pointer when a size is 0) |
| `ft_strdup` | Duplicate a string |

### Part 2 - Additional functions

| Function | Description |
| --- | --- |
| `ft_substr` | Allocated substring of `s` starting at `start` |
| `ft_strjoin` | Allocated concatenation of two strings |
| `ft_strtrim` | Allocated copy without the `set` characters at both ends |
| `ft_split` | NULL-terminated array of words split on a delimiter |
| `ft_itoa` | Allocated string representing an `int` |
| `ft_strmapi` | New string built by applying `f(index, char)` |
| `ft_striteri` | Apply `f(index, &char)` to each character in place |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write to a file descriptor |

### Part 3 - Linked list

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```

| Function | Description |
| --- | --- |
| `ft_lstnew` | Allocate a new node |
| `ft_lstadd_front`, `ft_lstadd_back` | Add a node at the start / end of a list |
| `ft_lstsize` | Number of nodes (returns `unsigned int`) |
| `ft_lstlast` | Last node of a list |
| `ft_lstdelone` | Free one node and its content |
| `ft_lstclear` | Free a whole list and set the pointer to `NULL` |
| `ft_lstiter` | Apply `f` to every node content |
| `ft_lstmap` | New list built by applying `f` to every content |

## Resources

- `man 3` pages of the reimplemented functions (`man 3 strlcpy`, `man 3 memmove`, ...)
- The 42 Norm (norminette) documentation
- [GNU Make manual](https://www.gnu.org/software/make/manual/)

### AI usage

An AI assistant (Claude) was used to restructure the code layout of the
functions, update the library to the latest subject (`ft_lstsize` returning
`unsigned int`, linked list moved to the mandatory part) and write a test
program comparing the functions to the libc. Every function was then reviewed
and tested manually.
