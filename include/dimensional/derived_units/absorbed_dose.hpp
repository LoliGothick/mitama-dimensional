#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_ABSORBED_DOSE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_ABSORBED_DOSE_HPP
#include "../si_units/all.hpp"
#include "../quantity.hpp"
#include "../io.hpp"
#include "../refinement.hpp"


namespace mitama::si {
template<class> struct absorbed_dose_synonym{};
using absorbed_dose_t = make_synonym_t<absorbed_dose_synonym, decltype(meter<2> * second<-2>)>;

inline constexpr absorbed_dose_t gray{};
using absorbed_dose_r = make_refinement_symbol_t<absorbed_dose_t>;
}

namespace mitama {
template <> struct abbreviation<si::absorbed_dose_t> { static constexpr char str[] = "Gy"; };
}
#endif