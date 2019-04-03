#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_RADIANT_EXPOSURE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_RADIANT_EXPOSURE_HPP
#include "../si_units/all.hpp"
#include "../quantity.hpp"
#include "../io.hpp"
#include "energy.hpp"

namespace mitama::si {
using radiant_exposure_t = decltype(joule / meter<2>);

inline constexpr radiant_exposure_t radiant_exposure{};
}

namespace mitama {
template <> struct abbreviation<si::radiant_exposure_t> { static constexpr char str[] = "J/m^2"; };
}
#endif