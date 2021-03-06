#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_MOLAR_HEAT_CAPACITY_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_MOLAR_HEAT_CAPACITY_HPP
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>

#include "energy.hpp"

namespace mitama::systems::si {
template<class> struct molar_heat_capacity_synonym{};
using molar_heat_capacity_t = make_synonym_t<molar_heat_capacity_synonym, decltype( joule / (kelvin<> * mol<>) )>;

inline constexpr molar_heat_capacity_t molar_heat_capacity{};

}

#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_MOLAR_ENTROPY_HPP
namespace mitama {
template <> struct  abbreviation_<systems::si::molar_heat_capacity_t> { static constexpr char str[] = "J/(K mol)"; };
}
#endif

#endif
