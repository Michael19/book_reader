#ifndef _BOOK_MANAGER_H_
#define _BOOK_MANAGER_H_

#include "page.h"

namespace book_rd{
    class BookManager{
    public:
        BookManager();

            Page get_page(int idx)const;

    private:

    };
}

#endif
