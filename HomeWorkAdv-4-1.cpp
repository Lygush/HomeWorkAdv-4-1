#include "List.h"
#include "catch2/catch_session.hpp"
#include "catch2/catch_test_macros.hpp"

TEST_CASE("Test1", "List") {
List list;
CHECK(list.Empty() == true);
list.PushFront(4);
list.PushFront(-2);
CHECK(list.Size() == 2);
}

int main() {
    return Catch::Session().run();
}