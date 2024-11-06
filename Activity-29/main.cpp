//
//  main.cpp
//  Activity-29
//
//  Created by Juwon Hong on 11/6/24.
//

#include <iostream>
#include "Movie.h"

int main() {
    std::string movieString = "24 season 2,2014";
    Movie myMovie = parseMovieString(movieString);

    std::cout << "Title: " << myMovie.Title << "\n";
    std::cout << "Season: " << myMovie.Season << "\n";
    std::cout << "Year: " << myMovie.Year << "\n";

    return 0;
}
