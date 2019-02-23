#include <vector>
#include "Movie.hpp"

class Anime : public Movie
{
public:
    Anime(const std::string & title,
          const unsigned int & year,
          const Genere & genere,
          const std::string & director,
          const std::string & mainCharacter,
          const std::string & studio,
          const std::vector<int> & noEpisodes);

    std::string getStudio() const;
    std::vector<int> getNoEpisodes() const;
    std::string getInfo() const;

private:
    std::string studio_;
    std::vector<int> noEpisodes_;
};
