#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_ELECTRIC_CHARGE_DENSITY_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_ELECTRIC_CHARGE_DENSITY_HPP
#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/io.hpp>

#include "electric_charge.hpp"

namespace mitama::systems::si {
template<class> struct electric_charge_density_synonym{};
using electric_charge_density_t = make_synonym_t<electric_charge_density_synonym, decltype(coulomb / meter<3>)>;

inline constexpr electric_charge_density_t electric_charge_density{};

inline constexpr electric_charge_density_t charge_density{};

}

namespace mitama {
template <> struct  abbreviation_<systems::si::electric_charge_density_t> { static constexpr char str[] = "C/m^3"; };
}
#endif
