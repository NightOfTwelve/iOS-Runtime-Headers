/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class BRCAccountSession, BRCAliasItem, BRCDirectoryItem, BRCDocumentItem, BRCItemID, BRCLocalContainer, BRCLocalItem, BRCLocalStatInfo, BRCServerZone, CKRecord, CKRecordID, NSMutableSet, NSNumber, NSString;

@interface BRCLocalItem : NSObject <BRCItem, BRCSyncThrottleItemProtocol> {
    BRCLocalContainer *_container;
    unsigned long long _dbRowID;
    BOOL _forceDelete;
    BOOL _forceDeletedAlready;
    NSNumber *_inFlightDiffs;
    NSNumber *_isInDocumentScope;
    BRCItemID *_itemID;
    NSNumber *_knownByServer;
    unsigned long long _localDiffs;
    unsigned long long _notifsRank;
    BRCLocalItem *_orig;
    NSNumber *_ownerKey;
    NSNumber *_parentFileID;
    NSString *_path;
    BOOL _resolvedPath;
    id _serverPathMatchID;
    BRCServerZone *_serverZone;
    BRCAccountSession *_session;
    unsigned int _sharingOptions;
    BRCLocalStatInfo *_st;
    unsigned int _syncUpState;
}

@property(readonly) BRCAliasItem * asAlias;
@property(readonly) BRCDirectoryItem * asDirectory;
@property(readonly) BRCDocumentItem * asDocument;
@property(readonly) CKRecord * baseStructureRecord;
@property(readonly) BRCLocalContainer * container;
@property(readonly) unsigned long long dbRowID;
@property(readonly) NSString * digestDescription;
@property(readonly) NSString * extension;
@property(readonly) NSString * filename;
@property(readonly) NSNumber * inFlightDiffs;
@property(readonly) BOOL isAlias;
@property(readonly) BOOL isAlmostDead;
@property(readonly) BOOL isDead;
@property(readonly) BOOL isDeadInServerTruth;
@property(readonly) BOOL isDirectory;
@property(readonly) BOOL isDocument;
@property(readonly) BOOL isFault;
@property(readonly) BOOL isFromInitialScan;
@property(readonly) BOOL isIdleOrRejected;
@property(readonly) BOOL isInDocumentScope;
@property(readonly) BOOL isKnownByServer;
@property(readonly) BOOL isKnownByServerOrInFlight;
@property(readonly) BOOL isLive;
@property(readonly) BOOL isLost;
@property(readonly) BOOL isPackage;
@property(readonly) BOOL isReadAndUploaded;
@property(readonly) BOOL isRejected;
@property(readonly) BOOL isReserved;
@property(readonly) BOOL isSharedByMe;
@property(readonly) BOOL isSharedByMeWithAShareID;
@property(readonly) BRCItemID * itemID;
@property(readonly) unsigned long long localDiffs;
@property(readonly) BOOL localNameNeedsRename;
@property(readonly) BOOL needsInsert;
@property(readonly) BOOL needsReading;
@property(readonly) BOOL needsSyncUp;
@property(readonly) BOOL needsUpload;
@property(readonly) unsigned long long notifsRank;
@property(readonly) BRCLocalItem * orig;
@property(readonly) NSNumber * ownerKey;
@property(readonly) NSNumber * parentFileID;
@property(readonly) NSString * path;
@property(readonly) BRCItemID * serverPathMatchItemID;
@property(readonly) BRCServerZone * serverZone;
@property(readonly) BRCAccountSession * session;
@property(readonly) NSMutableSet * setOfContainersIDsWithReverseAliases;
@property unsigned int sharingOptions;
@property(readonly) BRCLocalStatInfo * st;
@property(readonly) CKRecordID * structureRecordID;
@property(readonly) unsigned int syncUpState;

