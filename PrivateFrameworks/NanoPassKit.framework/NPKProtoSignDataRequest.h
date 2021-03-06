/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSignDataRequest : PBRequest <NSCopying> {
    NSString * _aid;
    NSData * _dataToSign;
    NSData * _digestToSign;
    int  _entanglementMode;
    struct { 
        unsigned int entanglementMode : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *aid;
@property (nonatomic, retain) NSData *dataToSign;
@property (nonatomic, retain) NSData *digestToSign;
@property (nonatomic) int entanglementMode;
@property (nonatomic, readonly) BOOL hasAid;
@property (nonatomic, readonly) BOOL hasDataToSign;
@property (nonatomic, readonly) BOOL hasDigestToSign;
@property (nonatomic) BOOL hasEntanglementMode;

- (void).cxx_destruct;
- (int)StringAsEntanglementMode:(id)arg1;
- (id)aid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataToSign;
- (id)description;
- (id)dictionaryRepresentation;
- (id)digestToSign;
- (int)entanglementMode;
- (id)entanglementModeAsString:(int)arg1;
- (BOOL)hasAid;
- (BOOL)hasDataToSign;
- (BOOL)hasDigestToSign;
- (BOOL)hasEntanglementMode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAid:(id)arg1;
- (void)setDataToSign:(id)arg1;
- (void)setDigestToSign:(id)arg1;
- (void)setEntanglementMode:(int)arg1;
- (void)setHasEntanglementMode:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
