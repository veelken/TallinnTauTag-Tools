#ifndef TallinnTauTag_Tools_format_vT_h
#define TallinnTauTag_Tools_format_vT_h

#include <string> // std::string
#include <vector> // std::vector

std::string
format_vchar(const std::vector<const char*>& vc);

std::string
format_vfloat(const std::vector<float>& vf);

std::string
format_vint64_t(const std::vector<int64_t>& vi);

std::string
format_vstring(const std::vector<std::string>& vs);

#endif
