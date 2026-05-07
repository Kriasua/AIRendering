#include "Spout.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(SpoutSDK, m)
{
	py::class_<SpoutSender>(m, "SpoutSender")
		.def(py::init<>())
		.def("CreateSender", &SpoutSender::CreateSender)
		.def("SayHello", &SpoutSender::SayHello)
		.def("SendTexture", &SpoutSender::SendTexture)
		.def("ReleaseSender", &SpoutSender::ReleaseSender)
		;
	py::class_<SpoutReceiver>(m, "SpoutReceiver")
		.def(py::init<>())
		.def("pyCreateReceiver", &SpoutReceiver::pyCreateReceiver)
		.def("pyReceiveTexture", &SpoutReceiver::pyReceiveTexture)
		.def("ReleaseReceiver", &SpoutReceiver::ReleaseReceiver)
		.def("SelectSenderPanel", &SpoutReceiver::SelectSenderPanel)
		.def("GetWidth", &SpoutReceiver::GetWidth)
		.def("GetHeight", &SpoutReceiver::GetHeight)
		;
}

