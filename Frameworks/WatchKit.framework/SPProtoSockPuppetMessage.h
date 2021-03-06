/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoSockPuppetMessage : PBCodable <NSCopying> {
    SPProtoAudioFilePlayerMessage * _audioFilePlayerMessage;
    SPProtoSockPuppetPlist * _plist;
}

@property (nonatomic, retain) SPProtoAudioFilePlayerMessage *audioFilePlayerMessage;
@property (nonatomic, readonly) BOOL hasAudioFilePlayerMessage;
@property (nonatomic, readonly) BOOL hasPlist;
@property (nonatomic, retain) SPProtoSockPuppetPlist *plist;

+ (id)sockPuppetMessageWithSubMessage:(id)arg1 setterSelector:(SEL)arg2;

- (void).cxx_destruct;
- (id)audioFilePlayerMessage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAudioFilePlayerMessage;
- (BOOL)hasPlist;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)plist;
- (BOOL)readFrom:(id)arg1;
- (void)setAudioFilePlayerMessage:(id)arg1;
- (void)setPlist:(id)arg1;
- (void)writeTo:(id)arg1;

@end
