#ifndef MITAMA_DIMENSIONAL_DERIVED_UNITS_INDUCTANCE_HPP
#define MITAMA_DIMENSIONAL_DERIVED_UNITS_INDUCTANCE_HPP
#include "../si_units/all.hpp"
#include "../quantity.hpp"
#include "../io.hpp"


namespace mitama::si {
using inductance_t = decltype(kilogram<> * meter<2> * second<-2> * ampere<-2>);

inline constexpr inductance_t henry{}; 
}

namespace mitama {
template <> struct abbreviation<si::inductance_t> { static constexpr char str[] = "H"; };
}
#endif