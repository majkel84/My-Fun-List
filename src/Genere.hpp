#include <map>

enum class Genere : char {
    action,
    adventure,
    anime,
    biographical,
    detective,
    documentary,
    drama,
    family,
    fantasy,
    historical,
    horror,
    musical,
    romantic,
    sf,
    thriller,
    war,
    western
};

/*template<Genere> const char convMap[] = "Invalid ctegory";
template<> const char convMap<Genere::action>[] = "Action";
template<> const char convMap<Genere::adventure>[] = "Adveture";
template<> const char convMap<Genere::fantasy>[] = "Fantasy";
*/

const char* convMap (Genere cts)
{
    const std::map<Genere,const char*> GenereToString {
        { Genere::action, "Action" },
        { Genere::anime, "Anime" },
        { Genere::biographical, "Bigraphical" },
        { Genere::detective, "Detective" },
        { Genere::documentary, "Documentary" },
        { Genere::drama, "Drama" },
        { Genere::family, "Family" },
        { Genere::fantasy, "Fantasy" },
        { Genere::historical, "Historical" },
        { Genere::horror, "Horror" },
        { Genere::musical, "Musical" },
        { Genere::romantic, "Romantic" },
        { Genere::sf, "S-F" },
        { Genere::thriller, "Thriller" },
        { Genere::war, "War" },
        { Genere::western, "Western" }
    };
    auto   it  = GenereToString.find(cts);
    return it == GenereToString.end() ? "Out of range" : it->second;
}
