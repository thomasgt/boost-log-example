#include "boost/log/core.hpp"
#include "boost/log/sources/severity_logger.hpp"
#include "boost/log/utility/setup/common_attributes.hpp"

namespace logging = boost::log;

void init() {
  logging::add_common_attributes();
}

int main(int argc, char *argv[]) {
  logging::sources::logger logger;
  BOOST_LOG(logger) << "I am a log!";
}