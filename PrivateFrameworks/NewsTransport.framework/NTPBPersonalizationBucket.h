/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPersonalizationBucket : PBCodable <NSCopying> {
    struct { 
        unsigned int maximum : 1; 
        unsigned int minimum : 1; 
        unsigned int treatmentId : 1; 
    }  _has;
    long long  _maximum;
    long long  _minimum;
    long long  _treatmentId;
}

@property (nonatomic) BOOL hasMaximum;
@property (nonatomic) BOOL hasMinimum;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) long long maximum;
@property (nonatomic) long long minimum;
@property (nonatomic) long long treatmentId;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMaximum;
- (BOOL)hasMinimum;
- (BOOL)hasTreatmentId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)maximum;
- (void)mergeFrom:(id)arg1;
- (long long)minimum;
- (BOOL)readFrom:(id)arg1;
- (void)setHasMaximum:(BOOL)arg1;
- (void)setHasMinimum:(BOOL)arg1;
- (void)setHasTreatmentId:(BOOL)arg1;
- (void)setMaximum:(long long)arg1;
- (void)setMinimum:(long long)arg1;
- (void)setTreatmentId:(long long)arg1;
- (long long)treatmentId;
- (void)writeTo:(id)arg1;

@end
