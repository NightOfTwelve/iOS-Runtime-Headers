/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetFetcher : NSObject <PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _resultsByAssetCollectionByConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedFetcher;

- (void).cxx_destruct;
- (id)_fetchConfigurationForCurationWithReferencePersons:(id)arg1;
- (id)_fetchConfigurationForKeyAssetWithReferenceAsset:(id)arg1 referencePersons:(id)arg2;
- (id)_fetchConfigurationWithFilterPredicate:(id)arg1 inclusionPredicate:(id)arg2 fetchLimit:(unsigned int)arg3 reverseSortOrder:(BOOL)arg4 hideHiddenAssets:(BOOL)arg5;
- (void)_storeExistingFetchResult:(id)arg1 forAssetCollection:(id)arg2 withFetchConfiguration:(id)arg3;
- (void)clearFetchResultsForAssetCollection:(id)arg1;
- (void)dealloc;
- (id)existingCuratedAssetsFetchResultForAssetCollection:(id)arg1 referencePersons:(id)arg2;
- (id)existingFetchResultForAssetCollection:(id)arg1 withFilterPredicate:(id)arg2 inclusionPredicate:(id)arg3 fetchLimit:(unsigned int)arg4 reverseSortOrder:(BOOL)arg5 hideHiddenAssets:(BOOL)arg6;
- (id)existingKeyAssetsFetchResultForAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3;
- (id)fetchAssetsInAssetCollection:(id)arg1 withFilterPredicate:(id)arg2 inclusionPredicate:(id)arg3 fetchLimit:(unsigned int)arg4 reverseSortOrder:(BOOL)arg5 hideHiddenAssets:(BOOL)arg6;
- (id)fetchCuratedAssetsInAssetCollection:(id)arg1 referencePersons:(id)arg2;
- (id)fetchKeyAssetsInAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3;
- (id)init;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;

@end
