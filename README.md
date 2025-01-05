<div align="center">
	<img src="https://drive.google.com/uc?id=1iV9VEnXtBzfersmoFqvyXjs_U_RsDn9E" alt="FT_PRINTF_LOGO" width="150px">
</div>

## Table of Contents

1. [About the Project](#about-the-project)
2. [Built-With](#built-with)
3. [Features](#features)
4. [Installation](#installation)

## About The Project
The ft_printf project is part of the 42 cirriculum, designed to help students deepen their understand of variadic functions, memory handling, and formatted output in C.

The goal is to recreate the behavior of the standard printf function for some of the specifiers.

## Built-With
<img src="https://skillicons.dev/icons?i=c">

## Features

<table>
	<thead>
		<tr>
			<th>Specifier</th>
			<th>Description</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>%c</td>
			<td>Print a single character</td>
		</tr>
		<tr>
			<td>%s</td>
			<td>Print a string of character</td>
		</tr>
		<tr>
			<td>%p</td>
			<td>The void * pointer argument is printed in hexadecimal</td>
		</tr>
		<tr>
			<td>%d</td>
			<td>Print a decimal (base 10) number</td>
		</tr>
		<tr>
			<td>%i</td>
			<td>Print a integer in base 10</td>
		</tr>
		<tr>
			<td>%u</td>
			<td>Print a unsigned decimal (base 10) number.</td>
		</tr>
		<tr>
			<td>%x</td>
			<td>Print a number in hexadecimal (base 16), with lowercase</td>
		</tr>
		<tr>
			<td>%X</td>
			<td>Print a number in hexadecimal (base 16), with uppercase</td>
		</tr>
		<tr>
			<td>%%</td>
			<td>Print a percentage sign</td>
		</tr>
	</tbody>
</table>

## Installation

1. Clone the repository
````bash
git clone https://github.com/LimZhixiang/ft_printf.git
````
2. Compilation of the project
````bash
make
````
3. Using it in your code
- To use the project in your code, simply include this header:
````bash
#include "ft_printf.h"
````
4. Cleaning of binary(.o) and executable files (.a)
````bash
make fclean
````