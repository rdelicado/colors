# Ansii Color Codes Uitlity

![Ejemplo de salida](images/example.png)

This C program provides you with a quick guide to the ANSI colour codes that you can use on the terminal. It does not print text on the screen, but displays the numbers corresponding to the ANSI colour codes along with their visual representation on the terminal.

## USE

The program displays a table of ANSI colour codes and their visual representation. This allows you to easily remember which colour code number to use when you are writing programs that require text output with custom colours.

## COMPILATiON

make

# Adding Alias to .zshrc for Color Codes Helper

To execute the Color Codes Helper program from any directory in your terminal, you can add an alias to your `.zshrc` file. Below are the steps to add the alias "co" to your `.zshrc` file, assuming you have placed the `color` program in the `/opt` directory:

1. Open your terminal and run the following command to open the `.zshrc` file in your preferred text editor:

   ```bash
   nano ~/.zshrc
In the .zshrc file, scroll to the end of the file using the arrow keys or mouse.
Add the following line at the end of the file to create an alias named "co" that points to the color executable located in the /opt directory:


alias co='/opt/color'
Make sure to replace /opt/color with the correct path to your executable.
Save the changes to the .zshrc file and close it.
To apply the changes, run the following command in your terminal:

source ~/.zshrc
Once done, you can execute your program from any directory by simply typing co in your terminal.


Feel free to copy and paste this explanation into your README on GitHub! Let me know i