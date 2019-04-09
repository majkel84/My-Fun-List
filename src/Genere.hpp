#pragma once
#include <map>
#include <memory>

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
    western,
    unknown
};

inline const char* convMap (Genere cts)
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
        { Genere::western, "Western" },
        { Genere::unknown, "Unknown"}
    };
    auto it  = GenereToString.find(cts);
    return it == GenereToString.end() ? "Out of range" : it->second;
}

inline Genere convBackMap (const char* cts)
{
    const std::map<const char*, Genere> StringToGenere {
        { "Action", Genere::action },
        { "Anime", Genere::anime},
        { "Bigraphical", Genere::biographical },
        { "Detective", Genere::detective },
        { "Documentary", Genere::documentary },
        { "Drama", Genere::drama },
        { "Family", Genere::family },
        { "Fantasy", Genere::fantasy },
        { "Historical", Genere::historical },
        { "Horror", Genere::horror },
        { "Musical", Genere::musical },
        { "Romantic", Genere::romantic },
        { "S-F", Genere::sf },
        { "Thriller", Genere::thriller },
        { "War", Genere::war },
        { "Western", Genere::western },
        { "Unknown", Genere::unknown}
    };
    auto it  = StringToGenere.find(cts);
    return it == StringToGenere.end() ? Genere::unknown : it->second;
}
