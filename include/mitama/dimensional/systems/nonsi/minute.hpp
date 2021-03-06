#ifndef MITAMA_DIMENSIONAL_NONSI_UNITS_MUNUTE_HPP
#define MITAMA_DIMENSIONAL_NONSI_UNITS_MUNUTE_HPP
#include <mitama/dimensional/systems/si/base_units/second.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>

namespace mitama::systems::nonsi {
using minute_t = scaled_unit_t<systems::si::second_t, std::ratio<60>>;
inline constexpr minute_t minutes{};
}

namespace mitama {
template <> struct  abbreviation_<systems::nonsi::minute_t> { static constexpr char str[] = "m"; };
}

#endif