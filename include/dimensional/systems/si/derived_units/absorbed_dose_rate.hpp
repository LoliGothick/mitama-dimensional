#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_ABSORBED_DOSE_RATE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_ABSORBED_DOSE_RATE_HPP
#include <dimensional/systems/si/all.hpp>
#include <dimensional/quantity.hpp>
#include <dimensional/io.hpp>

#include "absorbed_dose.hpp"

namespace mitama::systems::si {
template < class > struct absorbed_dose_rate_synonym{};

using absorbed_dose_rate_t = make_synonym_t<absorbed_dose_rate_synonym, decltype(gray / second<>)>;

inline constexpr absorbed_dose_rate_t absorbed_dose_rate{};

}

namespace mitama {
template <> struct  abbreviation_<systems::si::absorbed_dose_rate_t> { static constexpr char str[] = "Gy/s"; };
}
#endif
