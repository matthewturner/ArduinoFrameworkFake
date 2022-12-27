#pragma once

class Stream
{
    virtual int read() = 0;
    virtual int available() = 0;
};
