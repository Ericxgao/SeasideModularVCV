#include "plugin.hpp"

Plugin* pluginInstance;

void init(Plugin* p) {
	pluginInstance = p;

	// Add modules here
	p->addModel(modelProteus);
	#ifndef METAMODULE
	p->addModel(modelProteusX);
	#endif
	p->addModel(modelJawari);
	p->addModel(modelTala);
	p->addModel(modelRaga);
	#ifndef METAMODULE
	p->addModel(modelBlank_20HP);
	#endif
	// Any other plugin initialization may go here.
	// As an alternative, consider lazy-loading assets and lookup tables when your module is created to reduce startup times of Rack.
}

