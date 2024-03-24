#include "TallinnTauTag/Tools/interface/format_vT.h"

#include <sstream> // std::ostringstream

namespace 
{
  template <typename T>
  std::string
  format_vT(const std::vector<T>& vT)
  {
    std::ostringstream os;
    os << "{ ";
    size_t numEntries = vT.size();
    for ( size_t idxEntry = 0; idxEntry < numEntries; ++idxEntry )
    {
      os << vT[idxEntry];
      if ( idxEntry < numEntries - 1 )
      {
        os << ", ";
      }
    }
    os << " }";
    return os.str();
  }
} // namespace

std::string
format_vchar(const std::vector<const char*>& vc)
{
  return format_vT(vc);
}

std::string
format_vfloat(const std::vector<float>& vf)
{
  return format_vT(vf);
}

std::string
format_vint64_t(const std::vector<int64_t>& vi)
{
  return format_vT(vi);
}

std::string
format_vstring(const std::vector<std::string>& vs)
{
  return format_vT(vs);
}
