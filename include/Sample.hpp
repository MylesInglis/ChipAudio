//
// Created by Myles Inglis on 10/12/2015.
//

#ifndef CHIPAUDIO_SAMPLE_HPP
#define CHIPAUDIO_SAMPLE_HPP

/**
 * Struct containing stereo sample data.
 */
struct Sample
{
    double left;
    double right;

    Sample(double _left = 0, double _right = 0) :
            left(_left), right(_right) { }

    Sample& operator+=(Sample rhs)
    {
        left += rhs.left;
        right += rhs.right;
        return *this;
    }

    Sample operator*(double rhs)
    {
        Sample result;
        result.left = left * rhs;
        result.right = right * rhs;
        return result;
    }
};

#endif //CHIPAUDIO_SAMPLE_HPP
