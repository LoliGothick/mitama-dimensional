#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <dimensional/si_units/all.hpp>
#include <dimensional/derived_units/mass_flow_rate.hpp>
#include <dimensional/refinement.hpp>
#include <test_util.hpp>

using namespace mitama;
using namespace mitama::si;

TEST_CASE("mass_flow_rate refinement test", "[quantity][refinement]") {
  REQUIRE((mitama::exact<si::mass_flow_rate_r> |= quantity_t<si::mass_flow_rate_t>{}) == quantity_t<si::mass_flow_rate_t>{});
}

