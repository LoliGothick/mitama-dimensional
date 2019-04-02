#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_DOSE_EQUIVALENCE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_DOSE_EQUIVALENCE_HPP
#include "../si_units/all.hpp"
#include "../quantity.hpp"
#include "../io.hpp"

namespace mitama::si {
struct equivalent_dose { using is_base_dimension = void; };
using sievert_t = make_unit_t<equivalent_dose>;
inline constexpr sievert_t sievert{};
}

namespace mitama {
template <> struct symbol_<si::equivalent_dose> { static constexpr char str[] = "Sv"; };
}
#endif