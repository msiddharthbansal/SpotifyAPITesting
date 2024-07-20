#include <gtest/gtest.h>
#include "spotify_api.h"

TEST(SpotifyApiTest, SearchSong) {
    SpotifyApi api;
    std::string token = "BQC_cu9bosryqY7YDB98KczBQW1rhm3ezMmpF2vumxIKxcOGBadd2pC3YjaYnRdZ3vcy7vAuxzZ7sbm7WqNNfWqDlbs73lBRndcsHtJ1OnsRO8ik5Tk"; // Replace with a valid token
    std::string response = api.searchSong("Imagine", token);
    
    EXPECT_TRUE(response.find("tracks") != std::string::npos);
    EXPECT_TRUE(response.find("items") != std::string::npos);
}

TEST(SpotifyApiTest, FetchAlbumDetails) {
    SpotifyApi api;
    std::string token = "BQC_cu9bosryqY7YDB98KczBQW1rhm3ezMmpF2vumxIKxcOGBadd2pC3YjaYnRdZ3vcy7vAuxzZ7sbm7WqNNfWqDlbs73lBRndcsHtJ1OnsRO8ik5Tk"; // Replace with a valid token
    std::string response = api.fetchAlbumDetails("2up3OPMp9Tb4dAKM2erWXQ", token);  

    EXPECT_TRUE(response.find("album") != std::string::npos);
    EXPECT_TRUE(response.find("name") != std::string::npos);
}


