/*
 * Copyright (c) 2023 Arm Limited.
 *
 * SPDX-License-Identifier: MIT
 */

#ifndef HWCPIPE_COUNTER_H
#define HWCPIPE_COUNTER_H

// all possible counters
typedef enum hwcpipe_counter {
    MaliGPUActiveCy,
    MaliGPUIRQActiveCy,
    MaliFragQueueTask,
    MaliFragQueueActiveCy,
    MaliNonFragQueueActiveCy,
    MaliExtBusWrBt,
    MaliExtBusRdBt,
    MaliExtBusRdStallCy,
    MaliExtBusWrStallCy,
    MaliFragActiveCy,
    MaliFragThread,
    MaliFragHelpThread,
    MaliFragRastQd,
    MaliFragEZSTestQd,
    MaliFragEZSKillQd,
    MaliFragLZSTestTd,
    MaliFragLZSKillTd,
    MaliFragTile,
    MaliFragTileKill,
    MaliNonFragActiveCy,
    MaliNonFragThread,
    MaliCoreActiveCy,
    MaliEngInstr,
    MaliLSIssueCy,
    MaliTexInstr,
    MaliTexFiltIssueCy,
    MaliLSRdHitCy,
    MaliLSWrHitCy,
    MaliGeomTrianglePrim,
    MaliGeomPointPrim,
    MaliGeomLinePrim,
    MaliGeomFrontFacePrim,
    MaliGeomBackFacePrim,
    MaliGeomVisiblePrim,
    MaliGeomFaceXYPlaneCullPrim,
    MaliGeomZPlaneCullPrim,
    MaliTilerActiveCy,
    MaliMMULookup,
    MaliL2CacheLookup,
    MaliL2CacheRdLookup,
    MaliL2CacheWrLookup,
    MaliFragFPKActiveCy,
    MaliLSRdCy,
    MaliLSWrCy,
    MaliLSAtomic,
    MaliTilerPosCacheHit,
    MaliTilerPosCacheMiss,
    MaliGeomSampleCullPrim,
    MaliTilerRdBt,
    MaliTilerWrBt,
    MaliGeomPosShadTask,
    MaliTilerPosShadStallCy,
    MaliTilerPosShadFIFOFullCy,
    MaliTilerVarCacheHit,
    MaliTilerVarCacheMiss,
    MaliGeomVarShadTask,
    MaliTilerVarShadStallCy,
    MaliFragRastPrim,
    MaliFragWarp,
    MaliFragPartWarp,
    MaliFragEZSUpdateQd,
    MaliFragLZSTestQd,
    MaliFragLZSKillQd,
    MaliFragOpaqueQd,
    MaliNonFragWarp,
    MaliEngDivergedInstr,
    MaliEngStarveCy,
    MaliTexQuads,
    MaliTexQuadPass,
    MaliTexQuadPassDescMiss,
    MaliTexQuadPassMip,
    MaliTexQuadPassTri,
    MaliTexCacheFetch,
    MaliTexCacheCompressFetch,
    MaliTexCacheLookup,
    MaliLSFullRd,
    MaliLSPartRd,
    MaliLSFullWr,
    MaliLSPartWr,
    MaliVarInstr,
    MaliVar32IssueSlot,
    MaliVar16IssueSlot,
    MaliAttrInstr,
    MaliSCBusFFEL2RdBt,
    MaliSCBusFFEExtRdBt,
    MaliSCBusLSL2RdBt,
    MaliSCBusLSExtRdBt,
    MaliSCBusTexL2RdBt,
    MaliSCBusTexExtRdBt,
    MaliSCBusOtherL2RdBt,
    MaliSCBusLSWBWrBt,
    MaliSCBusTileWrBt,
    MaliSCBusLSOtherWrBt,
    MaliL2CacheRd,
    MaliL2CacheRdStallCy,
    MaliL2CacheWr,
    MaliL2CacheWrStallCy,
    MaliL2CacheSnp,
    MaliL2CacheSnpStallCy,
    MaliL2CacheL1Rd,
    MaliL2CacheL1RdStallCy,
    MaliL2CacheL1Wr,
    MaliL2CacheSnpLookup,
    MaliExtBusRd,
    MaliExtBusRdNoSnoop,
    MaliExtBusRdUnique,
    MaliExtBusRdOTQ1,
    MaliExtBusRdOTQ2,
    MaliExtBusRdOTQ3,
    MaliExtBusRdLat0,
    MaliExtBusRdLat128,
    MaliExtBusRdLat192,
    MaliExtBusRdLat256,
    MaliExtBusRdLat320,
    MaliExtBusWr,
    MaliExtBusWrNoSnoopFull,
    MaliExtBusWrNoSnoopPart,
    MaliExtBusWrSnoopFull,
    MaliExtBusWrSnoopPart,
    MaliExtBusWrOTQ1,
    MaliExtBusWrOTQ2,
    MaliExtBusWrOTQ3,
    MaliL2CacheIncSnp,
    MaliL2CacheIncSnpStallCy,
    MaliCoreAllRegsWarp,
    MaliCoreFullQdWarp,
    MaliTexMipInstr,
    MaliTexCompressInstr,
    MaliTex3DInstr,
    MaliTexTriInstr,
    MaliTexCoordStallCy,
    MaliTexDataStallCy,
    MaliTexPartDataStallCy,
    MaliSCBusLSWrBt,
    MaliSCBusOtherWrBt,
    MaliFragRastPartQd,
    MaliEngFMAInstr,
    MaliEngCVTInstr,
    MaliEngSFUInstr,
    MaliEngICacheMiss,
    MaliEngSWBlend,
    MaliTexInBt,
    MaliTexDescStallCy,
    MaliTexDataFetchStallCy,
    MaliTexFiltStallCy,
    MaliTexFullBiFiltCy,
    MaliTexFullTriFiltCy,
    MaliTexOutMsg,
    MaliTexOutBt,
    MaliAnyActiveCy,
    MaliCSFMCUActiveCy,
    MaliGPUIterActiveCy,
    MaliVertIterQueuedCy,
    MaliVertIterAssignStallCy,
    MaliCompIterQueuedCy,
    MaliCompIterAssignStallCy,
    MaliFragIterQueuedCy,
    MaliFragIterAssignStallCy,
    MaliCSFCEUActiveCy,
    MaliCSFLSUActiveCy,
    MaliCSFCS0ActiveCy,
    MaliCSFCS1ActiveCy,
    MaliCSFCS2ActiveCy,
    MaliCSFCS3ActiveCy,
    MaliL2CacheEvict,
    MaliL2CacheCleanUnique,
    MaliEngNarrowInstr,
    MaliFragRastCoarseQd,
    MaliRTUTri,
    MaliRTUBox,
    MaliRTUTriBin1,
    MaliRTUTriBin5,
    MaliRTUTriBin9,
    MaliRTUTriBin13,
    MaliRTUBoxBin1,
    MaliRTUBoxBin5,
    MaliRTUBoxBin9,
    MaliRTUBoxBin13,
    MaliRTUOpaqueHit,
    MaliRTUNonOpaqueHit,
    MaliRTUFirstHitTerm,
    MaliRTUMiss,
    MaliRTURay,
    MaliRTUBoxIssueCy,
    MaliRTUTriIssueCy,
    MaliGeomFaceCullPrim,
    MaliGeomPlaneCullPrim,
    MaliBinPhaseIterQueuedCy,
    MaliBinPhaseIterAssignStallCy,
    MaliMainPhaseIterQueuedCy,
    MaliMainPhaseIterAssignStallCy,
    MaliTexL1CacheLoadCy,
    MaliTexCacheSimpleLoadCy,
    MaliTexL1CacheOutputCy,
    MaliTexL1CacheLookupCy,
    MaliTexOutSingleMsg,
    MaliTexCacheLookupCy,
    MaliTexCacheComplexLoadCy,
    MaliTexIndexCy,
    MaliTexClkStarvedCy,
    MaliTexClkActiveCy,
    MaliGeomScissorCullPrim,
    MaliGeomVisibleDVSPrim
} hwcpipe_counter;

#endif /* HWCPIPE_COUNTER_H */
