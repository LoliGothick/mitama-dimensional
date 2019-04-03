#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_LUMINOUS_EXPOSURE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_LUMINOUS_EXPOSURE_HPP
#include "../si_units/all.hpp"
#include "../quantity.hpp"
#include "../io.hpp"
#include "solid_angle.hpp"

namespace mitama::si {
using luminous_exposure_t = decltype(meter<-2>*seconds*candelas*steradian);

inline constexpr luminous_exposure_t luminous_exposure{};
}

namespace mitama {
template <> struct abbreviation<si::luminous_exposure_t> { static constexpr char str[] = "lx·s"; };
}
#endif