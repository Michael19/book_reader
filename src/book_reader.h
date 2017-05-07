#ifndef _BOOK_READER_H_
#define _BOOK_READER_H_

#include <string>

namespace book_rd{
    class BookReader{
    public:
        BookReader();

        virtual ~BookReader();

        virtual bool open(const std::string& path);
        bool is_open()const;



    protected:
        std::string _path;

    };
}
