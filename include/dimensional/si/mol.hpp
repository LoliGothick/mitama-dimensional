#pragma once
#include "../units.hpp"
#include "../quotient.hpp"

namespace mitama::si {
// base dimesnion
struct amount_of_substance {
    using is_base_dimension = void;
};

using mol_t = make_unit_t<amount_of_substance>;
using millimol_t = scaled_unit_t<mol_t, std::milli>;
using micromol_t = scaled_unit_t<mol_t, std::micro>;
using kilomol_t = scaled_unit_t<mol_t, std::kilo>;

inline constexpr mol_t mols{};

template < std::intmax_t N = 1 > inline constexpr powered_t<mol_t, N> mol{};

}