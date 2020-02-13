#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_EXPOSURE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_EXPOSURE_HPP
#include <dimensional/systems/si/all.hpp>
#include <dimensional/quantity.hpp>
#include <dimensional/io.hpp>

#include "electric_charge.hpp"

namespace mitama::systems::si {
template<class> struct exposure_synonym{};
using exposure_t = make_synonym_t<exposure_synonym, decltype(coulomb / kilogram<>)>;

inline constexpr exposure_t exposure{};

}

namespace mitama {
template <> struct  abbreviation_<systems::si::exposure_t> { static constexpr char str[] = "C/kg"; };
}
#endif
