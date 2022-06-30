#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BAM2SAMPlugin.h"

void BAM2SAMPlugin::input(std::string file) {
 inputfile = file;
}

void BAM2SAMPlugin::run() {
   
}

void BAM2SAMPlugin::output(std::string file) {
 // alpha_diversity.py -i filtered_otu_table.biom -m observed_species,chao1,shannon,PD_whole_tree -t rep_set.tre -o alpha.txt
   std::string command = "samtools view " + inputfile + " -o "+file;
 std::cout << command << std::endl;

 system(command.c_str());
}

PluginProxy<BAM2SAMPlugin> BAM2SAMPluginProxy = PluginProxy<BAM2SAMPlugin>("BAM2SAM", PluginManager::getInstance());
