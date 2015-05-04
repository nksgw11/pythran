#ifndef PYTHONIC_INCLUDE_NUMPY_CONJUGATE_HPP
#define PYTHONIC_INCLUDE_NUMPY_CONJUGATE_HPP

#include "pythonic/utils/proxy.hpp"
#include"pythonic/types/ndarray.hpp"
#include "pythonic/types/numexpr_to_ndarray.hpp"
#include "pythonic/utils/numpy_traits.hpp"
#include <nt2/include/functions/conj.hpp>

namespace pythonic {

    namespace numpy {
#define NUMPY_NARY_FUNC_NAME conjugate
#define NUMPY_NARY_FUNC_SYM nt2::conj
#include "pythonic/include/types/numpy_nary_expr.hpp"
    }

}

#endif

