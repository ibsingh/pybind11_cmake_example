//
// Created by inder on 8/12/20.
//

#include <pybind11/pybind11.h>
#include "library.cpp"

namespace py = pybind11;

PYBIND11_MODULE(example, module) {
    module.doc() = R"pbdoc(
            pybind11_cmake example
            -----------------------

            .. currentmodule:: example

            .. autosummary::
               :toctree: _generate

               add
               subtract
        )pbdoc";

    // Adding a regular function through reference.
    module.def("add", &add, R"pbdoc(
            Add two numbers

            Some other explanation about the add function.
        )pbdoc");

    module.def("sub", &sub, R"pbdoc(
            Subtract two numbers

            Some other explanation about the add function.
        )pbdoc");

    #ifdef VERSION_INFO
    m.attr("__version__") = VERSION_INFO;
    #else
    module.attr("__version__") = "dev";
    #endif
}