#include <iostream>
#include <string>

enum class Genere {action, adventure, anime, biographical, detective, documentary, drama, family, fantasy, historical, horror, musical, romantic, sf, thriller, war, western};

class Item
{
    public:
        Item(const std::string & title,
            const unsigned short & year,
            const Genere & genere);
virtual ~Item() {};

        unsigned short getYear() const;
        std::string getTitle() const;
        virtual std::string getInfo() const;

    protected:
        std::string title_;
        unsigned short year_;
        Genere genere_;
};
