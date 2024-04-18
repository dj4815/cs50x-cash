#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
int add_coins(int a, int b, int c, int d);

int main(void)
{
    // Prompt user for change owed in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate how many quarters fit in the input (function below)
    int quarters = calculate_quarters(cents);

    // Subtract the total value of quarters from user input
    cents -= quarters * 25;

    // Calculate how many dimes fit into the updated input (function below)
    int dimes = calculate_dimes(cents);

    // Subtract the total value of dimes from user input
    cents -= dimes * 10;

    // Calculate how many nickels fit into the updated input (function below)
    int nickels = calculate_nickels(cents);

    // Subtract the total value of nickels from updated input
    cents -= nickels * 5;

    // Calculate how many pennies fit into the updated input (function below)
    int pennies = calculate_pennies(cents);

    // Subtract the total value of nickels from updated input
    cents -= pennies * 1;

    // Print the minimum number of coins needed
    int result = add_coins(quarters, dimes, nickels, pennies);
    printf("%d\n", result);
}

// Calculate how many quarters fit in the input
int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents -= 25;
    }
    return quarters;
}

// Calculate how many dimes fit in the input
int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents -= 10;
    }
    return dimes;
}

// Calculate how many nickels fit in the input
int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents -= 5;
    }
    return nickels;
}

// Calculate how many pennies fit in the input
int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents -= 1;
    }
    return pennies;
}

// Add the coins needed
int add_coins(int a, int b, int c, int d)
{
    return a + b + c + d;
}
