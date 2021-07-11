# Helpline-Operator-Project
## Project Members
- Shoray Singhal (LCI2020037) 
- Ayusman Samal (LCS2020024) 
- Udbhav Misra (LCI2020019)
- Aman Garg (LCI2020031)

## Project Report: 
* [Download](https://github.com/Shoray2002/Helpline-Operator-Project/raw/master/Helpline%20Operator%20System%20project%20Report.pdf)
# Password: 
 The password of the system is initially set as "0000" which can be changed and remains that even in different System runs until changed again.

## Running the system (Dependancy: g++ )
* On Winodows (recommended):
  * Navigate to the Project In CMD
  * Type the following Commands: 
    * `g++ caller_info.cpp .\Helpline.cpp .\password.cpp .\sha512.cpp .\show.cpp .\units.cpp -o help`
    * `./help`
* On Linux:
  * Navigate to the Project In Terminal
  * Type the following Commands:
     * `make clean`
     * `make all`
     * `./help`


### References
* [Rudolf](https://gist.github.com/rudolfovich/f250900f1a833e715260a66c87369d15)
* [sha512](http://www.zedwood.com/article/cpp-sha512-function#:~:text=SHA%2D512%20is%20the%20largest,select%20a%20good%20work%20factor)
