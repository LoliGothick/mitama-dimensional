#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/systems/si/derived_units/luminous_energy.hpp>
#include <mitama/dimensional/refinement.hpp>
#include <test_util.hpp>

using namespace mitama;
using namespace mitama::systems::si;

TEST_CASE("luminous_energy refinement test", "[quantity][refinement]") {
  REQUIRE((mitama::accepts<systems::si::luminous_energy_r> |= quantity_t<systems::si::luminous_energy_t>{}) == quantity_t<systems::si::luminous_energy_t>{});
}

