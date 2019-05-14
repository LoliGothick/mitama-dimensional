#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <dimensional/systems/si/all.hpp>
#include <dimensional/systems/si/derived_units/magnetic_flux_density.hpp>
#include <dimensional/refinement.hpp>
#include <test_util.hpp>

using namespace mitama;
using namespace mitama::systems::si;

TEST_CASE("magnetic_flux_density refinement test", "[quantity][refinement]") {
  REQUIRE((mitama::accepts<systems::si::magnetic_flux_density_r> |= quantity_t<systems::si::magnetic_flux_density_t>{}) == quantity_t<systems::si::magnetic_flux_density_t>{});
}