+ (id)newItemWithPath:(id)arg1 parentID:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)_deleteFromDB:(id)arg1 diffs:(unsigned long long)arg2 keepAliases:(BOOL)arg3;
- (id)_initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id*)arg3;
- (id)_initWithLocalItem:(id)arg1;
- (id)_initWithRelativePath:(id)arg1 parentID:(id)arg2;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (BOOL)_isInterestingUpdateForNotifs;
- (BOOL)_isInterestingUpdateForNotifsWithDiffs:(unsigned long long)arg1;
- (void)_markLostWhenReplacedByItem:(id)arg1 backoffMode:(unsigned char)arg2;
- (void)_markNeedsSyncingUp;
- (void)_sendNotificationIfNeededWithDiffs:(unsigned long long)arg1 regather:(BOOL)arg2;
- (void)_serializeStructuralPluginHints:(id)arg1;
- (id)_setOfParentIDs;
- (BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (void)applyMetadataOnFileID:(unsigned long long)arg1 liveFD:(unsigned long long)arg2;
- (id)asAlias;
- (id)asDirectory;
- (id)asDocument;
- (id)baseStructureRecord;
- (void)beginBounceAndSaveToDBWithName:(id)arg1;
- (BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2;
- (void)clearFromStage;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dbRowID;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstLocalItem:(id)arg1;
- (unsigned long long)diffAgainstOriginalItem;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (id)digestDescription;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evictWithGroup:(id)arg1 error:(id*)arg2;
- (id)extension;
- (float)fakeSync;
- (id)filename;
- (void)fixupStagedItemAtStartup;
- (void)forceUpdateNotification;
- (void)handleUnknownItemError;
- (id)inFlightDiffs;
- (id)initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id*)arg3;
- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAlias;
- (BOOL)isAlmostDead;
- (BOOL)isDead;
- (BOOL)isDeadInServerTruth;
- (BOOL)isDirectory;
- (BOOL)isDocument;
- (BOOL)isFault;
- (BOOL)isFromInitialScan;
- (BOOL)isIdleOrRejected;
- (BOOL)isInDocumentScope;
- (BOOL)isInDocumentScopeWithParent:(id)arg1;
- (BOOL)isKnownByServer;
- (BOOL)isKnownByServerOrInFlight;
- (BOOL)isLive;
- (BOOL)isLost;
- (BOOL)isPackage;
- (BOOL)isReadAndUploaded;
- (BOOL)isRejected;
- (BOOL)isReserved;
- (BOOL)isSharedByMe;
- (BOOL)isSharedByMeWithAShareID;
- (id)itemID;
- (void)learnItemID:(id)arg1 ownerKey:(id)arg2 path:(id)arg3 markLost:(BOOL)arg4;
- (BOOL)learnStagedInfoFromDownloadStageID:(id)arg1 error:(id*)arg2;
- (unsigned long long)localDiffs;
- (BOOL)localNameNeedsRename;
- (void)markBounceFailed;
- (void)markBounceFinished;
- (void)markDead;
- (void)markForceNeedsSyncUp;
- (void)markLatestRequestAcknowledged;
- (void)markLatestSyncRequestFailed;
- (void)markLatestSyncRequestRejected;
- (void)markLiveFromStage;
- (void)markLostClearGenerationID:(BOOL)arg1 backoffMode:(unsigned char)arg2;
- (void)markLostWhenReplacedByItem:(id)arg1;
- (void)markLostWithoutBackoff;
- (void)markNeedsDeleteForRescheduleOfItem:(id)arg1;
- (void)markNeedsReading;
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1;
- (void)markRemovedFromFilesystemForServerEdit:(BOOL)arg1;
- (void)markRenamedUsingServerItem:(id)arg1 parentFileID:(id)arg2;
- (void)markReserved;
- (void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned int)arg2;
- (void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned int)arg2 documentID:(unsigned int)arg3;
- (void)moveAsideLocally;
- (BOOL)needsInsert;
- (BOOL)needsReading;
- (BOOL)needsSyncUp;
- (BOOL)needsUpload;
- (unsigned long long)notifsRank;
- (id)orig;
- (id)ownerKey;
- (id)parentFileID;
- (id)parentItem;
- (id)path;
- (float)prepareDeletionSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (void)prepareForSyncUp;
- (BOOL)saveToDB;
- (BOOL)saveToDBForServerEdit:(BOOL)arg1 keepAliases:(BOOL)arg2;
- (id)serverPathMatchItemID;
- (id)serverZone;
- (id)session;
- (id)setOfContainersIDsWithReverseAliases;
- (void)setSharingOptions:(unsigned int)arg1;
- (unsigned int)sharingOptions;
- (id)st;
- (void)startDownloadWithOptions:(unsigned int)arg1 group:(id)arg2;
- (id)structureRecordBeingDeadInServerTruth:(BOOL)arg1 stageID:(id)arg2;
- (id)structureRecordID;
- (unsigned int)syncUpState;
- (void)triggerTransferNotificationIfNeeded;
- (void)updateFromFSAtPath:(id)arg1;
- (BOOL)updateFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (void)updateItemMetadataFromServerItem:(id)arg1;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (void)updateStatMetadataFromServerItem:(id)arg1;
- (void)updateStructuralCKInfoFromServerItem:(id)arg1;
- (BOOL)updateXattrInfoFromPathPath:(id)arg1 error:(id*)arg2;
- (BOOL)validateLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;

@end