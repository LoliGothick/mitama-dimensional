#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_FORCE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_FORCE_HPP
#include "../si_units/all.hpp"
#include "../quantity.hpp"
#include "../io.hpp"
#include "../refinement.hpp"

namespace mitama::si {
template<class> struct force_repr{};
using force_t = make_synonym_t<force_repr, decltype(kilogram<> * meter<> * second<-2>)>;
#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_WEIGHT_HPP
inline constexpr force_t newton{};
using force_r = make_refiment_symbol_t<force_t>;
#endif
}

#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_WEIGHT_HPP
namespace mitama {
template <> struct abbreviation<si::force_t> { static constexpr char str[] = "N"; };
}
#endif

#endif