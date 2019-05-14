#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <dimensional/si_units/all.hpp>
#include <dimensional/derived_units/heat_flux_density.hpp>
#include <dimensional/refinement.hpp>
#include <test_util.hpp>

using namespace mitama;
using namespace mitama::si;

TEST_CASE("heat_flux_density refinement test", "[quantity][refinement]") {
  REQUIRE((mitama::accepts<si::heat_flux_density_r> |= quantity_t<si::heat_flux_density_t>{}) == quantity_t<si::heat_flux_density_t>{});
}
