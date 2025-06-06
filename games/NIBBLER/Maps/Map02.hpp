///////////////////////////////////////////////////////////////////////////////
// Header guard
///////////////////////////////////////////////////////////////////////////////
#pragma once

///////////////////////////////////////////////////////////////////////////////
// Dependencies
///////////////////////////////////////////////////////////////////////////////
#include "../../../Arcade/utils/Vec2.hpp"
#include <vector>
#include "games/NIBBLER/Assets.hpp"

namespace Arc::Nibbler
{

static const std::vector<std::vector<SpriteType>> MAP_02 = {
        { // colums 1
        BORDER_IN_BR, WALL_LEFT, WALL_LEFT, WALL_LEFT, WALL_LEFT, WALL_LEFT,
        WALL_LEFT, WALL_LEFT, WALL_LEFT, WALL_LEFT, WALL_LEFT, WALL_LEFT,
        WALL_LEFT, WALL_LEFT, WALL_LEFT, WALL_LEFT, WALL_LEFT, WALL_LEFT,
        WALL_LEFT, WALL_LEFT, WALL_LEFT, WALL_LEFT, WALL_LEFT, WALL_LEFT,
        WALL_LEFT, WALL_LEFT, BORDER_IN_TR
    },
    { // colums 2
        WALL_TOP, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, WALL_BOT
    },
    { // colums 3
        WALL_TOP, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR,
        BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, WALL_BOT
    },
    { // colums 4
        WALL_TOP, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL,
        BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, WALL_BOT
    },
    { // colums 5
        WALL_TOP, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, WALL_BOT
    },
    { // colums 6
        WALL_TOP, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR,
        BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, WALL_BOT
    },
    { // colums 4
        WALL_TOP, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL,
        BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, WALL_BOT
    },
    { // colums 5
        WALL_TOP, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, WALL_BOT
    },
        { // colums 3
        WALL_TOP, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR,
        BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, WALL_BOT
    },
    { // colums 4
        WALL_TOP, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL,
        BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, WALL_BOT
    },
    { // colums 5
        WALL_TOP, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, WALL_BOT
    },
        { // colums 3
        WALL_TOP, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR,
        BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, WALL_BOT
    },
    { // colums 4
        WALL_TOP, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL,
        BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, WALL_BOT
    },
    { // colums 5
        WALL_TOP, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, WALL_BOT
    },
        { // colums 3
        WALL_TOP, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR,
        BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, WALL_BOT
    },
    { // colums 4
        WALL_TOP, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL,
        BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, WALL_BOT
    },
    { // colums 5
        WALL_TOP, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, WALL_BOT
    },
        { // colums 3
        WALL_TOP, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR,
        BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, WALL_BOT
    },
    { // colums 4
        WALL_TOP, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL,
        BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, WALL_BOT
    },
    { // colums 5
        WALL_TOP, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, WALL_BOT
    },
        { // colums 3
        WALL_TOP, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR,
        BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, WALL_BOT
    },
    { // colums 4
        WALL_TOP, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL,
        BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, WALL_BOT
    },
    { // colums 5
        WALL_TOP, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, WALL_BOT
    },
        { // colums 3
        WALL_TOP, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR,
        BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR, EMPTY,
        BORDER_OUT_BR, BORDER_OUT_TR, EMPTY, BORDER_OUT_BR, BORDER_OUT_TR,
        EMPTY, WALL_BOT
    },
    { // colums 4
        WALL_TOP, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL,
        BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL, EMPTY,
        BORDER_OUT_BL, BORDER_OUT_TL, EMPTY, BORDER_OUT_BL, BORDER_OUT_TL,
        EMPTY, WALL_BOT
    },
    { // colums 5
        WALL_TOP, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
        EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, WALL_BOT
    },
    { // colums 27 = 1
        BORDER_IN_BL, WALL_RIGHT, WALL_RIGHT, WALL_RIGHT, WALL_RIGHT,
        WALL_RIGHT, WALL_RIGHT, WALL_RIGHT, WALL_RIGHT, WALL_RIGHT, WALL_RIGHT,
         WALL_RIGHT, WALL_RIGHT, WALL_RIGHT, WALL_RIGHT, WALL_RIGHT,
        WALL_RIGHT, WALL_RIGHT, WALL_RIGHT, WALL_RIGHT, WALL_RIGHT, WALL_RIGHT,
        WALL_RIGHT, WALL_RIGHT, WALL_RIGHT, WALL_RIGHT, BORDER_IN_TL
    },
};

static const std::vector<Vec2i> MAP_02_FRUIT = {
    {4, 1}, {10, 1}, {16, 1}, {22, 1},
    {1, 4}, {7, 4}, {19, 4}, {25, 4},
    {10, 7}, {16, 7},
    {1, 10}, {6, 10}, {20, 10}, {25, 10},
    {13, 12},
    {6, 13}, {20, 13},
    {4, 16}, {22, 16},
    {13, 19},
    {1, 21}, {7, 21}, {10, 21}, {16, 21}, {19, 21}, {25, 21},
    {1, 23}, {25, 23}
};

} // namespace Arc::Nibbler