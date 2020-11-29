// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on November 2020
// This program finds the average of a list

#include <iostream>
#include <list>
#include <numeric>
#include <cmath>


float list_average(std::list<int> marks) {
    // This function finds the average of a list

    double sum = std::accumulate(std::begin(marks), std::end(marks), 0.0);

    float average = sum / marks.size();

    average = round(average);

    return average;
}


int main() {
    // This function receives input

    std::list<int> marks;
    int temp_mark;

    // Input

    std::cout << "Please enter 1 mark at a time. Enter -1 to end.";
    std::cout << std::endl;
    std::cout << "" << std::endl;

    std::cout << "What is your mark?: ";
    std::cin >> temp_mark;
    marks.push_back(temp_mark);

    while (temp_mark != -1) {
        std::cout << "What is your mark?: ";
        std::cin >> temp_mark;
        marks.push_back(temp_mark);
    }

    marks.pop_back();  // Remove the -1 that was added
    std::cout << "" << std::endl;

    // Call Functions
    int average = list_average(marks);

    std::cout << "The average is " << average << std::endl;
}
