//
//  movie.cpp
//  Activity-29
//
//  Created by Juwon Hong on 11/6/24.
//

#include "movie.h"
#include <sstream>

// Movie constructor
Movie::Movie(const std::string& title, int season, int year) : Title(title), Season(season), Year(year) {}

// Function to parse a movie string
Movie parseMovieString(const std::string& movieString) {
    std::stringstream ss(movieString);
    std::string titlePart, seasonPart, yearPart;

    // Extract title part before "season"
    std::getline(ss, titlePart, 's');

    // Skip the space and the word "season"
    ss.ignore(6);

    // Extract season number and comma
    int season;
    ss >> season;
    ss.ignore(1); 

    // Extract year
    int year;
    ss >> year;

    // Trim titlePart and construct Movie
    titlePart.erase(titlePart.find_last_not_of(" ") + 1); // remove trailing spaces
    return Movie(titlePart, season, year);
}
