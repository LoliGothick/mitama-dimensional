#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_REACTANCE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_REACTANCE_HPP
#include "../si_units/all.hpp"
#include "../quantity.hpp"
#include "../io.hpp"
#include "../refinement.hpp"


namespace mitama::si {
template<class> struct reactance_synonym{};
using reactance_t = make_synonym_t<reactance_synonym, decltype(kilogram<> * meter<2> * second<-3> * ampere<-2>)>;

#if !defined(MITAMA_DIMENSIONAL_DERIVED_UNITS_RESISTANCE_HPP) && !defined(MITAMA_DIMENSIONAL_DERIVED_UNITS_IMPEDANCE_HPP)
inline constexpr reactance_t ohm{};
using reactance_r = make_refinement_symbol_t<reactance_t>;
#endif
}

#if !defined(MITAMA_DIMENSIONAL_DERIVED_UNITS_RESISTANCE_HPP) && !defined(MITAMA_DIMENSIONAL_DERIVED_UNITS_IMPEDANCE_HPP)
namespace mitama {
template <> struct abbreviation<si::reactance_t> { static constexpr char str[] = "Ω"; };
}
#endif

#endif
