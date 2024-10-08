<div align="center">
  <img src="https://github.com/ayogun/42-project-badges/blob/a48e677fd4871e6999a9564101dca26091ec18ef/badges/libfte.png">
  <h1>Libft</h1> 
  <p><strong>My first library which contain useful functions I will use in future 19 projects</strong></br>
  Find out more about my <a href="https://github.com/Tayra46/19-Cursus">19 school</a> experience</p>
  </br>
</div>


<!-- TABLE OF CONTENTS -->
<details open>
  <summary>Table of Contents</summary>
  
  1. [About](#about)\
    1. [Bonus](#bonus)
  1. [Usage](#usage)\
    1. [Requirements](#requirements)\
    2. [Instructions](#instructions)\
    3. [Use](#use)

</details>

<a id="about"></a>
  
## About
C programming can be very tedious when one doesn’t have access to the highly useful
standard functions. This project is about understanding the way these functions work,
implementing and learning to use them.

<details open>
  <summary>Hide</summary>
  
| Function | Description |
|--|--|
| ft_atoi | Convert the `string` passed in arguments to it's `integer` representation
| ft_bezero | Write `n` zero to the `string` passed in argument
| ft_calloc | Allocate `count` blocks of `size` bytes in the memory and fill it with zero
| ft_isalnum | Return `1` if the input is a number or a letter
| ft_isalpha | Return `1` if the input is a letter
| ft_isascii | Return `1` if the input is part of the `ASCII` table
| ft_isdigit | Return `1` if the input is a number
| ft_isprint | Return `1` if the input is printable
| ft_itoa | Convert the `integer` passed in argument to it's `string` representation
| ft_memchr | Locate the first occurrence of the `char` input inside of the `string` input
| ft_memcmp | Compare two `strings`. Return `0` if they are the same, else a non null value
| ft_memcpy | Copy `n` bytes from string `src` to string `dst`
| ft_memmove | Move `len` bytes from string `src` to  string `dst`
| ft_memset | Write `len` bytes of value `c` to the string `b`
| ft_putchar_fd | Print the character `c` to the given file descriptor
| ft_putendl_fd | Print the string `s` followed by newline (`\n`) in the given file descriptor
| ft_putnbr_fd | Print the integer `n` to the given file descriptor
| ft_putstr_fd | Print the string `s` to the given file descriptor
| ft_split | Split the string `s` according to the separator character `c`
| ft_strchr | Look for a specific character inside of the string `s`
| ft_strdup | Duplicate the string `s`
| ft_striteri | Applies the function `f` on each character of the `string` passed as argument
| ft_strjoin | Return the result of the concatenation of the two `string` passed as argument
| ft_strlcat | Append the `size` first bytes of string `src` to the end of the string `dst`
| ft_strlcpy | Copy the `size` first bytes of string `src` to the end of the string `dst`
| ft_strlen | Return the size of the `string` passed as argument
| ft_strmapi | Create new string from modifying string with specified function
| ft_strncmp | Compare the first n bytes of a string
| ft_strnstr | Locate a substring in a string
| ft_strrchr | Locate the last occurence of a `character` in a `string`
| ft_strtrim | Trim beginning and end of string with the specified characters
| ft_substr | Extract substring from string
| ft_tolower | Convert each character of the string to lowercase
| ft_toupper | Convert each character of the string to uppercase

</details>
<a id="bonus"></a>

### Bonus
The bonus par introduce functions that are made to handle lists.
Lists are structures defined this way :

```c
typedef struct s_list
{
  void           *content;
  struct s_list  *next;
}  t_list
```
<details open>
  <summary>Hide</summary>
  
| Function | Description |
|--|--|
| ft_lstadd_back | Add the list node passed as argument to the back of hte list
| ft_lstadd_front | Add the list node passed as argument to the front of hte list
| ft_lstclear | Free the list node passed as argument and his content
| ft_lstdelone | Free the memory of the node’s content using the function `del` given as a parameter and free the node
| ft_lstiter | Iterates the list `lst` and applies the function `f` on the content of each node
| ft_lstlast | Returns the last node of the list
| ft_lstmap | Iterates the list `lst` and applies the function `f` on the content of each node. Return a copy of the list
| ft_lstnew | Create a new list node
| ft_lstsize | Return the lenght of the list

</details>
<a id="usage"></a>

## Usage
<a id="requirements"></a>
### Requirements
The library is written in C language and require `GCC` to compile as well as `Make`
<a id="instructions"></a>
### Instructions
Clone this repository with :
```bash
git clone https://github.com/Tayra46/Libft.git Libft
```
Go into your repositroy clone and make :
```bash
cd Libft
make
#for bonus
make bonus
```
This will generate the libft.a static library
<a id="use"></a>
### Use
To use the libft functions in your project, include the libft.h header file in your source code and link against the libft.a library during compilation.

Example:
```c
#include "libft.h"

int main() {
    ft_putstr_fd("Hello, Libft!\n", 1);
    return 0;
}
```
