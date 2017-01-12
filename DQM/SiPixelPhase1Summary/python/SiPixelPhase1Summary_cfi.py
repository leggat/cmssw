import FWCore.ParameterSet.Config as cms

#
# This object is used to make changes for different running scenarios
#

SiPixelPhase1Summary = cms.EDAnalyzer("SiPixelPhase1Summary",
    TopFolderName = cms.string('PixelPhase1'),
    src = cms.InputTag("siPixelDigis"),
    outputFile = cms.string('Pixel_DQM_Digi.root'),
    saveFile = cms.untracked.bool(False),
    modOn = cms.untracked.bool(True),
    twoDimOn = cms.untracked.bool(True),	
    twoDimModOn = cms.untracked.bool(True),     
    #allows to have no twoD plots on Mod level (but possibly on other levels),
    #if !twoDimOn no plots on module level anyway, no projections if twoDimOn and !twoDimModOn
    twoDimOnlyLayDisk = cms.untracked.bool(False), 
    #allows to have only twoD plots on lay/disk level (even if layOn/diskOn), no others (and no projections)
    #only possible if !reducedSet, twoD has no impact, for SiPixelMonitorClient hiRes must be true
    reducedSet = cms.untracked.bool(True),
    bigEventSize = cms.untracked.int32(1000)
)
