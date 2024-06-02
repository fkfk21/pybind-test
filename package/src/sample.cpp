#include <pybind11/pybind11.h>

namespace py = pybind11;

// 名前空間の定義
namespace mynamespace {

    // クラスの定義
    class MyClass {
    private:
        int value;
    public:
        MyClass(int value) : value(value) {}

        void setValue(int newValue) {
            this->value = newValue;
        }

        int getValue() const {
            return value;
        }
    };

    int add(int a, int b) {
        return a + b;
    }

} // namespace mynamespace

// 関数の定義
int add(int a, int b) {
    return a + b;
}

PYBIND11_MODULE(pybind_sample, m) {
    m.doc() = "pybind11 example module"; // モジュールのドキュメント
    auto myspace = m.def_submodule("myspace", "A submodule"); // 名前空間の定義

    myspace.def("add", &mynamespace::add, "A function which adds two numbers"); // 名前空間の中の関数をバインド

    // 名前空間の中のクラスをバインド
    py::class_<mynamespace::MyClass>(myspace, "MyClass")
        .def(py::init<int>())
        .def("setValue", &mynamespace::MyClass::setValue)
        .def("getValue", &mynamespace::MyClass::getValue);

    // 名前空間の中の関数をバインド
    m.def("add", &add, "A function which adds two numbers");
}
