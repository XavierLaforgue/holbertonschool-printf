
# collaborative project _printf


## General information
Our project involves creating a _printf function similar to the printf function known in C. It can be used to display characters as well as specific characters as standard output.  
## Description
printf is a function in the standard C library which formats text and writes it to the standard 
output
## flowchart

![flowchart](https://github.com/XavierLaforgue/holbertonschool-printf/blob/dev/flowchart_printf.jpg)



## Used function
- main.h : File containing standard library inclusions as well as all the function prototypes used in the function (_printf) and the format_specifiers structure.

- get_print.c : This variadic function specifies all special characters and returns pointer to appropriate printing function 

- my_printf_w_struct.c : This function displays a string of characters on the standard output, while managing format specifiers such as (%d, %s). in order to dynamically format the output.

- print_char_struct.c : This structure gives arg_list a character entered as an argument 

- print_int_struct.c : This structure converts an integer into a character and sends it to the standard output

- print_nothing.c : cette fonction sert si rien ne print 

- print_percent.c : cette fonction sert à géré le caractere spécial % 

- print_string_struct.c : This structure, is designed to store a character string passed as an argument in a variadic parameter list va_list. returns the number of bytes written to the standard output. 

- print_string.c : This function is designed to display a string of characters on the standard output and return the number of bytes, here we use str_len to calculate the length of the string, running through each character up to the zero byte. 
## Usage/Examples

```
(in C)

int age = 30;
_printf("J'ai %d ans.\n", age);
```


## Author(s) and contact details
 Xavier Laforgue, Esteban Levy, Vivien Bernardot

## 🔗 Links
[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://katherineoelsner.com/)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/)
[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://twitter.com/)

