/// @todo
/*
    planned endpoint: deathsounds.omgrod.me
    /getTopPacksList = get top packs (recent included) - GET
    /getTopSFXList = get top sfx (recent included) - GET
    /pack/PackIDHere = get pack info - GET
    /sfx/SFXIDHere = get sfx info - GET
    /uploadSFX = upload sound - POST
    /uploadPack = upload pack - POST
*/

#include <Geode/Geode.hpp>

using namespace geode::prelude;

namespace deathsounds {
    class DSRequest {
    public:
        static DSRequest* get() {
            static DSRequest instance;
            return &instance;
        }

        void getSoundEffects() {
            
        }

    private:
        DSRequest() = default;

        DSRequest(const DSRequest&) = delete;
        DSRequest& operator=(const DSRequest&) = delete;
    };
};