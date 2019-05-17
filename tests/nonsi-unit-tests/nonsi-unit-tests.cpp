// main is provided in tests-main.cpp
#include <catch2/catch.hpp>
#include <dimensional/quantity.hpp>
#include <dimensional/systems/si/all.hpp>
#include <dimensional/systems/nonsi/degree_angle.hpp>
#include <dimensional/systems/si/prefix.hpp>
#include <random>
#include <test_util.hpp>
#include <dimensional/expr.hpp>
#include <dimensional/arithmetic.hpp>

using namespace mitama;
namespace si = mitama::systems::si;
namespace nsi = mitama::systems::nonsi;
TEST_CASE("degree angle and radian",
          "[quantity][systems/nonsi][degree_angle]")
{
    using namespace Catch::literals;
    quantity<nsi::degree_angle> s1 = 90;
    quantity<si::angle> c = s1;
    REQUIRE(c.value() == 1.570796_a);
    quantity<nsi::degree_angle> s2 = c;
    REQUIRE(s2.value() == 90._a);
}

TEST_CASE("degree amgle and radian generate tests",
          "[quantity][systems/nonsi][degree_angle]")
{
    using namespace Catch::literals;

    REQUIRE(
        test_util::RandomGenerator<double>::uniform( -360, 360 )
            .take(1000)
            .required([](auto value){
                quantity<nsi::degree_angle> c = value;
                quantity<si::angle> s = c;
                return c.value() / s.value() == 57.295779_a;
            }));
    REQUIRE(
        test_util::RandomGenerator<double>::uniform( -6.283185, 6.283185)
            .take(1)
            .required([](auto value){
                quantity<si::angle> s = value;
                quantity<nsi::degree_angle> c = s;
                return c.value() / s.value() == 57.295779_a;
            }));
}