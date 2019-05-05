#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <dimensional/si_units/all.hpp>
#include <dimensional/derived_units/pressure.hpp>
#include <dimensional/refinement.hpp>
#include <test_util.hpp>

using namespace mitama;
using namespace mitama::si;

TEST_CASE("pressure refinement test", "[quantity][refinement]") {
  REQUIRE((mitama::exact<si::pressure_r> |= quantity_t<si::pressure_t>{}) == quantity_t<si::pressure_t>{});
}

