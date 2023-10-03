<h1 align="center">
	Libft
</h1>

<p align="center">
	<b><i>YOUR VERY FIRST OWN LIBRARY</i></b><br>
</p>

---

## About the project

> _This project is about coding a C library._
> _It will contain a lot of general purpose functions your programs will rely upon._

## List of functions:

### Functions from `<ctype.h>` library
|`<ctype.h>`||
| :------------------------: | :------------------------- |
|[`ft_isascii`](ft_isascii.c)|test for ASCII character.   |
|[`ft_isalnum`](ft_isalnum.c)|alphanumeric character test.|
|[`ft_isalpha`](ft_isalpha.c)|alphabetic character test.  |
|[`ft_isdigit`](ft_isdigit.c)|decimal-digit character test.|
|[`ft_isprint`](ft_isprint.c)|printing character test (space character inclusive).|
|[`ft_tolower`](ft_tolower.c)|upper case to lower case letter conversion.|
|[`ft_toupper`](ft_toupper.c)|lower case to upper case letter conversion.|

### Functions from `<stdlib.h>` library

|`<stdlib.h>`||
| :------------------------: | :------------------------- |
|[`ft_itoa`](ft_itoa.c)|convert integer to ASCII string.|
|[`ft_calloc`](ft_calloc.c)|memory allocation.|

### Functions from `<strings.h>` library

|`<strings.h>`||
| :------------------------: | :------------------------- |
|[`ft_bzero`](ft_bzero.c)|write zeroes to a byte string.|
|[`ft_memchr`](ft_memchr.c)|locate byte in byte string.|
|[`ft_memcmp`](ft_memcmp.c)|compare byte string.|
|[`ft_memcpy`](ft_memcpy.c)|copy memory area.|
|[`ft_memmove`](ft_memmove.c)|copy byte string.|
|[`ft_memset`](ft_memset.c)|write a byte to a byte string.|

### Functions from `<string.h>` library

|`<string.h>`||
| :------------------------: | :------------------------- |
|[`ft_strchr`](ft_strchr.c)|locate character in string.|
|[`ft_strlcat`](ft_strlcat.c)|size-bounded string concatenation.|
|[`ft_strlcpy`](ft_strlcpy.c)|size-bounded string copying.|
|[`ft_strlen`](ft_strlen.c)|find length of string.|
|[`ft_strncmp`](ft_strncmp.c)|compare strings (size-bounded).|
|[`ft_strnstr`](ft_strnstr.c)|locate a substring in a string (size-bounded).|
|[`ft_strrchr`](ft_strrchr.c)|locate character in string (last occurence).|
|[`ft_strdup`](ft_strdup.c)|save a copy of a string (with malloc).|

### Non-standard functions

|Function||
| :------------------------: | :------------------------- |
|[`ft_itoa`](ft_itoa.c)|convert integer to ASCII string.|
|[`ft_substr`](ft_substr.c)|extract substring from string.|
|[`ft_strtrim`](ft_strtrim.c)|trim beginning and end of string with the specified characters.|
|[`ft_strjoin`](ft_strjoin.c)|concatenate two strings into a new string (with malloc).|
|[`ft_split`](ft_split.c)|split string, with specified character as delimiter, into an array of strings.|
|[`ft_strmapi`](ft_strmapi.c)|create new string from modifying string with specified function.|
|[`ft_striteri`](ft_striteri.c)|Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument.|
|[`ft_putchar_fd`](ft_putchar_fd.c)|output a character to given file.|
|[`ft_putstr_fd`](ft_putstr_fd.c)|output string to given file.|
|[`ft_putendl_fd`](ft_putendl_fd.c)|output string to given file with newline.|
|[`ft_putnbr_fd`](ft_putnbr_fd.c)|output integer to given file.|

### Linked list functions (bonus)

|Function||
| :------------------------: | :------------------------- |
|[`ft_lstnew`](ft_lstnew_bonus.c)|create new list.|
|[`ft_lstsize`](ft_lstsize_bonus.c)|count elements of a list.|
|[`ft_lstlast`](ft_lstlast_bonus.c)|find last element of list.|
|[`ft_lstadd_back`](ft_lstadd_back_bonus.c)|add new element at end of list.|
|[`ft_lstadd_front`](ft_lstadd_front_bonus.c)|add new element at beginning of list.|
|[`ft_lstdelone`](ft_lstdelone_bonus.c)|delete element from list.|
|[`ft_lstclear`](ft_lstclear_bonus.c)|delete sequence of elements of list from a starting point.|
|[`ft_lstiter`](ft_lstiter_bonus.c)|apply function to content of all list's elements.|
|[`ft_lstmap`](ft_lstmap_bonus.c)|apply function to content of all list's elements into new list.|

## Usage

### Requirements

The library is written in C language and needs the **`cc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, go to its path and run:

For all mandatory functions:

```shell
$ make
```

For bonus functions:

```shell
$ make bonus
```

**2. Cleaning all binary (.o) and executable files (.a)**

To clean all files generated while doing a make, go to the path and run:

```shell
$ make fclean
```

**3. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```
