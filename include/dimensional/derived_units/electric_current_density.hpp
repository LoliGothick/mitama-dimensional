#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_ELECTRIC_CURRENT_DENSITY_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_ELECTRIC_CURRENT_DENSITY_HPP
#include "../si_units/all.hpp"
#include "../quantity.hpp"
#include "../io.hpp"


namespace mitama::si {
using electric_current_density_t = decltype(ampere<> / meter<2>);

inline constexpr electric_current_density_t electric_current_density{};
}

namespace mitama {
template <> struct abbreviation<si::electric_current_density_t> { static constexpr char str[] = "A/m^2"; };
}
#endif