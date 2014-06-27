#ifndef SiPixelCommon_SiPixelFolderOrganizer_h
#define SiPixelCommon_SiPixelFolderOrganizer_h
// -*- C++ -*-
//
// Package:     SiPixelCommon
// Class  :     SiPixelFolderOrganizer
// 
/**\class SiPixelFolderOrganizer SiPixelFolderOrganizer.h DQM/SiPixelCommon/interface/SiPixelFolderOrganizer.h
   
Description: <Organizes the folders for the monitoring elements of the Pixel detector. Its methods return strings with names of folders to be created and used.>

Usage:
<usage>

*/
//
// Original Author:  chiochia
//         Created:  Thu Jan 26 23:49:46 CET 2006
#include "DQMServices/Core/interface/DQMStore.h"
#include <boost/cstdint.hpp>
#include <string>

class SiPixelFolderOrganizer {
  
 public:

  /// Constructor
  SiPixelFolderOrganizer();

  /// Destructor
  virtual ~SiPixelFolderOrganizer();
  
  /// Set folder name for a module or plaquette
  //type is: BPIX  mod=0, lad=1, lay=2, phi=3, 
  //         FPIX  mod=0, blade=4, disc=5, ring=6
  bool setModuleFolder(DQMStore::IBooker&, const uint32_t& rawdetid=0, int type=0, bool isUpgrade=false);
  void getModuleFolder(const uint32_t& rawdetid, std::string& path, bool isUpgrade);

  /// Set folder name for a FED (used in the case of errors without detId)
  bool setFedFolder(DQMStore::IBooker&, const uint32_t FedId);
  
 private:

  std::string rootFolder;
};
#endif
