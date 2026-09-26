#include <iostream> // preprocessor directive

#include "../include/greeting.hpp"
#include "command_line_receipt_tracker.hpp"

std::string global_message = "This is a global message";

int main() {
    // namespace
    std::cout << "Hello World!" << std::endl;

    // greeting
    const std::string name = "Joseph";
    Greeting::greeting(name);
    // calculate item price

    int quantity = 10;
    float unit_price = 20.1f;
    double calculate_price_total = CommandLineReceiptTracker::calculatePriceTotal(quantity, unit_price);
    std::cout << "Total price: " << calculate_price_total << std::endl;
    // print global message
    std::cout << "Global message: " << global_message << std::endl;
    return 0;

}
