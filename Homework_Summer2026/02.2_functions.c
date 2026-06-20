// Your code for problem 3 goes here.
double fahrenheitToKelvin(double fahrenheit);

double fahrenheitToKelvin(double fahrenheit) {
    double K = ((fahrenheit - 32) * 5) / 9 + 273.15;
    return K; 
}