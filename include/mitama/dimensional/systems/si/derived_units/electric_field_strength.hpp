#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_ELECTRIC_FIELD_STRENGTH_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_ELECTRIC_FIELD_STRENGTH_HPP
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>

#include "voltage.hpp"

namespace mitama::systems::si {
template<class> struct electric_field_strength_synonym{};
using electric_field_strength_t = make_synonym_t<electric_field_strength_synonym, decltype(volts / meters)>;

inline constexpr electric_field_strength_t electric_field_strength{};

}

namespace mitama {
template <> struct  abbreviation_<systems::si::electric_field_strength_t> { static constexpr char str[] = "V/m"; };
}
#endif
