#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/systems/si/derived_units/illuminance.hpp>
#include <mitama/dimensional/refinement.hpp>
#include <test_util.hpp>

using namespace mitama;
using namespace mitama::systems::si;

TEST_CASE("illuminance refinement test", "[quantity][refinement]") {
  REQUIRE((mitama::accepts<systems::si::illuminance_r> |= quantity_t<systems::si::illuminance_t>{}) == quantity_t<systems::si::illuminance_t>{});
}

