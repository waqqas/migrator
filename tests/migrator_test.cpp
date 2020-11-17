#include "migrator/migrator.hpp"

#include <catch2/catch.hpp>

using namespace migrator;

TEST_CASE("Parsing")
{
   uri uri("http://user:pass@www.test.com:81/static/index.html?q=books#fragment");

   REQUIRE(uri.scheme() == "http");
   REQUIRE(uri.host() == "www.test.com");
   REQUIRE(uri.port() == "81");
   REQUIRE(uri.path() == "/static/index.html");

   // uri.userInfo()   // user:pass
   //    uri.query()   // q=books
   //    uri.anchor()  // fragment
}