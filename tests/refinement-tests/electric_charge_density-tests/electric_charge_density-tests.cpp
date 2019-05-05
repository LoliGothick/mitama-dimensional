#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <dimensional/si_units/all.hpp>
#include <dimensional/derived_units/electric_charge_density.hpp>
#include <dimensional/refinement.hpp>
#include <test_util.hpp>

using namespace mitama;
using namespace mitama::si;

TEST_CASE("electric_charge_density refinement test", "[quantity][refinement]") {
  REQUIRE((mitama::exact<si::electric_charge_density_r> |= quantity_t<si::electric_charge_density_t>{}) == quantity_t<si::electric_charge_density_t>{});
}

