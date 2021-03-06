/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit
 */

@interface FKPerson : NSObject <NSCopying, NSSecureCoding> {
    NSString * _abDatabaseUID;
    NSString * _abRecordGUID;
    int  _abRecordID;
    NSSet * _allValues;
    NSNumber * _emailAddressCount;
    BOOL  _hasUnreadMessages;
    NSString * _initials;
    NSMutableDictionary * _metadata;
    NSString * _name;
    BOOL  _needsSave;
    NSNumber * _phoneNumberCount;
    NSString * _preferredReplyAs;
    NSString * _primaryDestination;
}

@property (nonatomic, readonly) BOOL hasUnreadMessages;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic) BOOL needsSave;
@property (nonatomic, retain) NSString *preferredReplyAs;

+ (id)_allEmailValuesForRecord:(void*)arg1;
+ (id)_allEmailValuesInSet:(id)arg1;
+ (id)_allPhoneValuesForRecord:(void*)arg1;
+ (id)_allPhoneValuesInSet:(id)arg1;
+ (int)addValue:(void*)arg1 withLabel:(struct __CFString { }*)arg2 toPerson:(void*)arg3 property:(int)arg4;
+ (id)allValuesForPerson:(void*)arg1;
+ (id)preferredNameForPerson:(void*)arg1;
+ (id)sharedMetadataQueue;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (float)_allValuesMatchScore:(id)arg1;
- (void*)_bestRecordMatchFromDictionary:(id)arg1 addressBook:(void*)arg2;
- (id)_metadataDictionary;
- (void)_postChangeNotification;
- (void)_reconcile:(void*)arg1 canPostChangeNotification:(BOOL)arg2 shouldLogUpdates:(BOOL)arg3;
- (id)_recordMatchDictionaryFromCFArray:(struct __CFArray { }*)arg1 followLinks:(BOOL)arg2 addressBook:(void*)arg3;
- (void)_setABRecordGUID:(id)arg1;
- (BOOL)_updateFromDictionaryRepresentation:(id)arg1 shouldLogUpdates:(BOOL)arg2;
- (id)abDatabaseUID;
- (id)abRecordGUID;
- (void)addMetadataEntriesFromDictionary:(id)arg1;
- (id)allValues;
- (unsigned int)allValuesCount;
- (void*)copyABPersonWithAddressBook:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasName;
- (BOOL)hasUnreadMessages;
- (id)init;
- (id)initWithABRecordGUID:(id)arg1 addressBook:(void*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinations:(id)arg1 addressBook:(void*)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void*)arg2;
- (id)initWithFavorite:(id)arg1 addressBook:(void*)arg2;
- (id)initials;
- (BOOL)isEqualToDictionaryRepresentation:(id)arg1;
- (BOOL)isLikePerson:(id)arg1;
- (id)metadata;
- (id)metadataValueForKey:(id)arg1;
- (BOOL)needsSave;
- (id)preferredReplyAs;
- (id)primaryDestination;
- (void)refreshWithAddressBook:(void*)arg1;
- (void)removeAllMetadataValues;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setNeedsSave:(BOOL)arg1;
- (void)setPreferredReplyAs:(id)arg1;
- (BOOL)updateFromDictionaryRepresentation:(id)arg1;

@end
