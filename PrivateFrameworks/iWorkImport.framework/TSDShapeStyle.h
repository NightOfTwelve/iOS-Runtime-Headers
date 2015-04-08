/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSDShapeStyle : TSSStyle <TSDMixing, TSSPreset> {
}

@property(readonly) NSString * presetKind;

+ (float)defaultFloatValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (void)initialize;
+ (void)loadShapeStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct ShapeStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FillArchive {} *x5; struct StrokeArchive {} *x6; struct ShadowArchive {} *x7; struct ReflectionArchive {} *x8; struct LineEndArchive {} *x9; struct LineEndArchive {} *x10; float x11; }*)arg2 unarchiver:(id)arg3;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (void)saveShapeStylePropertyMap:(id)arg1 toArchive:(struct ShapeStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FillArchive {} *x5; struct StrokeArchive {} *x6; struct ShadowArchive {} *x7; struct ReflectionArchive {} *x8; struct LineEndArchive {} *x9; struct LineEndArchive {} *x10; float x11; }*)arg2 archiver:(id)arg3;
+ (BOOL)validateFloatValue:(float*)arg1 forProperty:(int)arg2;

- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3;
- (void)fixImageFillTechniqueForSwatchOfSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)hasLineEnds;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ShapeStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StyleArchive {} *x5; struct ShapeStylePropertiesArchive {} *x6; unsigned int x7; }*)arg1 unarchiver:(id)arg2;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)presetKind;
- (void)saveToArchive:(struct ShapeStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StyleArchive {} *x5; struct ShapeStylePropertiesArchive {} *x6; unsigned int x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (const struct ShapeStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StyleArchive {} *x5; struct ShapeStylePropertiesArchive {} *x6; unsigned int x7; }*)shapeStyleArchiveFromUnarchiver:(id)arg1;
- (BOOL)wantsHighContrastBackgroundColor;

@end