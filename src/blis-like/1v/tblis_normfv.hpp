#ifndef _TBLIS_NORMFV_HPP_
#define _TBLIS_NORMFV_HPP_

#include "tblis.hpp"

namespace tblis
{
namespace blis_like
{

template <typename T> void tblis_normfv(dim_t n, const T* A, inc_t inc_A, T& norm);

template <typename T>    T tblis_normfv(dim_t n, const T* A, inc_t inc_A);

template <typename T> void tblis_normfv(const Matrix<T>& A, T& norm);

template <typename T>    T tblis_normfv(const Matrix<T>& A);

}
}

#endif
