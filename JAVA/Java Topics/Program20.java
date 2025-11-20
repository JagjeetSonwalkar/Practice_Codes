////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                   Checked exceptions and Unchecked exceptions
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Checked exceptions: 
These are exceptions that are checked at compile-time. 
The compiler requires you to either handle the exception using a try-catch block or declare the exception in the method signature using the throws keyword.

Unchecked exceptions: 
These are exceptions that are checked at runtime. 
These are subclasses of RuntimeException. 
The compiler does not require you to handle or declare these exceptions explicitly.


Checked Exceptions:

Must be declared in the method signature using throws.
Must be handled explicitly using try-catch or throws.
Examples: IOException, SQLException, ClassNotFoundException.

Unchecked Exceptions:

Are not required to be declared or handled.
Include runtime exceptions like NullPointerException, ArrayIndexOutOfBoundsException, and ArithmeticException.
These exceptions usually arise due to programming bugs, such as division by zero or accessing an array out of bounds.

Common examples of unchecked exceptions include:

NullPointerException
ArrayIndexOutOfBoundsException
ArithmeticException
IllegalArgumentException

*/

