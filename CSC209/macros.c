



/*

syntax:
#define MACRO_NAME value

can also define params (similar to functions):
#define MACRO_NAME(parameter) (parameter expression)

// Note: no space before macro name and opening parentheses
// Note: params and definitions must be in parentheses to ensure proper operator precedence


*/

//eg:
#define REVOLVER 6 // Now we can use revolver as a value in our code


//eg:
#define WITH_TAX(x) ((x) * 1.08) // this macro param returns with-tax value
//                     ^ must place x in parentheses to ensure it's evaluated first

//now we can use like this

double purchase = 6.0;
printf("%f", WITH_TAX(purchase));


