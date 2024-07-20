#ifndef SPOTIFY_API_H
#define SPOTIFY_API_H

#include <string>

class SpotifyApi {
public:
    std::string searchSong(const std::string& query, const std::string& token);
    std::string fetchAlbumDetails(const std::string& albumId, const std::string& token);
};

#endif // SPOTIFY_API_H
