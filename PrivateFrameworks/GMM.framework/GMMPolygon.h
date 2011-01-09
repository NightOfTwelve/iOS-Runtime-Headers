/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData, NSMutableArray;



@interface GMMPolygon : PBCodable 
{
    NSInteger _lineWidth;
    BOOL _hasLineWidth;
    NSInteger _lineColor;
    BOOL _hasLineColor;
    NSData *_line;
    NSInteger _fillColor;
    BOOL _hasFillColor;
    NSMutableArray *_innerBoundarys;
}

@property(readonly) BOOL hasLine;
@property(readonly) NSInteger innerBoundarysCount;
@property(retain) NSMutableArray *innerBoundarys; /* unknown property attribute: V_innerBoundarys */
@property(readonly) BOOL hasFillColor; /* unknown property attribute: V_hasFillColor */
@property NSInteger fillColor; /* unknown property attribute: V_fillColor */
@property(retain) NSData *line; /* unknown property attribute: V_line */
@property(readonly) BOOL hasLineColor; /* unknown property attribute: V_hasLineColor */
@property NSInteger lineColor; /* unknown property attribute: V_lineColor */
@property(readonly) BOOL hasLineWidth; /* unknown property attribute: V_hasLineWidth */
@property NSInteger lineWidth; /* unknown property attribute: V_lineWidth */


- (id)init;
- (void)dealloc;
- (void)setLineWidth:(NSInteger)arg1;
- (void)setLineColor:(NSInteger)arg1;
- (BOOL)hasLine;
- (void)setFillColor:(NSInteger)arg1;
- (NSInteger)innerBoundarysCount;
- (void)setInnerBoundary:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)innerBoundaryAtIndex:(NSUInteger)arg1;
- (void)addInnerBoundary:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)innerBoundarys;
- (void)setInnerBoundarys:(id)arg1;
- (BOOL)hasFillColor;
- (NSInteger)fillColor;
- (id)line;
- (void)setLine:(id)arg1;
- (BOOL)hasLineColor;
- (NSInteger)lineColor;
- (BOOL)hasLineWidth;
- (NSInteger)lineWidth;

@end