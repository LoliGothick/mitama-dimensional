#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_ELECTRICAL_CONDUCTIVITY_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_ELECTRICAL_CONDUCTIVITY_HPP
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>

#include "conductance.hpp"

namespace mitama::systems::si {
template<class> struct electrical_conductivity_synonym{};
using electrical_conductivity_t = make_synonym_t<electrical_conductivity_synonym, decltype(siemens / meter<>)>;

inline constexpr electrical_conductivity_t electrical_conductivity{};

}

namespace mitama {
template <> struct  abbreviation_<systems::si::electrical_conductivity_t> { static constexpr char str[] = "S/m"; };
}
#endif
