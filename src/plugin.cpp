#include "plugin.hpp"

Plugin* pluginInstance;

void init(Plugin* p) {
	pluginInstance = p;

	// Add modules here
	p->addModel(modelProteus);
	p->addModel(modelProteusX);
	p->addModel(modelProteusPlus);
	p->addModel(modelJawari);
	p->addModel(modelEclipse);
	p->addModel(modelTala);
	// Any other plugin initialization may go here.
	// As an alternative, consider lazy-loading assets and lookup tables when your module is created to reduce startup times of Rack.
}

