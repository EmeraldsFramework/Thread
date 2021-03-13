#include "Thread.spec.h"

module(T_Thread, {
    describe("#get_value", {
        it("returns `Hello, World!`", {
            assert_that_charptr("Hello, World!" equals to "Hello, World!");
        });
    });
});

spec_suite({
    T_Thread();
});

spec({
    run_spec_suite("all");
});
