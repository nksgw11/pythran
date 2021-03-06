#ifndef PYTHONIC_BUILTIN_DICT_ITEMS_HPP
#define PYTHONIC_BUILTIN_DICT_ITEMS_HPP

#include "pythonic/include/__builtin__/dict/items.hpp"

#include "pythonic/include/utils/functor.hpp"
#include "pythonic/include/types/dict.hpp"
#include "pythonic/include/types/list.hpp"

#include <tuple>

PYTHONIC_NS_BEGIN

namespace __builtin__
{

  namespace dict
  {

    template <class K, class V>
    types::list<types::make_tuple_t<K, V>> items(types::dict<K, V> const &d)
    {
      return {d.item_begin(), d.item_end()};
    }
  }
}
PYTHONIC_NS_END

#endif
