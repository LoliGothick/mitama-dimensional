#ifndef MITAMA_DIMENSIONAL_TEST_UTIL_HPP
#define MITAMA_DIMENSIONAL_TEST_UTIL_HPP

#include <type_traits>
#include <utility>
#include <tuple>

#define IS_INVALID_EXPR(...)                                     \
  IS_INVALID_EXPR_IMPL1(__VA_ARGS__)                             \
  IS_INVALID_EXPR_IMPL2

#define IS_INVALID_EXPR_IMPL1(...) bool(false ? ::mitama::make_overload([](auto x)->decltype(__VA_ARGS__, std::false_type{}){return{};},[](...)->std::true_type{return{};})
#define IS_INVALID_EXPR_IMPL2(...) (::mitama::type_transfer<__VA_ARGS__>{}): ::mitama::protean_bool{})
#define DECLVAL(N) std::declval<std::tuple_element_t<N,typename decltype(x)::type>>()
#define DECLTYPE(N) std::tuple_element_t<N,typename decltype(x)::type>

namespace mitama {
template <class, class = void> struct is_comparable : std::false_type {};

template <class T>
struct is_comparable<T, std::void_t<decltype(std::declval<T const &>() ==
                                             std::declval<T const &>())>>
    : std::true_type {};

template <class, class, class = void>
struct is_comparable_with : std::false_type {};

template <class T, class U>
struct is_comparable_with<T, U,
                          std::void_t<decltype(std::declval<T const &>() ==
                                               std::declval<U const &>())>>
    : std::true_type {};

struct protean_bool {
  constexpr operator std::true_type() const { return {}; }
  constexpr operator std::false_type() const { return {}; }
};

template <class T, class... Ts> struct Overload : T, Overload<Ts...> {
  Overload(T a, Ts... xs) : T{a}, Overload<Ts...>{xs...} {}
  using T::operator();
  using Overload<Ts...>::operator();
};

template <class T> struct Overload<T> : T {
  Overload(T a) : T{a} {}
  using T::operator();
};

template <class... F> inline constexpr Overload<F...> make_overload(F &&... f) {
  return {{std::forward<F>(f)}...};
}
template <class... Ts> struct type_transfer { using type = std::tuple<Ts...>; };

template < class >
struct basis_;

template < class _, class... Units, template < class, class... > class D >
struct basis_<D<_, Units...>>
{ template < int N > using type = typename std::tuple_element_t<N,std::tuple<Units...>>::dimension_type; };

} // namespace mitama
#endif