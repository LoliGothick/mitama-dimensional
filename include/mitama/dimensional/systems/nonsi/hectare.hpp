#ifndef MITAMA_DIMENSIONAL_NONSI_UNITS_HECTARE_HPP
#define MITAMA_DIMENSIONAL_NONSI_UNITS_HECTARE_HPP
#include <mitama/dimensional/systems/si/base_units/meter.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>

namespace mitama::systems::nonsi {
using hectare_t = powered_t<scaled_unit_t<systems::si::meter_t, std::hecto>, 2>;
inline constexpr hectare_t hectare{};

}

namespace mitama {
template <> struct  abbreviation_<systems::nonsi::hectare_t> { static constexpr char str[] = "ha"; };
}

#endif