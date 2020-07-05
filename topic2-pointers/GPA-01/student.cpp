struct rational {
   int numerator;
   int denominator;
};



/*Question: Reduce the number 'inputrational' to its lowest form and store it in 'outputrational'
struct rational *inputrational  : Actual rational number to be reduced
struct rational *outputrational : Variable to store the rational number in its lowest form */
void reduce(struct rational *inputrational, struct rational *outputrational) {
    int num = inputrational->numerator;
    int den = inputrational->denominator;
    
    int divider = 0;
        
    do {
        divider = (num%2 == 0 && den%2 == 0) ? 2 : (num%3 == 0 && den%3 == 0) ? 3 : (num%5 == 0 && den%5 == 0) ? 5 : (num%7 == 0 && den%7 == 0) ? 7 : 0;
        if(divider == 0 )
            break;
        else {
            num = num/divider;
            den = den/divider;
        }
        
    } while(true);
    
    outputrational->numerator = num;
    outputrational->denominator = den;

}

/* Question: Check whether both the rational numbers obtained in the lowest form are equal or not. 
             Retrun true or false accordingly
*/
bool isEqual(struct rational num1, struct rational num2) {
    
    reduce(&num1,&num1);
    reduce(&num2,&num2);
    
    return (num1.numerator == num2.numerator && num1.denominator == num2.denominator);
}
