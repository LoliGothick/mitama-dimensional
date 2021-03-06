#include <mitama/dimensional/systems/si/all.hpp>
#include <mitama/dimensional/quantity.hpp>
#include <mitama/dimensional/systems/si/derived_units/action.hpp>
#include <mitama/dimensional/systems/si/derived_units/electric_charge.hpp>
#include <mitama/dimensional/systems/si/derived_units/heat_capacity.hpp>
#include <mitama/dimensional/systems/si/derived_units/frequency.hpp>
#include <mitama/dimensional/systems/si/derived_units/velocity.hpp>
#include <mitama/dimensional/systems/si/derived_units/luminous_efficacy.hpp>

namespace mitama::systems::si::constants{

    template < class T = long double >
    inline constexpr quantity_t<action_t, T> h = static_cast<T>(6.62607015e-34l);

    template < class T = long double >
    inline constexpr quantity_t<electric_charge_t, T> e = static_cast<T>(1.602176634e-19l);

    template < class T = long double >
    inline constexpr quantity_t<heat_capacity_t, T> k  = static_cast<T>(1.380649e-23l);

    template < class T = long long >
    inline constexpr quantity_t<reciprocal_t<micromol_t>, T> NA = static_cast<T>(602214076000000000ll);

    template < class T = long long >
    inline constexpr quantity_t<frequency_t, T> delta_nu_133Cs = static_cast<T>(9192631770ll);

    template < class T = long long >
    inline constexpr quantity_t<velocity_t, T> c = static_cast<T>(299792458ll);

    template < class T = long long >
    inline constexpr quantity_t<luminous_efficacy_t, T> Kcd = static_cast<T>(683ll);
} 