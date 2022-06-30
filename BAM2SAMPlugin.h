#ifndef BAM2SAMLUGIN_H
#define BAM2SAMPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class BAM2SAMPlugin : public Plugin
{
public: 
 std::string toString() {return "BAM2SAM";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
