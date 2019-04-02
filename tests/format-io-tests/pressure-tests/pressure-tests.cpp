#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <dimensional/derived_units/pressure.hpp>
#include "../format_io_common.hpp"

TEST_CASE("pressure_t format test", "[quantity][abbreviation]") {
  REQUIRE(fmt(1 | si::pressure_t{}) == "1 [Pa]");
}
TEST_CASE("pascal format test", "[quantity][abbreviation]") {
  REQUIRE(fmt(1 | si::pascal) == "1 [Pa]");
}
