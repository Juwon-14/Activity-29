//
//  movie.h
//  Activity-29
//
//  Created by Juwon Hong on 11/6/24.
//

#ifndef MOVIE_H
#define MOVIE_H

#include <string>

struct Movie {
    std::string Title;
    int Season;
    int Year;

    Movie(const std::string& title, int season, int year);
};

Movie parseMovieString(const std::string& movieString);

#endif
